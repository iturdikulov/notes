---
external:
  - https://docs.python.org/3/tutorial/venv.html
tags:
  - inbox
  - Python
---
# 11. Virtual Environments and Packages

When is suitable to use a virtual environment?
&#10;
Python applications will often use packages and modules that don't come as part
of the standard library.  Applications will sometimes need a **specific
version** of a library, because the application may require that a particular
bug has been fixed or the application may be written using an obsolete version
of the library's interface.
\
This means it may **not** be possible for one Python installation to meet
the requirements of every application.  If application A needs version
1.0 of a particular module but application B needs version 2.0, then
the requirements are in conflict and installing either version 1.0 or 2.0
will leave one application unable to run.
\
The solution for this problem is to create a `virtual environment`, a
self-contained directory tree that contains a **Python installation** for a
particular version of Python, plus a number of additional packages.
\
Different applications can then use different virtual environments.
To resolve the earlier example of conflicting requirements,
application A can have its own virtual environment with version 1.0
installed while application B has another virtual environment with version 2.0.
If application B requires a library be upgraded to version 3.0, this will
not affect application A's environment.


Which standard python module used to create virtual environments? Which Python
version will be installed in the virtual environment with this module?
&#10;
The module used to create and manage virtual environments is called
`venv`.  `venv` will install the Python version from which
the command was run (as reported by the `--version` option).
For instance, executing the command with ``python3.12`` will install
version 3.12.

To create a virtual environment, decide upon a directory where you want to
place it, and run the `venv` module as a script with the directory path:
&#10;
```python
python -m venv .venv
```
\
This will create the `.venv` directory if it doesn't exist, and also create
directories inside it containing a copy of the Python interpreter and various
supporting files. A common directory location for a virtual environment is
`.venv`. This name keeps the directory typically hidden in your shell and thus
out of the way while giving it a name that explains why the directory exists. It
also prevents clashing with `.env` environment variable definition files that
some tooling supports.

Once you've created a virtual environment, you may activate it.
&#10;
On Unix or MacOS, run:
```python
source .venv/bin/activate
```
On Windows, run:
```python
.venv\Scripts\activate
```
\
This script is written for the bash shell.  If you use the `csh` or `fish`
shells, there are alternate `activate.csh` and `activate.fish` scripts you
should use instead.

Activating the virtual environment will change your shell's prompt to show what
virtual environment you're using, and modify the environment so that running
`python` will get you that particular version and installation of Python.
For example:
&#10;
```sh
source .venv/bin/activate
python
# Python 3.11.8 (main, Feb  6 2024, 21:21:21) [GCC 13.2.0] on linux
  >>> import sys
  >>> sys.path
# ['', '/nix/store/.../python311.zip', '/nix/store/.../python3.11',
# '/nix/store/...python3.11/lib-dynload',
# '/tmp/.venv/lib/python3.11/site-packages']
```

To deactivate a virtual environment, type:
&#10;
`deactivate` into the terminal.

How to install, upgrade, and remove packages using standard Python program?
&#10;
You can install, upgrade, and remove packages using a program called `pip`. By
default `pip` will install packages from the `Python Package Index
<https://pypi.org>`.  You can browse the Python Package Index by going to it in
your [[web_browser|web browser]].

`pip` has a number of subcommands: =="install", "uninstall", "freeze", etc==.
Consult the [Installing Python
Modules](https://docs.python.org/3/installing/index.html#installing-index) guide
for complete documentation for `pip`.

You can install the latest version of a package by specifying a package's name:
&#10;
```sh
$ python -m pip install novas
# Collecting novas
#   Downloading novas-3.1.1.3.tar.gz (136kB)
# Installing collected packages: novas
#   Running setup.py install for novas
# Successfully installed novas-3.1.1.3
```

How to install specific version of a package, how to upgrade it?
&#10;
You can also install a specific version of a package by giving the
package name  followed by `==` and the version number:
```sh
$ python -m pip install requests==2.6.0
# Collecting requests==2.6.0
#   Using cached requests-2.6.0-py2.py3-none-any.whl
# Installing collected packages: requests
# Successfully installed requests-2.6.0
```
\
If you re-run this command, `pip` will notice that the requested
version is already installed and do nothing.  You can supply a
different version number to get that version, or you can run `python
-m pip install --upgrade` to upgrade the package to the latest version:
```sh
$ python -m pip install --upgrade requests
# Collecting requests
# Installing collected packages: requests
#   Found existing installation: requests 2.6.0
#     Uninstalling requests-2.6.0:
#       Successfully uninstalled requests-2.6.0
# Successfully installed requests-2.7.0
```

How to uninstall specific package?
&#10;
`python -m pip uninstall` followed by one or more package names will
remove the packages from the virtual environment.

How to display information about particular package?
&#10;
`python -m pip show` will display information about a particular package:
```sh
$ python -m pip show requests
# ---
# Metadata-Version: 2.0
# Name: requests
# Version: 2.7.0
# Summary: Python HTTP for Humans.
# Home-page: http://python-requests.org
# Author: Kenneth Reitz
# Author-email: me@kennethreitz.com
# License: Apache 2.0
# Location: /Users/akuchling/envs/tutorial-env/lib/python3.4/site-packages
# Requires:
```

How to list all of the packages installed in the virtual environment?
&#10;
`python -m pip list` will display them.
```sh
$ python -m pip list
  # novas (3.1.1.3)
  # numpy (1.9.2)
  # pip (7.0.3)
  # requests (2.7.0)
  # setuptools (16.0)
```

Command `python -m pip freeze` will produce a similar list of the installed
packages, but the output uses the format that ==`python -m pip install`==
(command) expects. A common convention is to put this list in a
`requirements.txt` file:
```sh
$ python -m pip freeze > requirements.txt
$ cat requirements.txt
# novas==3.1.1.3
# numpy==1.9.2
# requests==2.7.0
```
\
The `requirements.txt` can then be committed to version control and
shipped as part of an application.  Users can then install all the
necessary packages with `install -r`:
```sh
$ python -m pip install -r requirements.txt
# Collecting novas==3.1.1.3 (from -r requirements.txt (line 1))
#   ...
# Collecting numpy==1.9.2 (from -r requirements.txt (line 2))
#   ...
# Collecting requests==2.7.0 (from -r requirements.txt (line 3))
#   ...
# Installing collected packages: novas, numpy, requests
#   Running setup.py install for novas
# Successfully installed novas-3.1.1.3 numpy-1.9.2 requests-2.7.0
```

When you've written a package and want to make it available on the Python,
consult the [Python packaging user
guide](https://packaging.python.org/en/latest/tutorials/packaging-projects/).

