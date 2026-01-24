import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

# Load your CSV file
df = pd.read_csv("data.csv")  # replace with your filename

# Extract optimization level from filename
def extract_opt_level(filename):
    import re
    match = re.search(r'-(O[0-3sfg]|debug|prof|release|static|sf)', filename)
    return match.group(1) if match else "unknown"

df['Opt_Level'] = df['filename'].apply(extract_opt_level)

# Plot optimization level vs entropy
plt.figure(figsize=(12,6))
sns.boxplot(data=df, x='Opt_Level', y='Entropy', order=['debug','O0','O1','O2','O3','Os','Of','Og','prof','release','sf','static'])
plt.title("Optimization Level vs Entropy")
plt.xlabel("Optimization Level")
plt.ylabel("Entropy")
plt.grid(True, axis='y')
plt.show()

