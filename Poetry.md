---
date: 2023-09-24
tags:
  - inbox
sr-due: 2024-01-27
sr-interval: 2
sr-ease: 247
---

# Poetry

> Poetry is a tool for dependency management and packaging in [[Python]]. It
> allows you to declare the libraries your project depends on and it will manage
> (install/update) them for you. Poetry offers a lockfile to ensure repeatable
> installs, and can build your project for distribution.\
> — <cite>[Poetry Documentation](https://python-poetry.org/docs/)</cite>

Create virtual environments in project root, use this configuration in
`pyproject.toml`:

    [virtualenvs]
    in-project = true
