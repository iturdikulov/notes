---
date: 2023-09-22
tags:
  - inbox
sr-due: 2024-01-29
sr-interval: 3
sr-ease: 250
---

# Bash (Unix shell)

> Bash is a [[Unix]] shell and command language written by Brian Fox for the GNU
> Project as a free software replacement for the Bourne shell. First released in
> 1989, it has been used as the default login shell for most Linux
> distributions. Bash was one of the first programs Linus Torvalds ported to
> Linux, alongside GCC.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Bash_\(Unix_shell\))</cite>

Personally, I use [[Z_shell|ZSH]] as my default shell

Cheat sheet:

![](./img/Bash_CheatSheet.pdf)
_[obfusk/bash-cheatsheet: bash cheat sheet](https://github.com/obfusk/bash-cheatsheet/tree/master)_

## Tips

Uppercase first letter of filenames:

```sh
for i in *;  # process every file in current directory
    do new=`echo "$i" | sed -e 's/^./\U&/'`; # replace first char by a capitalized version
    mv "$i" "$new";
done;
```

## Resources

- [[Hidden_file_and_hidden_directory_dotfiles|Dotfiles]]
- [ ] [GitHub - fliptheweb/bash-shortcuts-cheat-sheet: Useful shortcuts for bash/zsh](https://github.com/fliptheweb/bash-shortcuts-cheat-sheet/tree/master)
- [ ] [The Bash Hackers Wiki](https://wiki.bash-hackers.org/doku.php)
- [ ] [Command Challenge!](https://cmdchallenge.com/)
- [ ] [Bash Guide for Beginners](https://tldp.org/LDP/Bash-Beginners-Guide/html/)
- [ ] [The Bash Guide](https://guide.bash.academy/)
- [ ] [alexanderepstein/Bash-Snippets: A collection of small bash scripts for heavy terminal users](https://github.com/alexanderepstein/Bash-Snippets)
- [ ] [Useful scripts and configs for Linux users](https://github.com/dmi3/bin)

