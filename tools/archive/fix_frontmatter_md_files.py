import re
import os
import frontmatter
import glob
from pathlib import Path

# Set the directory where the markdown files are located
directory = "."

# Iterate over all files
files = Path(directory).glob('*/**/*.md')

for file in files:
    with open(file, "r") as f:
        try:
            data = f.read()
            post = frontmatter.loads(data)
            title = post.get("title")

            if title:
                del post["title"]
                post.content = re.sub(r"^# .*\n", "", post.content)
                post.content = f'# {title}\n\n' + post.content
                with open(file, "w") as f:
                    f.write(frontmatter.dumps(post))
                    print(f"Fixed frontmatter for {file}")

        except Exception as e:
            print("Failed to load frontmatter for", file, e)
            break

# # Loop through all the markdown files in the directory
# for filename in os.listdir(directory):
#     if filename.startswith("@") or filename.startswith("!"):
#         continue
#
#     if filename.endswith(".md"):
#         filepath = os.path.join(directory, filename)
#
#         # Open the file and read its contents
#
