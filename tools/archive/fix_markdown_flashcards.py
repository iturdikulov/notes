import re
import os

# Set the directory where the markdown files are located
directory = "."

# Loop through all the markdown files in the directory
files = []
for filename in os.listdir(directory):
    if filename.startswith("@") or filename.startswith("!"):
        continue

    if filename.endswith(".md"):
        files.append(os.path.join(directory, filename))

for filepath in files:
    # Define the regular expression pattern for matching wiki-links
    flashcard_pattern = r"\n\?\n"
    with open(filepath, "r") as f:
        content = f.read()
        separators = re.findall(flashcard_pattern, content)
        if not separators:
            continue

        for separator in separators:
            content = content.replace(separator, "\n&#10;\n")
            print(content)

        # Write the modified content back to the file
        with open(filepath, "w") as f:
            f.write(content)
