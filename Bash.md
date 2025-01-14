---
date: 2023-09-22T00:00+03:00
tags:
  - blog
external:
  - https://www.gnu.org/software/bash/
sr-due: 2023-01-28
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

Personally, I use [[Zsh]] as my default shell and interactive command
interpreter, but sometimes I use and write scripts written in Bash (for
portability).

Since Zsh support POSIX compliant [Shell Command Language](
https://pubs.opengroup.org/onlinepubs/9799919799/utilities/V3_chap02.html)
I can learn Bash and in same time Zsh variants (POSIX compliant parts) of shell
command languages.

## Cheat sheet

![[./img/ref-Bash_cheatsheeet.pdf]]
_[bash cheat sheet](https://github.com/obfusk/bash-cheatsheet/tree/master)_

## Snippets

Uppercase first letter of filenames:

```sh
for i in *;  # process every file in current directory
    do new=`echo "$i" | sed -e 's/^./\U&/'`; # replace first char by a capitalized version
    mv "$i" "$new";
done;
```

## External links

- [ ] [Bourne Shell Tutorial](https://www.grymoire.com/Unix/Bourne.html)
- [ ] [GitHub - fliptheweb/bash-shortcuts-cheat-sheet: Useful shortcuts for bash/zsh](https://github.com/fliptheweb/bash-shortcuts-cheat-sheet/tree/master)
- [ ] [The Bash Hackers Wiki](https://wiki.bash-hackers.org/doku.php)
- [ ] [Command Challenge!](https://cmdchallenge.com/)
- [ ] [Bash Guide for Beginners](https://tldp.org/LDP/Bash-Beginners-Guide/html/)
- [ ] [The Bash Guide](https://guide.bash.academy/)
