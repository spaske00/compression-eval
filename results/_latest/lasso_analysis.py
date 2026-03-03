import re
import pandas as pd
import numpy as np
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
from sklearn.linear_model import Lasso
from sklearn.preprocessing import StandardScaler, LabelEncoder

# ── 1.  Load data ────────────────────────────────────────────────────────────
df = pd.read_csv("new.csv")

# ── 2.  Extract config fields from filename ──────────────────────────────────
# Pattern: <project>-<toolchain>-<platform>-<arch>-<config>.tar
def parse_filename(fn):
    fn = fn.replace(".tar", "")
    parts = fn.rsplit("-", 3)          # split from right: platform-arch-config
    if len(parts) >= 4:
        config = parts[-1]            # e.g. debug, O0, O1, O2, O3, Os, prof, release, sf, static, static-sf
        arch   = parts[-2]            # e.g. x64
        platform = parts[-3]          # e.g. linux
        # project_toolchain = "-".join(fn.rsplit("-", 3)[:-3].split("-"))  # rest
    else:
        config, arch, platform = fn, "", ""

    return config

df["config"] = df["filename"].apply(parse_filename)

# ── 3.  Encode categorical columns ──────────────────────────────────────────
le_compressor = LabelEncoder()
df["compressor_enc"] = le_compressor.fit_transform(df["Compressor name"])

le_config = LabelEncoder()
df["config_enc"] = le_config.fit_transform(df["config"])

# ── 4.  Define targets and features ─────────────────────────────────────────
targets = ["Compression speed", "Decompression speed", "Ratio"]

feature_cols = [
    "File-bits", "Entropy", "Chi-square", "Mean",
    "Monte-Carlo-Pi", "Serial-Correlation",
    "Original size", "Compressed size",
    "compressor_enc", "config_enc",
]

X = df[feature_cols].values
scaler = StandardScaler()
X_scaled = scaler.fit_transform(X)

# ── 5.  Run Lasso for each target and plot ───────────────────────────────────
for target in targets:
    y = df[target].values

    model = Lasso(alpha=0.1, max_iter=10000)
    model.fit(X_scaled, y)

    coefs = model.coef_
    r2 = model.score(X_scaled, y)

    # Sort by absolute coefficient value
    sorted_idx = np.argsort(np.abs(coefs))[::-1]
    sorted_features = [feature_cols[i] for i in sorted_idx]
    sorted_coefs = coefs[sorted_idx]

    # Plot
    fig, ax = plt.subplots(figsize=(10, 6))
    colors = ["#e74c3c" if c < 0 else "#2ecc71" for c in sorted_coefs]
    bars = ax.barh(range(len(sorted_features)), sorted_coefs, color=colors)
    ax.set_yticks(range(len(sorted_features)))
    ax.set_yticklabels(sorted_features)
    ax.invert_yaxis()
    ax.set_xlabel("Lasso Coefficient")
    ax.set_title(f"Lasso Regression — {target}\n(R² = {r2:.4f},  α = 0.1)")
    ax.axvline(0, color="black", linewidth=0.8)
    plt.tight_layout()

    safe_name = target.replace(" ", "_").lower()
    fname = f"lasso_{safe_name}.png"
    fig.savefig(fname, dpi=150)
    plt.close(fig)
    print(f"Saved {fname}  (R² = {r2:.4f})")

print("\nDone.")
