---
date: 2023-01-27
draft: false
sr-due: 2023-03-17
sr-ease: 270
sr-interval: 4
tags:
- inbox
- definition
sr-due: 2024-01-13
sr-interval: 241
sr-ease: 290
---

# diff

Diff - tool to compare files line by line.

Basic usage: `diff old_file new_file`.

Diff has a lot of options, for example:

- `--ignore-all-space` - ignore all white space;
- `--side-by-side` - show the differences side by side;
- `--unified` - show the differences in unified format.

### Basic unified format explanation

Unified format (unidiff) is most commonly used to generate patch files. For
example you have 2 files, `old_file` and `new_file`.

old_file:

```
This is a test file.
My name is Inom.
Have a nice day.
```

new_file:

```
This is a test file.
My name is Inomoz.
Have a nice day.
Goodbye.
```

If you run `diff -u old_file new_file` you will get this output:

```
--- old_file	2023-01-27 22:29:49.387944539 +0600
+++ new_file	2023-01-27 22:30:33.064812208 +0600
@@ -1,3 +1,4 @@
 This is a test file.
-My name is Inom.
+My name is Inomoz.
 Have a nice day.
+Goodbye.
```

Explanation:

1. Two-line header with file names and modification times.

```
--- old_file	2023-01-27 22:29:49.387944539 +0600
+++ new_file	2023-01-27 22:30:33.064812208 +0600
```

2. Hunk of differences, which starts with `@@` (diff can contain multiple
   hunks).

```
# area where the files differ, from-file-line-number to-file-line-number
# pair of numbers: the start line, and the length (which is omitted if it’s 1).
@@ -1,3 +1,4 @@

# lines from either file that differ
# - is from location
# + is to location
# without any prefix is unchanged
 This is a test file.
-My name is Inom.
+My name is Inomoz.
 Have a nice day.
+Goodbye.
```

### How to generate a patch file

You can generate a patch file in unified formt -
`diff -u old_file new_file > patch_file`.

Or generate directories diff with this command -
`diff -Naur <dir1> <dir2> > patch_file`.

Here:

- `-N` - treat absent files as empty;
- `-a` - treat all files as text;
- `-u` - generate output in the unified format.
- `-r` - generate recursive diff.

Patch - apply a diff file to an original file.
