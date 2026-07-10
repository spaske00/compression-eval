#!/usr/bin/env python3
"""Registry, environment, source-revision, and artifact checks for listed projects."""

from __future__ import annotations

import argparse
import json
import os
import re
import shutil
import stat
import subprocess
import sys
from pathlib import Path
from typing import Any


CONTROL_ROOT = Path(__file__).resolve().parents[1]
SHARED_ROOT = CONTROL_ROOT.parent
REPO_ROOT = CONTROL_ROOT.parents[4]
REGISTRY_PATH = CONTROL_ROOT / "projects.json"
REPOS_PATH = SHARED_ROOT / "repos.txt"
EXPECTED_COUNT = 19
COMMIT_RE = re.compile(r"^[0-9a-f]{40,64}$")
KEY_RE = re.compile(r"^[a-z0-9]+(?:-[a-z0-9]+)*$")
REQUIRED_TOOLS = {
    "git": ("git",),
    "cmake": ("cmake",),
    "ninja": ("ninja",),
    "make": ("make",),
    "autotools": ("autoreconf", "autoconf", "automake", "libtoolize"),
    "meson": ("meson",),
    "python": ("python3",),
    "gcc": ("gcc-14", "g++-14"),
    "clang": ("clang", "clang++"),
}


class ValidationError(RuntimeError):
    pass


def normalize_url(value: str) -> str:
    value = value.strip().removesuffix("/").removesuffix(".git")
    if value.lower().endswith("/releases"):
        value = value[: -len("/releases")]
    return value


def load_registry(path: Path = REGISTRY_PATH) -> list[dict[str, str]]:
    data = json.loads(path.read_text(encoding="utf-8"))
    if data.get("schema_version") != 1 or data.get("revision_record") != "revision.schema.json":
        raise ValidationError("unsupported projects.json schema")
    projects = data.get("projects")
    if not isinstance(projects, list) or len(projects) != EXPECTED_COUNT:
        raise ValidationError(f"registry must contain exactly {EXPECTED_COUNT} projects")
    seen_keys: set[str] = set()
    seen_urls: set[str] = set()
    for index, project in enumerate(projects, 1):
        if not isinstance(project, dict) or set(project) != {"key", "input_url", "canonical_url"}:
            raise ValidationError(f"registry entry {index} has incorrect fields")
        key = project["key"]
        canonical = normalize_url(project["canonical_url"])
        if not KEY_RE.fullmatch(key):
            raise ValidationError(f"invalid project key: {key!r}")
        if normalize_url(project["input_url"]) != canonical:
            raise ValidationError(f"incorrect canonical URL for {key}")
        canonical_key = canonical.casefold()
        if key in seen_keys or canonical_key in seen_urls:
            raise ValidationError(f"duplicate project key or canonical URL: {key}")
        seen_keys.add(key)
        seen_urls.add(canonical_key)
    return projects


def validate_registry(repos_path: Path = REPOS_PATH) -> list[dict[str, str]]:
    projects = load_registry()
    inputs = [line.strip() for line in repos_path.read_text(encoding="utf-8").splitlines() if line.strip()]
    expected = [project["input_url"] for project in projects]
    if inputs != expected:
        raise ValidationError("repos.txt does not exactly match the ordered registry inputs")
    return projects


def validate_revision_record(record: Any, project: dict[str, str]) -> None:
    required = {
        "schema_version", "key", "input_url", "canonical_url", "source_directory",
        "commit", "nested_submodules",
    }
    if not isinstance(record, dict) or set(record) != required:
        raise ValidationError(f"{project['key']}: revision record fields do not match schema")
    expected = {
        "schema_version": 1,
        "key": project["key"],
        "input_url": project["input_url"],
        "canonical_url": project["canonical_url"],
        "source_directory": f"{project['key']}/upstream",
    }
    for field, value in expected.items():
        if record[field] != value:
            raise ValidationError(f"{project['key']}: revision {field} mismatch")
    if not isinstance(record["commit"], str) or not COMMIT_RE.fullmatch(record["commit"]):
        raise ValidationError(f"{project['key']}: invalid commit")
    if not isinstance(record["nested_submodules"], list):
        raise ValidationError(f"{project['key']}: nested_submodules must be an array")
    paths: set[str] = set()
    for nested in record["nested_submodules"]:
        if not isinstance(nested, dict) or set(nested) != {"path", "commit"}:
            raise ValidationError(f"{project['key']}: invalid nested-submodule record")
        if not nested["path"] or nested["path"] in paths or not COMMIT_RE.fullmatch(nested["commit"]):
            raise ValidationError(f"{project['key']}: invalid or duplicate nested submodule")
        paths.add(nested["path"])


def git(*args: str, cwd: Path = REPO_ROOT) -> str:
    result = subprocess.run(["git", *args], cwd=cwd, text=True, capture_output=True)
    if result.returncode:
        raise ValidationError(result.stderr.strip() or f"git {' '.join(args)} failed")
    return result.stdout.strip()


def validate_root_source(project: dict[str, str]) -> dict[str, Any]:
    key = project["key"]
    relative = f"corpus/src/_shared/c/{key}/upstream"
    source = REPO_ROOT / relative
    record_path = source.parent / "REVISION.json"
    if not source.is_dir() or not record_path.is_file():
        raise ValidationError(f"{key}: missing upstream source or REVISION.json")
    record = json.loads(record_path.read_text(encoding="utf-8"))
    validate_revision_record(record, project)

    registered = git("config", "--file", ".gitmodules", "--get-regexp", r"^submodule\..*\.path$")
    matching = [line.split(None, 1)[0] for line in registered.splitlines() if line.split(None, 1)[1] == relative]
    if len(matching) != 1:
        raise ValidationError(f"{key}: upstream is not registered in root .gitmodules")
    section = matching[0].removeprefix("submodule.").removesuffix(".path")
    registered_url = git("config", "--file", ".gitmodules", "--get", f"submodule.{section}.url")
    if normalize_url(registered_url).casefold() != normalize_url(project["canonical_url"]).casefold():
        raise ValidationError(f"{key}: registered URL differs from canonical URL")
    index = git("ls-files", "--stage", "--", relative)
    fields = index.split()
    if len(fields) < 4 or fields[0] != "160000":
        raise ValidationError(f"{key}: upstream is not a root gitlink")
    if fields[1] != record["commit"]:
        raise ValidationError(f"{key}: gitlink differs from recorded commit")
    if git("rev-parse", "HEAD", cwd=source) != record["commit"]:
        raise ValidationError(f"{key}: checked-out commit differs from revision record")
    return record


def validate_source(project: dict[str, str]) -> None:
    key = project["key"]
    source = SHARED_ROOT / key / "upstream"
    record = validate_root_source(project)

    actual_nested: dict[str, str] = {}
    status = git("submodule", "status", "--recursive", cwd=source)
    for line in status.splitlines():
        if not line:
            continue
        if line[0] in "-+U":
            raise ValidationError(f"{key}: nested submodule missing or drifted: {line}")
        commit, path = line[1:].split(None, 2)[:2]
        actual_nested[path] = commit
    expected_nested = {item["path"]: item["commit"] for item in record["nested_submodules"]}
    if actual_nested != expected_nested:
        raise ValidationError(f"{key}: nested-submodule revisions differ from record")


def validate_artifact(path: Path, target: str) -> None:
    if target.endswith(".out") or Path(target).name != target or target in {"", ".", ".."}:
        raise ValidationError(f"invalid normalized target name: {target!r}")
    expected = Path("bin") / target / target
    if path.as_posix() != expected.as_posix() and not path.as_posix().endswith("/" + expected.as_posix()):
        raise ValidationError(f"artifact must be staged as {expected}")
    info = path.stat()
    if not stat.S_ISREG(info.st_mode) or info.st_size == 0 or not os.access(path, os.X_OK):
        raise ValidationError(f"artifact is not a nonempty executable regular file: {path}")
    if path.read_bytes()[:4] != b"\x7fELF":
        raise ValidationError(f"artifact is not ELF: {path}")
    stale = list(path.parent.glob("*.tmp")) + list(path.parent.parent.glob(".*.tmp"))
    if stale:
        raise ValidationError(f"stale publication files exist: {stale}")


def preflight() -> tuple[dict[str, list[str]], int]:
    missing: dict[str, list[str]] = {}
    for group, commands in REQUIRED_TOOLS.items():
        absent = [command for command in commands if shutil.which(command) is None]
        if absent:
            missing[group] = absent
    free = shutil.disk_usage(REPO_ROOT).free
    return missing, free


def validate_all() -> None:
    projects = validate_registry()
    errors: list[str] = []
    for project in projects:
        try:
            validate_source(project)
            wrapper = SHARED_ROOT / project["key"] / "build"
            if not wrapper.is_file() or not os.access(wrapper, os.X_OK):
                raise ValidationError(f"{project['key']}: build adapter is missing or not executable")
        except (OSError, ValueError, json.JSONDecodeError, ValidationError) as error:
            errors.append(str(error))
    if errors:
        raise ValidationError("\n".join(errors))


def validate_roots() -> None:
    projects = validate_registry()
    expected_paths = [f"corpus/src/_shared/c/{project['key']}/upstream" for project in projects]
    registered = git("config", "--file", ".gitmodules", "--get-regexp", r"^submodule\..*\.path$")
    registered_paths = [line.split(None, 1)[1] for line in registered.splitlines()]
    listed_paths = [path for path in registered_paths if path.startswith("corpus/src/_shared/c/") and path.endswith("/upstream")]
    if listed_paths != expected_paths:
        raise ValidationError("listed root submodules do not match registry order")
    errors: list[str] = []
    for project in projects:
        try:
            validate_root_source(project)
        except (OSError, ValueError, json.JSONDecodeError, ValidationError) as error:
            errors.append(str(error))
    if errors:
        raise ValidationError("\n".join(errors))


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("command", choices=("registry", "preflight", "roots", "validate"))
    args = parser.parse_args()
    try:
        if args.command == "registry":
            projects = validate_registry()
            print(f"validated {len(projects)} ordered, unique repositories")
        elif args.command == "preflight":
            missing, free = preflight()
            print(f"free_bytes={free}")
            for group, commands in missing.items():
                print(f"missing {group}: {', '.join(commands)}")
            if missing or free < 80_000_000_000:
                return 1
        elif args.command == "roots":
            validate_roots()
            print(f"validated {EXPECTED_COUNT} ordered root submodules and revision records")
        else:
            validate_all()
            print(f"validated {EXPECTED_COUNT} listed project sources and adapters")
    except (OSError, ValueError, json.JSONDecodeError, ValidationError) as error:
        print(error, file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
