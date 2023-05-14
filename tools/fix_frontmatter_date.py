import os
from datetime import datetime, date

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
            cdate = post.get("date")
            convert = False
            if cdate and isinstance(cdate, int):
                # convert timestamp to "YYYY-MM-DD" string
                post["date"] = datetime.fromtimestamp(int(cdate)).strftime("%Y-%m-%d")
                convert = True

            if convert:
                with open(filepath, "w") as f:
                    f.write(frontmatter.dumps(post))
                    print(f"Fixed frontmatter for {filename}")

