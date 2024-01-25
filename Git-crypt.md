---
date: 2023-07-21
tags:
  - inbox
  - software
---

# Git-crypt

Git crypt allow you to use transparent file encryption in [[Git|git]] repository.

> git-crypt enables transparent encryption and decryption of files in a git
> repository. Files which you choose to protect are encrypted when committed,
> and decrypted when checked out. git-crypt lets you freely share a repository
> containing a mix of public and private content. git-crypt gracefully degrades,
> so developers without the secret key can still clone and commit to a
> repository with encrypted files. This lets you store your secret material
> (such as keys or passwords) in the same repository as your code, without
> requiring you to lock down your entire repository.

Quick start:
1. Initialize: `git-crypt init`
2. Add [[GNU_Privacy_Guard_GPG|GPG]] user: `git-crypt add-gpg-user <email>`
3. Create `.gitattributes` file, with this content:
```
# git crypt handle operations and diff for files, which match this pattern
.secrets/** filter=git-crypt diff=git-crypt
```
4. Add some secret file: `mkidr .secrets; nvim .secrets/test.txt`
5. Stage/commit this file: `git add .secrets/test.txt; git commit -m "Add secret file"`
6. Lock repository: `git-crypt lock`, this will encrypt `test.txt` BUT we have
   old version of this file in git history, so you need lock repository before
   you commit any secrets!

## Symmetric mode

Alternatively, you can export a symmetric secret key, which you must securely
convey to collaborators (GPG is not required, and no files are added to your
repository):

`git-crypt export-key /path/to/keyfile`

After cloning a repository with encrypted files, unlock with:

`git-crypt unlock /path/to/keyfile`

That's all you need to do - after git-crypt is set up (either with `git-crypt
init` or `git-crypt unlock`), you can use git normally - encryption and
decryption happen transparently.

It also recommended exporting and save this key, to solve possible data loss.



Since git crypt generate own key, to encrypt/decrypt files, you might need export it and
save for future use.
To export git crypt key, run `git-crypt export-key <path/key_name.gpg>`.