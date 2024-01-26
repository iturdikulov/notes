---
date: 2023-03-06
tags:
  - inbox
  - SR_software
sr-due: 2024-01-28
sr-interval: 3
sr-ease: 250
---

# Pass (software)

> Password management should be simple and follow Unix philosophy. With pass,
> each password lives inside of a [[GNU_Privacy_Guard_GPG|gpg]] encrypted file whose
> filename is the title of the website or resource that requires the password.
> These encrypted files may be organized into meaningful folder hierarchies,
> copied from computer to computer, and, in general, manipulated using standard
> command line file management utilities.
TODO: add source

## Commands

```sh
# List passwords or entry
pass [path/to/password]

# Generate new password, with optional length
pass generate [entry or path] [n]

# Create or overwrite password data, -m is for multiline
pass insert [-m] [entry or path]

# Edit password
pass edit site.tld/username

# Delete password, -r is for recursive, -f is for force
pass rm [-r] [-f] site.tld/username

# Move password, -f is for force
pass mv [-f] old/path new/path

# Search for passowrd files containing string when decrypted
pass grep [GREP_OPTIONS] search-string
```

If I have only one login for site, I use site.tld as entry name. If I have more
I use site.tld/username.

Application passwords just haven't tld, like
`pass insert application[/username]`.

I also use passwords groups, like business, email, social, etc.

## References

- [pass - ArchWiki](https://wiki.archlinux.org/title/Pass)
