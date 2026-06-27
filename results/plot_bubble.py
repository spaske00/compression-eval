import matplotlib
matplotlib.use("Agg")
import sys
import os
import pandas as pd
import matplotlib.pyplot as plt

from plot_style import (
    BUBBLE_FIGSIZE,
    apply_paper_style,
    color_map,
    finish_bubble_figure,
    group_name,
    marker_map,
    safe_name,
    save_bubble_legend,
    save_pdf,
)


apply_paper_style()

csv_path = sys.argv[1]
x_col = sys.argv[2]               # e.g. "Compression speed"
y_col = sys.argv[3]               # e.g. "Decompression speed"
color_col = sys.argv[4]            # e.g. "Filename" (categorical/string column)
size_col = sys.argv[5]             # e.g. "Original size" (float column for bubble size)
shape_col = sys.argv[6]            # e.g. "Compressor name" (categorical column for marker shape)
name_filter = sys.argv[7] if len(sys.argv) > 7 else None

csv_prefix = os.path.splitext(os.path.basename(csv_path))[0]

out_prefix = f"{csv_prefix}_{safe_name(x_col)}_{safe_name(y_col)}_{safe_name(color_col)}_{safe_name(size_col)}_{safe_name(shape_col)}"
legend_prefix = group_name(csv_prefix, name_filter)

df = pd.read_csv(csv_path)

# Filter out memcpy
df = df[df["Compressor name"] != "memcpy"]

# Optional filename filter (substring match)
if name_filter:
    df = df[df["Filename"].str.contains(name_filter)]
    out_prefix = f"{out_prefix}_{name_filter}"

# Scale bubble sizes to a compact paper-friendly range.
size_min, size_max = df[size_col].min(), df[size_col].max()


def size_scale(value):
    if size_max > size_min:
        return 18 + 150 * (value - size_min) / (size_max - size_min)
    return 80


if size_max > size_min:
    sizes = df[size_col].map(size_scale)
else:
    sizes = df[size_col].map(lambda _: 80)

shape_vals = sorted(df[shape_col].unique(), key=str)
shape_map = marker_map(shape_vals)

fig, ax = plt.subplots(figsize=BUBBLE_FIGSIZE)

color_vals = sorted(df[color_col].unique(), key=str)
colors = color_map(color_vals)

for _, row_data in df.iterrows():
    c_val = row_data[color_col]
    s_val = row_data[shape_col]
    ax.scatter(
        row_data[x_col],
        row_data[y_col],
        s=sizes[row_data.name],
        color=colors[c_val],
        marker=shape_map[s_val],
        alpha=0.68,
        edgecolors="black",
        linewidths=0.25,
    )

ax.set_xlabel(x_col)
ax.set_ylabel(y_col)
finish_bubble_figure(fig, ax)

filename = f"plots/all/{out_prefix}.pdf"
save_pdf(fig, filename)
save_bubble_legend(
    f"legend_{legend_prefix}_bubble_encoding.pdf",
    color_col,
    colors,
    shape_col,
    shape_map,
    size_col,
    df[size_col],
    size_scale,
)
