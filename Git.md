---
date: 2022-12-29
sr-due: 2023-12-12
sr-ease: 248
sr-interval: 209
tags:
- inbox
- software
external: https://git-scm.com/
---

# Git Version Control System

Distributed revision control system, [[Computer_program]], designed to help
people create other computer program together.

> Git is a free and open source distributed version control system designed to
> handle everything from small to very large projects with speed and efficiency.
> — <cite><https://git-scm.com/></cite>

Git is useful to work with code without fear, you can experiment with code, use
multiple branches as features tree, if your decision was incorrect, you can
easily revert you changes. It's also useful for reviewing your changes and
collaborate.

In [[Git_tips]] I store various flashcards, how to use git (sort of
cheat sheet).

Additional details can be found in @ProGitChacon2022 book. You
can also use built-in help: `man git`, `git help` or `git [command] –help`.

After installing git, you usually need to configure it, here minimal
configuration example, with my personal data:
```sh
git config --global user.name "First Lastname"
git config --global user.email "user@domain.tld"
```

## Resources

- [[research/Chacon_and_Ben-Pro_Git|Pro Git]]
- [Git - gittutorial Documentation](https://git-scm.com/docs/gittutorial)
- [[Diff]]
