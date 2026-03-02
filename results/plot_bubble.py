import matplotlib
matplotlib.use("Agg")
import sys
import os
import pandas as pd
import matplotlib.pyplot as plt

csv_path = sys.argv[1]
x_col = sys.argv[2]               # e.g. "Compression speed"
y_col = sys.argv[3]               # e.g. "Decompression speed"
color_col = sys.argv[4]            # e.g. "Filename" (categorical/string column)
size_col = sys.argv[5]             # e.g. "Original size" (float column for bubble size)
shape_col = sys.argv[6]            # e.g. "Compressor name" (categorical column for marker shape)
name_filter = sys.argv[7] if len(sys.argv) > 7 else None

csv_prefix = os.path.splitext(os.path.basename(csv_path))[0]

def safe(s):
    return s.replace(" ", "_").replace("-", "_").lower()

out_prefix = f"{csv_prefix}_{safe(x_col)}_{safe(y_col)}_{safe(color_col)}_{safe(size_col)}_{safe(shape_col)}"

df = pd.read_csv(csv_path)

# Filter out memcpy
df = df[df["Compressor name"] != "memcpy"]

# Optional filename filter (substring match)
if name_filter:
    df = df[df["Filename"].str.contains(name_filter)]
    out_prefix = f"{out_prefix}_{name_filter}"

# Scale bubble sizes to 20–500 range
size_min, size_max = df[size_col].min(), df[size_col].max()
if size_max > size_min:
    sizes = 20 + 480 * (df[size_col] - size_min) / (size_max - size_min)
else:
    sizes = 200

# Marker shapes pool
MARKERS = ["o", "s", "^" , "D", "v", "P", "*", "X", "<", ">", "p", "h", "H", "d", "8"]
shape_vals = sorted(df[shape_col].unique(), key=str)
shape_map = {val: MARKERS[i % len(MARKERS)] for i, val in enumerate(shape_vals)}

fig, ax = plt.subplots(figsize=(16, 10))

color_vals = sorted(df[color_col].unique(), key=str)
color_cycle = plt.rcParams["axes.prop_cycle"].by_key()["color"]
color_map = {val: color_cycle[i % len(color_cycle)] for i, val in enumerate(color_vals)}

# Track which color and shape labels have been added to avoid duplicate legend entries
seen_colors = set()
seen_shapes = set()

for _, row_data in df.iterrows():
    c_val = row_data[color_col]
    s_val = row_data[shape_col]
    label = None
    ax.scatter(
        row_data[x_col],
        row_data[y_col],
        s=sizes[row_data.name],
        c=color_map[c_val],
        marker=shape_map[s_val],
        alpha=0.7,
        edgecolors="black",
        linewidths=0.5,
    )

# Build legend manually: colors + shapes
from matplotlib.lines import Line2D
legend_handles = []
for val in color_vals:
    legend_handles.append(Line2D([0], [0], marker="o", color="w", markerfacecolor=color_map[val],
                                 markersize=8, label=f"{color_col}: {val}"))
for val in shape_vals:
    legend_handles.append(Line2D([0], [0], marker=shape_map[val], color="w", markerfacecolor="gray",
                                 markersize=8, label=f"{shape_col}: {val}"))
ax.legend(handles=legend_handles, bbox_to_anchor=(1.05, 1), loc="upper left", fontsize=7, ncol=2)

ax.set_xlabel(x_col, fontsize=13)
ax.set_ylabel(y_col, fontsize=13)
ax.set_title(f"{y_col} vs {x_col} (color={color_col}, size={size_col}, shape={shape_col}) \u2013 {csv_prefix}", fontsize=14)

plt.tight_layout()

filename = f"{out_prefix}.pdf"
plt.savefig(filename)
plt.close(fig)
print(f"Saved: {filename}")
