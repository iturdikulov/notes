---
date: 2025-11-22 08:29
tags:
  - blog
  - work-tool
---
# Atuin

Sync, search and backup shell history with Atuin.

I often have shell history synchronization problem between different shell's, atuin perfectly solve it.

Atuin is tool to do interactive search in your shell history.
Optionally sync your encrypted history between machines.

More information: <https://docs.atuin.sh/>.

## Basic commands

Install atuin into your shell:

	  eval "$(atuin init bash|zsh|fish)"

Import history from the shell default history file:

	  atuin import auto

Search shell history for a specific command, if you installed atuin, you can just use `C-r` shortcut instead this command:

	  atuin search command

## Remove secrets

With a combination of [gitleaks](https://github.com/gitleaks/gitleaks) and [[jq]] you can search and remove sensitive information from your shell history in atuin and history file.

> [!WARNING]
> gitleaks can skip some secrets, sometimes you need to add own items into report.json or delete items manually (`atuin search --delete ...` or edit you shell history file)

Atuin:

```
# Find secrets and write them into report file
atuin search | gitleaks detect --pipe -r report.json
# Generate commands to search & remove secrets from atuin
cat report.json | jq -r '.[] | " atuin search --delete " + .Secret' | sort -u
# Remove report file, for better security use: shred --remove
rm report.json 
```

History file:

Since I use [[Zsh]], I need to remove specific lines in my `.zsh_history`.

```
# Find secrets and write them into report file
cat ~/.zsh_history | gitleaks detect --pipe -r report.json
# Generate commands to search & remove secrets from shell history file
cat report.json | jq -r '.[] | " sed -i '\''/" + .Secret + "/d'\'' ~/.zsh_history"' | sort -u
# Remove report file, for better security use: shred --remove
rm report.json 
```

