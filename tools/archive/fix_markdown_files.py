import re
import os

# Set the directory where the markdown files are located
directory = "."

# Define the regular expression pattern for matching wiki-links
link_pattern = r"\[\[.*?\]\]"

# Loop through all the markdown files in the directory
for filename in os.listdir(directory):
    if filename.startswith("@") or filename.startswith("!"):
        continue

    if filename.endswith(".md"):
        filepath = os.path.join(directory, filename)
        # print(filepath)

        # Open the file and read its contents
        with open(filepath, "r") as f:
            content = f.read()

            # Find all the wiki-links in the file
            links = re.findall(link_pattern, content)

            # Loop through the links and replace any UUIDs in them
            for link in links:
                new_link = re.sub(r"\d+\-", "", link)
                if '@' not in new_link:
                    new_link = new_link.lower()

                print(new_link)
                content = content.replace(link, new_link)


        new_filename = re.sub(r"^\d+\-", "", filename).lower()

        # # Write the modified content back to the file
        # with open(new_filename, "w") as f:
        #     f.write(content)
        #
        # # remove the old file
        # os.remove(filepath)
