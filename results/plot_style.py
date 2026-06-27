import math
import re
from textwrap import wrap

import matplotlib.pyplot as plt
from matplotlib.lines import Line2D


PAPER_WIDTH = 7.2
LEGEND_WIDTH = 2.15
BUBBLE_FIGSIZE = (PAPER_WIDTH, 4.0)

AXIS_LABEL_SIZE = 10
TICK_LABEL_SIZE = 9
X_TICK_LABEL_SIZE = 8
DENSE_X_TICK_LABEL_SIZE = 5.5
LEGEND_LABEL_SIZE = 8
LEGEND_TITLE_SIZE = 9

LINE_MARKERS = ["o", "s", "^", "D", "v", "P", "X", "*", "<", ">"]
LINESTYLES = ["-", "--", "-.", ":"]
FILENAME_MARKERS = [
    "o",
    "s",
    "^",
    "D",
    "v",
    "P",
    "*",
    "X",
    "<",
    ">",
    "p",
    "h",
    "H",
    "d",
    "8",
]


def apply_paper_style():
    plt.rcParams.update(
        {
            "font.size": TICK_LABEL_SIZE,
            "axes.labelsize": AXIS_LABEL_SIZE,
            "axes.titlesize": AXIS_LABEL_SIZE,
            "xtick.labelsize": X_TICK_LABEL_SIZE,
            "ytick.labelsize": TICK_LABEL_SIZE,
            "legend.fontsize": LEGEND_LABEL_SIZE,
            "legend.title_fontsize": LEGEND_TITLE_SIZE,
            "axes.linewidth": 0.8,
            "grid.linewidth": 0.35,
            "lines.linewidth": 0.9,
            "lines.markersize": 2.4,
            "pdf.fonttype": 42,
            "ps.fonttype": 42,
            "savefig.dpi": 300,
        }
    )


def safe_name(value):
    value = str(value).strip()
    value = value.replace(" ", "_").replace("-", "_")
    value = re.sub(r"[^A-Za-z0-9_.]+", "_", value)
    value = re.sub(r"_+", "_", value)
    return value.strip("_").lower()


def group_name(csv_prefix, name_filter=None):
    if name_filter:
        return f"{csv_prefix}_{name_filter}"
    return csv_prefix


def categorical_colors(count):
    if count <= 0:
        return []
    cmap_name = "tab20" if count <= 20 else "turbo"
    cmap = plt.get_cmap(cmap_name)
    if count == 1:
        return [cmap(0.5)]
    return [cmap(i / (count - 1)) for i in range(count)]


def line_style_map(values):
    values = sorted(values, key=str)
    colors = categorical_colors(len(values))
    styles = {}
    for i, value in enumerate(values):
        styles[value] = {
            "color": colors[i],
            "linestyle": LINESTYLES[i % len(LINESTYLES)],
            "marker": LINE_MARKERS[i % len(LINE_MARKERS)],
        }
    return styles


def color_map(values):
    values = sorted(values, key=str)
    colors = categorical_colors(len(values))
    return {value: colors[i] for i, value in enumerate(values)}


def marker_map(values):
    values = sorted(values, key=str)
    return {value: FILENAME_MARKERS[i % len(FILENAME_MARKERS)] for i, value in enumerate(values)}


def _breakable_parts(text):
    parts = []
    current = ""
    for char in str(text):
        current += char
        if char in "/_.:-":
            parts.append(current)
            current = ""
    if current:
        parts.append(current)
    return parts


def wrap_filename(text, width=18):
    lines = []
    current = ""
    for part in _breakable_parts(text):
        if len(current) + len(part) <= width or not current:
            current += part
            continue
        lines.append(current)
        current = part
    if current:
        lines.append(current)

    wrapped = []
    for line in lines:
        if len(line) <= width:
            wrapped.append(line)
        else:
            wrapped.extend(wrap(line, width=width, break_long_words=True, break_on_hyphens=False))
    return "\n".join(wrapped)


def plot_tick_name(filename):
    name = str(filename)
    if name.startswith("./"):
        name = name[2:]
    if name.endswith(".tar"):
        name = name[:-4]
    return re.sub(
        r"-(?:graalvm|dotnet|gcc|clang)"
        r"(?:-(?:linux|windows|darwin|macos|osx))?"
        r"-(?:x64|x86_64|aarch64|arm64)"
        r"(?:-.+)?$",
        "",
        name,
    )


def filename_tick_label(filename, sort_value):
    return f"{wrap_filename(plot_tick_name(filename))}\n({sort_value:.4g})"


def dense_filename_tick_label(filename, sort_value):
    return f"{plot_tick_name(filename)} ({sort_value:.4g})"


def line_figure_size(labels, dense=False):
    if dense:
        max_chars = max((len(label) for label in labels), default=40)
        label_height = min(3.9, max(2.0, 0.045 * max_chars))
        return PAPER_WIDTH, min(7.2, max(5.0, 3.2 + label_height))

    max_lines = max((label.count("\n") + 1 for label in labels), default=2)
    height = min(5.6, max(3.6, 3.1 + 0.34 * max_lines))
    return PAPER_WIDTH, height


def finish_line_figure(fig, ax, labels, dense=False):
    if dense:
        max_chars = max((len(label) for label in labels), default=40)
        label_height = min(3.9, max(2.0, 0.045 * max_chars))
        figure_height = fig.get_size_inches()[1]
        bottom = min(0.68, max(0.42, (label_height + 0.22) / figure_height))
    else:
        max_lines = max((label.count("\n") + 1 for label in labels), default=2)
        bottom = min(0.58, max(0.24, 0.16 + 0.055 * max_lines))

    fig.subplots_adjust(left=0.105, right=0.995, top=0.985, bottom=bottom)
    ax.grid(True, axis="y", alpha=0.28)
    ax.tick_params(
        axis="x",
        labelsize=DENSE_X_TICK_LABEL_SIZE if dense else X_TICK_LABEL_SIZE,
        length=2.5,
        width=0.6,
    )
    ax.tick_params(axis="y", labelsize=TICK_LABEL_SIZE, length=2.5, width=0.6)


def finish_bubble_figure(fig, ax):
    fig.subplots_adjust(left=0.105, right=0.995, top=0.985, bottom=0.14)
    ax.grid(True, alpha=0.25)
    ax.tick_params(axis="both", labelsize=TICK_LABEL_SIZE, length=2.5, width=0.6)


def save_pdf(fig, filename):
    fig.savefig(filename, bbox_inches="tight", pad_inches=0.025)
    plt.close(fig)
    print(f"Saved: {filename}")


def save_line_legend(filename, style_map):
    handles = []
    for value, style in sorted(style_map.items(), key=lambda item: str(item[0])):
        handles.append(
            Line2D(
                [0],
                [0],
                color=style["color"],
                linestyle=style["linestyle"],
                marker=style["marker"],
                linewidth=1.0,
                markersize=4.5,
                label=str(value),
            )
        )
    _save_handles_legend(filename, handles, "Compressor name")


def save_bubble_legend(
    filename,
    color_col,
    colors,
    shape_col,
    markers,
    size_col,
    size_values,
    size_scale,
):
    color_handles = [
        Line2D(
            [0],
            [0],
            linestyle="None",
            marker="o",
            markerfacecolor=color,
            markeredgecolor="black",
            markeredgewidth=0.35,
            markersize=5.0,
            label=str(value),
        )
        for value, color in sorted(colors.items(), key=lambda item: str(item[0]))
    ]
    shape_handles = [
        Line2D(
            [0],
            [0],
            linestyle="None",
            marker=marker,
            markerfacecolor="0.6",
            markeredgecolor="black",
            markeredgewidth=0.35,
            markersize=5.0,
            label=wrap_filename(plot_tick_name(value), width=18),
        )
        for value, marker in sorted(markers.items(), key=lambda item: str(item[0]))
    ]

    size_handles = []
    unique_sizes = sorted(set(float(v) for v in size_values))
    if unique_sizes:
        samples = [unique_sizes[0], unique_sizes[len(unique_sizes) // 2], unique_sizes[-1]]
        deduped_samples = []
        for sample in samples:
            if sample not in deduped_samples:
                deduped_samples.append(sample)
        for sample in deduped_samples:
            size = math.sqrt(size_scale(sample))
            size_handles.append(
                Line2D(
                    [0],
                    [0],
                    linestyle="None",
                    marker="o",
                    markerfacecolor="0.7",
                    markeredgecolor="black",
                    markeredgewidth=0.35,
                    markersize=size,
                    label=human_size(sample),
                )
            )

    color_height = _section_height(len(color_handles), 1, row_height=0.16)
    size_height = _section_height(len(size_handles), 1, row_height=0.28) if size_handles else 0.0
    shape_height = _section_height(len(shape_handles), 1, row_height=0.24)
    total_height = color_height + size_height + shape_height + 0.28
    fig = plt.figure(figsize=(LEGEND_WIDTH, total_height))
    fig.patch.set_alpha(0)
    y = 0.985

    fig.legend(
        handles=color_handles,
        title=color_col,
        loc="upper left",
        bbox_to_anchor=(0.01, y),
        frameon=False,
        ncol=1,
        borderaxespad=0,
        handletextpad=0.55,
        labelspacing=0.25,
    )
    y -= color_height / total_height

    if size_handles:
        fig.legend(
            handles=size_handles,
            title=size_col,
            loc="upper left",
            bbox_to_anchor=(0.01, y),
            frameon=False,
            ncol=1,
            borderaxespad=0,
            handletextpad=0.55,
            labelspacing=0.35,
        )
        y -= size_height / total_height

    fig.legend(
        handles=shape_handles,
        title=shape_col,
        loc="upper left",
        bbox_to_anchor=(0.01, y),
        frameon=False,
        ncol=1,
        borderaxespad=0,
        handletextpad=0.55,
        labelspacing=0.22,
    )
    save_pdf(fig, filename)


def _save_handles_legend(filename, handles, title):
    fig = plt.figure(figsize=(LEGEND_WIDTH, _legend_height(len(handles))))
    fig.patch.set_alpha(0)
    fig.legend(
        handles=handles,
        title=title,
        loc="upper left",
        bbox_to_anchor=(0.01, 0.99),
        frameon=False,
        ncol=1,
        handletextpad=0.55,
        labelspacing=0.25,
    )
    save_pdf(fig, filename)


def _legend_height(item_count):
    rows = max(1, item_count)
    return max(1.4, 0.19 * rows + 0.55)


def _section_height(item_count, columns, row_height):
    rows = max(1, math.ceil(item_count / columns))
    return 0.45 + row_height * rows


def human_size(value):
    value = float(value)
    units = ["B", "KiB", "MiB", "GiB"]
    unit = 0
    while value >= 1024 and unit < len(units) - 1:
        value /= 1024
        unit += 1
    if value >= 100 or value.is_integer():
        formatted = f"{value:.0f}"
    elif value >= 10:
        formatted = f"{value:.1f}"
    else:
        formatted = f"{value:.2f}"
    return f"{formatted} {units[unit]}"
