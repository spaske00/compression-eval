import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import re

# Load CSV
df = pd.read_csv("data.csv")  # replace with your CSV file

# Extract optimization level from filename
def extract_opt_level(filename):
    match = re.search(r'-(O[0-3sfg]|debug|prof|release|sf|static)', filename)
    return match.group(1) if match else "unknown"

df['Opt_Level'] = df['filename'].apply(extract_opt_level)

# Extract compiler/VM from filename
def extract_compiler(filename):
    filename_lower = filename.lower()
    if "graalvm" in filename_lower:
        return "GraalVM"
    elif "clang" in filename_lower:
        return "Clang"
    elif "gcc" in filename_lower:
        return "GCC"
    elif "dotnet" in filename_lower:
        return ".NET"
    else:
        return "Other"

df['Compiler'] = df['filename'].apply(extract_compiler)

# Plot optimization level vs entropy grouped by compiler
order = ['debug', 'O0', 'O1', 'O2', 'O3', 'Os', 'Of', 'Og', 'prof', 'release', 'single', 'static']

plt.figure(figsize=(14, 7))
ax = sns.boxplot(data=df, x='Opt_Level', y='Entropy', hue='Compiler', order=order)

ax.set_axisbelow(True)
for i in range(len(order) - 1):
    ax.axvline(i + 0.5, color='0.88', linewidth=1, zorder=0)

""" plt.title("Entropy vs Optimization Level by Compiler/VM") """
plt.xlabel("Build configuration")
plt.ylabel("Entropy")
plt.grid(True, axis='y')
plt.legend(title='Platform')
plt.ylim(0.2, 1.0)

plt.show()

