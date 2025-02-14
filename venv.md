---
date: 2024-11-18T00:00+03:00
external:
  - https://docs.python.org/3/tutorial/venv.html
  - https://fastapi.tiangolo.com/virtual-environments
tags:
  - blog
---

# Python virtual environments and packages

This note explains how to create isolated Python environment and install
[[Python]] packages. In these notes used mostly Python Virtual Environment
[tutorial](https://docs.python.org/3/tutorial/venv.html) with
[fastapi tutorial](https://fastapi.tiangolo.com/virtual-environments/).

> The `venv` [[Python]] module supports creating lightweight “virtual
> environments”, each with their own **independent set** of Python packages
> installed in their **site** directories.\
> A virtual environment is created on top of an existing Python installation,
> known as the virtual environment’s “base” Python, and may optionally be
> isolated from the packages in the base environment, so only those explicitly
> installed in the virtual environment are available.\
> — <cite>[venv](https://docs.python.org/3/library/venv.html)</cite>

Virtual environment is a tool to create ==isolated== Python and packages
environment for your program (projects, services, etc.).

Python applications often using packages and modules that don't come as part
of the standard library (dependencies).

Applications sometimes need a **specific version** of a library, because the
application may require that a particular bug has been fixed, or the application
may be written using an obsolete version of the library's interface
(compatibility and testing). This behavior creating conflicts, each application
sometimes requiring own version of a library, and using global packages isn't
working. ^shared-packages-issue

What if we just use only new version of packages in each project?
It's very common in Python packages to try the best to avoid breaking changes in
new versions, but it's better to be safe, and install newer versions
**intentionally** and when you can run the [[software_testing|tests]] to check
everything is working correctly.

Also, depending on your operating system (e.g. Linux, Windows, macOS), it could
have come with Python already installed. And in that case it probably had some
packages pre-installed with some specific versions **needed by your system**. If
you install packages in the global Python environment, you could end up breaking
some of the programs that came with your operating system.

The solution for this problem is to create a `virtual environment`, a
self-contained directory tree (usually `.venv`) that contains a **Python
installation** for a particular version of Python, plus a number of additional
packages. Each application can use own virtual environment.

Which standard python module used to create virtual environments?
<br class="f">
The module used to create and manage virtual environments is called `venv`.

Which Python version will be installed in the virtual environment when you use
`venv` module?
<br class="f">
`venv` will install the Python version **from which** the command was run (as
reported by the `--version` option). For instance, executing the command with
``python3.12`` will install Python 3.12.

## Using "venv" module

Create a standard Python virtual environment and install packages:

```sh
cd ...

# Create directory and cd, quote $_ in bash.
mkdir inomoz_hello_world && cd $_

# Creates a new virtual environment in a directory called .venv it will contain
# a copy of the Python interpreter and various supporting files
python -m venv .venv  # dotted notation to hide the venv directory

# Activate and verify the virtual environment, python and pip programs should
# be in the .venv/bin directory.
#
# If you use the `csh` or `fish` shells, there are alternate `activate.csh` and
# `activate.fish` scripts.
#
# This activation can change your shell prompt, it also changing some virtual
# environment variables, such as `PATH`, `VIRTUAL_ENV`
. .venv/bin/activate && which python && which pip
echo $VIRTUAL_ENV
python -c 'import sys; print(sys.path)'

# Upgrade pip to avoid exotic packaging errors
python -m pip install --upgrade pip

# Create pyproject.toml or requirements.txt file with required packages
#   https://packaging.python.org/en/latest/guides/writing-pyproject-toml/#a-full-example
#   https://packaging.python.org/en/latest/guides/writing-pyproject-toml/#dependencies-and-requirements

pip install .

# Run your program
python main.py

# Optinally, deactivate the virtual environment. Useful if you haven't some
# automatic deactivation workflow (working in single terminal session).
deactivate
```

## Configure your PDE and IDE

How to configure [[PDE]] and [[IDE]] to work with virtual environment?

Personally I use nix flakes, `direnv` (to activate virtual environment) and
[[Neovim]] in terminal emulator.

Links to other editor's configuration help:

- [Visual Studio Code](https://code.visualstudio.com/docs/python/environments#_select-and-activate-an-environment)
- [PyCharm Documentation](https://www.jetbrains.com/help/pycharm/creating-virtual-environment.html)

## Using "pip" package installer

To install (upgrade, remove) packages you would normally use the pip command
that comes with Python (built-in).

By default, pip will install packages from [the Python package
index](https://pypi.org/) into your global Python environment (the global
installation of Python), which brings some package version
[[#^shared-packages-issue|problems]].

Installing packages with pip.

```sh

# Install a package into system-wide default location:
pip install package_name

# If your run install again, pip will show this warning:
# Requirement already satisfied: ...
pip install package_name

# Install a package to the user's directory:
pip install --user package_name

# Install a specific version of a package:
pip install package_name==version

# Upgrade a package:
pip install --upgrade pip

# Uninstall a package:
pip uninstall package_name_1 package_name_2

# Show table of installed packages:
pip list

# Save installed packages list to file (usually version-controlled):
pip freeze > requirements.txt

# Show installed package info:
pip show package_name

# Install packages from a file:
pip install --requirement requirements.txt

# Install packages form pyproaject.toml
pip install .

# Install packages from an URL or local file archive (.tar.gz | .whl):
pip install --find-links url|path/to/file

# Install the local package in the current directory in develop (editable) mode:
# simplify development and testing, you don't need to install the package each
# time you make changes.
pip install --editable .
```

More information aviable in [Installing Python
Modules](https://docs.python.org/3/installing/index.html#installing-index)
documentation.

When you've written a package and want to make it available on the Python,
consult the [Python packaging user
guide](https://packaging.python.org/en/latest/tutorials/packaging-projects/).


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

## Using "uv" package installer and resolver

> An extremely fast Python package and project manager, written in Rust.\
> — <cite>[uv](https://docs.astral.sh/uv/)</cite>

uv installation with [[NixOS]] specific flakes:

```sh
# Create project directory and cd, quote $_ in bash.
mkdir /tmp/inomoz_hello_world && cd $_

# Initialize generic flake
nix flake init -t templates#utils-generic

# Edit flake.nix and add uv to the buildInputs
#   buildInputs = with pkgs; [
#       uv
#   ];

# Configure https://github.com/direnv/direnv
echo "use nix" > .venvrc && direnv allow

# Verify uv installed
uv --version

# Run tools, run pycowsay from pypi
uvx pycowsay hello from uv

# Run tool from specific package
uvx --from httpie@latest http

# Install tool
uv tool install
uv tool install mkdocs --with mkdocs-material
```

Basic uv usage:

```sh
# Create a new Python project (creating pyproject.toml) in current directory or
# in a given directory:
uv init [project_name] && git add .

# Add a new package to the project:
uv add fastapi[standard]

# Run a command in the project's environment:
uv run fastapi --version

# Remove a package from the project:
uv remove fastapi

# Run a script in the project's environment:
uv run path/to/script.py

# Update a project's environment from `pyproject.toml`:
uv sync

# Create a lock file for the project's dependencies:
uv lock
```
