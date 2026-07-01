"""Small synthetic ELF fixtures with deliberately simple section layouts."""

from __future__ import annotations

import struct


def build_elf(elf_class: int, *, duplicate_names: bool = False) -> bytes:
    names = b"\0.shstrtab\0.text\0.dup\0.empty\0.bss\0"
    name_offsets = {
        ".shstrtab": names.index(b".shstrtab"),
        ".text": names.index(b".text"),
        ".dup": names.index(b".dup"),
        ".empty": names.index(b".empty"),
        ".bss": names.index(b".bss"),
    }
    section_names = [".text", ".dup", ".dup"] if duplicate_names else [".text"]
    contents = [b"\x00\x01\x02\x03", b"AAAA", b"BBBB"][: len(section_names)]
    section_count = 2 + len(section_names) + 2

    if elf_class == 1:
        header_size, section_size = 52, 40
        header_fmt, section_fmt = "<HHIIIIIHHHHHH", "<IIIIIIIIII"
        ident = b"\x7fELF\x01\x01\x01" + b"\0" * 9
    elif elf_class == 2:
        header_size, section_size = 64, 64
        header_fmt, section_fmt = "<HHIQQQIHHHHHH", "<IIQQQQIIQQ"
        ident = b"\x7fELF\x02\x01\x01" + b"\0" * 9
    else:
        raise ValueError("ELF class must be 1 or 2")

    section_table_offset = header_size
    payload_offset = section_table_offset + section_count * section_size
    names_offset = payload_offset
    cursor = names_offset + len(names)
    data_offsets = []
    for content in contents:
        data_offsets.append(cursor)
        cursor += len(content)

    header = ident + struct.pack(
        header_fmt,
        2,
        3 if elf_class == 1 else 62,
        1,
        0,
        0,
        section_table_offset,
        0,
        header_size,
        0,
        0,
        section_size,
        section_count,
        1,
    )
    sections = [struct.pack(section_fmt, *([0] * 10))]
    sections.append(
        struct.pack(
            section_fmt,
            name_offsets[".shstrtab"],
            3,
            0,
            0,
            names_offset,
            len(names),
            0,
            0,
            1,
            0,
        )
    )
    for name, content, offset in zip(section_names, contents, data_offsets):
        sections.append(
            struct.pack(
                section_fmt,
                name_offsets[name],
                1,
                0,
                0,
                offset,
                len(content),
                0,
                0,
                1,
                0,
            )
        )
    sections.append(
        struct.pack(
            section_fmt,
            name_offsets[".empty"],
            1,
            0,
            0,
            cursor,
            0,
            0,
            0,
            1,
            0,
        )
    )
    # Deliberately out-of-file: SHT_NOBITS has no file-backed payload.
    sections.append(
        struct.pack(
            section_fmt,
            name_offsets[".bss"],
            8,
            0,
            0,
            cursor + 100,
            32,
            0,
            0,
            1,
            0,
        )
    )
    return header + b"".join(sections) + names + b"".join(contents)


def malformed_elf() -> bytes:
    return b"\x7fELF\x02\x01\x01" + b"\0" * 9
