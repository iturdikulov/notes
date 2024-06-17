---
date: 2022-12-29
external: https://git-scm.com/
tags:
  - inbox
  - SR_software
sr-due: 2024-02-02
sr-interval: 8
sr-ease: 252
---

# Git Version Control System

Distributed revision control system, [[computer_program|computer program]],
designed to help people create other computer program together.

> Git is a free and open source distributed version control system designed to
> handle everything from small to very large projects with speed and efficiency.
> — <cite>[Git](https://git-scm.com/)</cite>

Git is useful to work with code without fear, you can experiment with code, use
multiple branches as features tree, if your decision was incorrect, you can
easily revert you changes. It's also useful for reviewing your changes and
collaborate.

In [[git_tips|my git tips]] I store various flashcards, how to use git (sort of
cheat sheet).

Additional details can be found in @ProGitChacon2022 book. You
can also use built-in help: `man git`, `git help` or `git [command] –help`.

After installing git, you usually need to configure it, here minimal
configuration example, with my personal data:
```sh
git config --global user.name "First Lastname"
git config --global user.email "user@domain.tld"
```

## References

- [ ] [Git - SubmittingPatches Documentation](https://git-scm.com/docs/SubmittingPatches)
- [ ] [Git - gittutorial Documentation](https://git-scm.com/docs/gittutorial)
- [ ] [[research/Chacon_and_Ben-Pro_Git|Pro Git]]
- [ ] [[diff]]
- [A collection of useful .gitattributes templates](https://github.com/gitattributes/gitattributes)
- [A collection of useful .gitignore templates](https://github.com/github/gitignore)

