import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

# Simplified data from insights
data = {
    "Project": [
        "hello-world","jq","polybench","embedded-js","fork-join-pool",
        "grpc-dotnet","web-*","sqlite"
    ],
    "Compiler/VM": [
        "clang/gcc","clang/gcc","clang/gcc","GraalVM","GraalVM",
        ".NET",".NET","clang/gcc"
    ],
    "Entropy": [
        0.25,0.30,0.94,0.91,0.94,0.97,0.96,0.93
    ],
    "Serial-Correlation": [
        0.45,0.43,0.04,0.09,0.22,0.18,0.13,0.19
    ],
    "Size_MB": [
        0.02,0.05,0.1,167,210,300,250,100
    ]
}

df = pd.DataFrame(data)

# Plot Entropy vs Serial-Correlation
plt.figure(figsize=(10,6))
sns.scatterplot(data=df, x="Entropy", y="Serial-Correlation", hue="Compiler/VM", s=150)
plt.title("Entropy vs Serial-Correlation by Project")
plt.xlabel("Entropy")
plt.ylabel("Serial Correlation")
plt.grid(True)
plt.show()

# Plot Size vs Entropy
plt.figure(figsize=(10,6))
sns.scatterplot(data=df, x="Size_MB", y="Entropy", hue="Compiler/VM", s=150)
plt.title("File Size vs Entropy by Project")
plt.xlabel("Size (MB)")
plt.ylabel("Entropy")
plt.xscale("log")
plt.grid(True, which="both")
plt.show()

