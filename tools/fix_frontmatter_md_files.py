import re
import os
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
            title = post.get("title")

            if title:
                del post["title"]
                post.content = re.sub(r"^# .*\n", "", post.content)
                post.content = f'# {title}\n\n' + post.content
                with open(filepath, "w") as f:
                    f.write(frontmatter.dumps(post))
                    print(f"Fixed frontmatter for {filename}")

