import matplotlib
matplotlib.use("Agg")
import sys
import os
import pandas as pd
import matplotlib.pyplot as plt

csv_path = sys.argv[1]
y_col = sys.argv[2]               # e.g. "Compression speed"
name_filter = sys.argv[3] if len(sys.argv) > 3 else None

csv_prefix = os.path.splitext(os.path.basename(csv_path))[0]
y_safe = y_col.replace(" ", "_").lower()
out_prefix = f"{csv_prefix}_{y_safe}"

df = pd.read_csv(csv_path)

# Filter out memcpy
df = df[df["Compressor name"] != "memcpy"]

# Optional filename filter (substring match)
if name_filter:
    df = df[df["Filename"].str.contains(name_filter)]
    out_prefix = f"{out_prefix}_{name_filter}"

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

    # X-axis labels: filename (sort_col value)
    x_labels = [f"{fn}\n({file_order[fn]:.4g})" for fn in pivot.index]

    # Plot
    fig, ax = plt.subplots(figsize=(16, 9))

    for compressor in pivot.columns:
        ax.plot(x_labels, pivot[compressor], marker="o", markersize=4, linewidth=1.5, label=compressor)

    ax.set_xlabel(f"Filename (sorted by {sort_col})", fontsize=13)
    ax.set_ylabel(f"{y_col} (Normalized)", fontsize=13)
    ax.set_title(f"{y_col} – {csv_prefix} (sorted by {sort_col})", fontsize=15)
    ax.legend(bbox_to_anchor=(1.05, 1), loc="upper left", fontsize=7, ncol=2)
    plt.xticks(rotation=45, ha="right")
    plt.tight_layout()

    sort_safe = sort_col.replace(" ", "_").replace("-", "_").lower()
    filename = f"{out_prefix}_sorted_by_{sort_safe}.pdf"
    plt.savefig(filename)
    plt.close(fig)
    print(f"Saved: {filename}")
