---
date: 2023-06-18
tags:
  - inbox
  - SR_software
---

# venv — Creation of virtual environments

> The `venv` [[Python]] module supports creating lightweight “virtual
> environments”, each with their own **independent set** of Python packages
> installed in their **site** directories. A virtual environment is created on
> top of an existing Python installation, known as the virtual environment’s
> “base” Python, and may optionally be isolated from the packages in the base
> environment, so only those explicitly installed in the virtual environment are
> available.\
> — <cite>[venv](https://docs.python.org/3/library/venv.html)</cite>

To initialize a virtual environment in `.venv` directory, run:

```sh
# creates the target directory and places a pyvenv.cfg file in it with a
# home key pointing to the Python installation from which the command was run
# It also creates a bin subdirectory containing a copy/symlink of the Python
# binary/binaries. Usually symlinks to python interpreter.
python3 -m venv .venv
```

It's also possible give access to the global site-packages:

```sh
python -m venv --system-site-packages .venv
```

If you need upgrade `pip` and `setuptools`:

```sh
# activate the virtual environment
python -m venv --upgrade-deps .venv
```