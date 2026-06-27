import matplotlib
matplotlib.use("Agg")
import sys
import os
import pandas as pd
import matplotlib.pyplot as plt

from plot_style import (
    apply_paper_style,
    dense_filename_tick_label,
    filename_tick_label,
    finish_line_figure,
    group_name,
    line_figure_size,
    line_style_map,
    safe_name,
    save_line_legend,
    save_pdf,
)


apply_paper_style()

csv_path = sys.argv[1]
y_col = sys.argv[2]               # e.g. "Compression speed"
name_filter = sys.argv[3] if len(sys.argv) > 3 else None

csv_prefix = os.path.splitext(os.path.basename(csv_path))[0]
y_safe = safe_name(y_col)
out_prefix = f"{csv_prefix}_{y_safe}"
legend_prefix = group_name(csv_prefix, name_filter)

df = pd.read_csv(csv_path)

# Filter out memcpy
df = df[df["Compressor name"] != "memcpy"]

# Optional filename filter (substring match)
if name_filter:
    df = df[df["Filename"].str.contains(name_filter)]
    out_prefix = f"{out_prefix}_{name_filter}"

styles = line_style_map(df["Compressor name"].unique())
save_line_legend(f"legend_{legend_prefix}_line_compressors.pdf", styles)

sort_columns = [
    "Original size",
    "Entropy",
    "Chi-square",
    "Mean",
    "Monte-Carlo-Pi",
    "Serial-Correlation",
]

for sort_col in sort_columns:
    # Get the per-file sort value (same for all rows of a filename)
    file_order = df.groupby("Filename")[sort_col].first().sort_values()

    # Pivot and reorder by the sort column
    pivot = df.pivot_table(index="Filename", columns="Compressor name", values=y_col)
    pivot = pivot.loc[file_order.index]

    # Normalize each compressor (min-max across files)
    #pivot = (pivot - pivot.min()) / (pivot.max() - pivot.min())

    dense_labels = len(pivot.index) > 30

    # X-axis labels: full filename plus sort value.
    if dense_labels:
        x_labels = [dense_filename_tick_label(fn, file_order[fn]) for fn in pivot.index]
    else:
        x_labels = [filename_tick_label(fn, file_order[fn]) for fn in pivot.index]
    x_values = list(range(len(x_labels)))

    # Plot
    fig, ax = plt.subplots(figsize=line_figure_size(x_labels, dense=dense_labels))

    for compressor in pivot.columns:
        style = styles[compressor]
        ax.plot(
            x_values,
            pivot[compressor],
            color=style["color"],
            linestyle=style["linestyle"],
            marker=style["marker"],
            markersize=2.4,
            linewidth=0.9,
        )

    ax.set_xlabel(f"Filename (sorted by {sort_col})")
    ax.set_ylabel(y_col)
    ax.set_xticks(x_values)
    ax.set_xticklabels(
        x_labels,
        rotation=60,
        ha="right",
        va="top",
        rotation_mode="anchor",
    )
    finish_line_figure(fig, ax, x_labels, dense=dense_labels)

    sort_safe = safe_name(sort_col)
    filename = f"plots/all/{out_prefix}_sorted_by_{sort_safe}.pdf"
    save_pdf(fig, filename)
