#!/usr/bin/env python3
"""Add the fixed listed repositories as shallow, pinned root submodules."""

from __future__ import annotations

import argparse
import json
import subprocess
import sys
from pathlib import Path

from listed_projects import REPO_ROOT, SHARED_ROOT, ValidationError, load_registry


def run(*args: str, cwd: Path = REPO_ROOT) -> str:
    result = subprocess.run(args, cwd=cwd, text=True, capture_output=True)
    if result.returncode:
        detail = result.stderr.strip() or result.stdout.strip()
        raise ValidationError(f"{' '.join(args)} failed: {detail}")
    return result.stdout.strip()


def acquire(project: dict[str, str], *, adopt_existing: bool = False) -> None:
    key = project["key"]
    wrapper = SHARED_ROOT / key
    source = wrapper / "upstream"
    relative = source.relative_to(REPO_ROOT).as_posix()
    record_path = wrapper / "REVISION.json"

    if source.exists() and not adopt_existing:
        raise ValidationError(f"{key}: refusing to replace existing {relative}")
    wrapper.mkdir(parents=True, exist_ok=True)
    if adopt_existing:
        origin = run("git", "remote", "get-url", "origin", cwd=source).removesuffix(".git").removesuffix("/")
        expected = project["canonical_url"].removesuffix(".git").removesuffix("/")
        if origin.casefold() != expected.casefold():
            raise ValidationError(f"{key}: existing checkout origin is {origin}, expected {expected}")
        run("git", "submodule", "add", "--force", project["canonical_url"], relative)
    else:
        run("git", "submodule", "add", "--depth", "1", project["canonical_url"], relative)

    module_name = run(
        "git", "config", "--file", ".gitmodules", "--get-regexp",
        rf"^submodule\..*\.path$",
    )
    matching = [line.split(None, 1)[0] for line in module_name.splitlines() if line.split(None, 1)[1] == relative]
    if len(matching) != 1:
        raise ValidationError(f"{key}: could not resolve new .gitmodules entry")
    section = matching[0].removeprefix("submodule.").removesuffix(".path")
    run("git", "config", "--file", ".gitmodules", f"submodule.{section}.shallow", "true")
    run("git", "add", ".gitmodules", relative)

    commit = run("git", "rev-parse", "HEAD", cwd=source)
    record = {
        "schema_version": 1,
        "key": key,
        "input_url": project["input_url"],
        "canonical_url": project["canonical_url"],
        "source_directory": f"{key}/upstream",
        "commit": commit,
        "nested_submodules": [],
    }
    record_path.write_text(json.dumps(record, indent=2) + "\n", encoding="utf-8")
    print(f"{key}: {commit}")


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--project", action="append", dest="keys", help="acquire only this key (repeatable)")
    parser.add_argument("--adopt-existing", action="store_true", help="verify and register an existing clone")
    args = parser.parse_args()
    projects = load_registry()
    selected = [project for project in projects if not args.keys or project["key"] in args.keys]
    unknown = set(args.keys or ()) - {project["key"] for project in projects}
    if unknown:
        print(f"unknown project keys: {', '.join(sorted(unknown))}", file=sys.stderr)
        return 2
    for project in selected:
        try:
            acquire(project, adopt_existing=args.adopt_existing)
        except (OSError, ValidationError) as error:
            print(f"acquisition failed for {project['key']}: {error}", file=sys.stderr)
            return 1
    print(f"acquired {len(selected)} listed repositories")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
