---
created: 2023-03-22T00:00+03:00
tags:
  - blog
  - computer_programming_tools
external:
  - https://www.darwinsys.com/file/
directory: ~/Computer/data/files_samples
sr-due: 2025-09-18
sr-interval: 70
sr-ease: 252
---

# File

Determines the type of file. Additional information: `man file`

Determine the MIME encoding type of all file in a directory: ?
`file -i path/to/dir/*`

Other examples:

```bash
# Give a description of the type of the specified file. Works fine for files with no file extension:
file path/to/file

# Allow file to work with special or device files:
file -s path/to/file

# Don't stop at first file type match; keep going until the end of the file:
file -k path/to/file

# Look inside a zipped file and determine the file type(s) inside (not worked when I tried it):
file -z foo.zip
```
