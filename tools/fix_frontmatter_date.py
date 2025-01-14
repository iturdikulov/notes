import os
from datetime import datetime, date, timezone
from pathlib import Path
from dateutil import tz
import logging

import frontmatter
import yaml
import dateutil.parser

# Set the directory where the markdown files are located
directory = Path(".")

class MyDumper(yaml.Dumper):
    def increase_indent(self, flow=False, indentless=False):
        return super(MyDumper, self).increase_indent(flow, False)

# Loop through all the markdown files in the directory
default_date = datetime.now(tz=tz.tzlocal())
for filename in directory.iterdir():
    if filename.name.endswith(".md"):
        filepath = os.path.join(directory, filename)

        # Open the file and read its contents
        with open(filepath, "r") as f:
            try:
                post = frontmatter.loads(f.read())
                original_cdate = post.get("date")
                if not original_cdate:
                    new_cdate = default_date
                elif isinstance(original_cdate, date):
                    new_cdate  = datetime.combine(original_cdate, datetime.min.time()).replace(tzinfo=tz.tzlocal())
                elif isinstance(original_cdate, str):
                    new_cdate = dateutil.parser.parse(original_cdate).replace(tzinfo=tz.tzlocal())
                else:
                    new_cdate = datetime.now(tz = tz.tzlocal())

                new_cdate = new_cdate.strftime("%Y-%m-%dT%H:%M%z")

                post["date"] = "{0}:{1}".format(
                    new_cdate[:-2],
                    new_cdate[-2:]
                )

                with open(filepath, "w") as f:
                    f.write('{}\n'.format(frontmatter.dumps(post, sort_keys=False, width=5000, Dumper=MyDumper, default_flow_style=False, indent=2)))
                    print(f"Fixed frontmatter for {filename}")

            except Exception as e:
                logging.warning(f"Error reading frontmatter for {filename}: {e}")
                raise
