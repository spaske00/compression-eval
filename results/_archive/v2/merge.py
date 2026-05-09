import pandas as pd

# Load both CSV files
data_df = pd.read_csv("data.csv")
results_df = pd.read_csv("results_corpus_1769466578.csv")

# Strip leading "./" from filenames in data.csv so they match results.csv
data_df["filename"] = data_df["filename"].str.lstrip("./")

# Merge on the "filename" column
merged_df = pd.merge(data_df, results_df, on="filename")

# Save the result
merged_df.to_csv("new.csv", index=False)

print(f"Merged {len(merged_df)} rows into new.csv")
