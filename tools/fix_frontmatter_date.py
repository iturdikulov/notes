import os
from datetime import datetime

import frontmatter

# Set the directory where the markdown files are located
directory = "."

# Loop through all the markdown files in the directory
for filename in os.listdir(directory):
    if filename.startswith("@") or filename.startswith("!"):
        continue

    if filename.endswith(".md"):
        filepath = os.path.join(directory, filename)

        # Open the file and read its contents
        with open(filepath, "r") as f:
            post = frontmatter.loads(f.read())
            date = post.get("date")

            if date and date.isdigit():
                # Convert from unix timestamp to date YYYY-MM-DD
                post["date"] = datetime.utcfromtimestamp(int(date)).strftime("%Y-%m-%d")

                with open(filepath, "w") as f:
                    f.write(frontmatter.dumps(post))
                    print(f"Fixed frontmatter for {filename}")
