---
date: 2023-03-22
sr-due: 2023-05-30
sr-ease: 270
sr-interval: 13
tags:
- inbox
- software
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
