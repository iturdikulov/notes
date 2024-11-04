---
external:
  - https://docs.python.org/3/tutorial/modules.html
date: 2023
tags:
  - inbox
  - Python
---
# 6. Modules

Python has a way to put definitions in a file and use them in a
script or in an interactive instance of the interpreter. Such a file is called a
*module*; definitions from a module can be *imported* into other modules or into
the *main* module (the collection of variables that you have access to in a
script executed at the top level and in calculator mode).

A ==module== is a file containing Python definitions and statements.

Within a module, the module's name (as a string) is available as the value of
the global variable `__name__`. If you import python file with functions module
functions will be available as ==`module_name.function_name`==.
```python
# Fibonacci numbers module
# save this as fibo.py, then you will be able to import this module
# with `import fibo` command
#
# it only adds the module name `fibo` there. Using the module name you can
# access the functions: fibo.function_name
# >>> fibo.fib(1000)
# >>> fibo.fib2(100)
# >>> fibo.__name__

# If you intend to use a function often you can assign it to a local name:
# >>> fib = fibo.fib
# >>> fib(500)

def fib(n):    # write Fibonacci series up to n
    a, b = 0, 1
    while a < n:
        print(a, end=' ')
        a, b = b, a+b
    print()

def fib2(n):   # return Fibonacci series up to n
    result = []
    a, b = 0, 1
    while a < n:
        result.append(a)
        a, b = b, a+b
    return result
```

When module functions definitions are executed?
&#10;
A module can contain executable statements as well as function definitions.
These statements are intended to initialize the module. They are executed only
the *first* time the module name is encountered in an import statement.
They are also run if the file is executed as a script.
In fact function definitions are also 'statements' that are 'executed'; the
execution of a module-level function definition adds the function name to the
module's global namespace.

Module namespace in Python (scope information)?
&#10;
Each module has its own private namespace, which is used as the global namespace
by all functions defined in the module.
Thus, the author of a module can
use global variables in the module without worrying about accidental clashes
with a **user's global variables**.

The imported module names, if placed at the top level of a module (outside any
functions or classes), are added to the module's ==global namespace==.

```python
# There is a variant of the `import` statement that imports names from a
# module directly into the importing module's namespace.
from fibo import fib, fib2
fib(500)

```

There is even a variant to import all names that a module defines.
In most cases Python programmers do not use this facility since it introduces
an unknown set of names into the interpreter (`from math import *`), possibly
hiding some things you have already defined, so this mostly used only in
interactive sessions.
This imports all names except those beginning with ==an underscore (`_`)==.
```python
from fibo import *
fib(500)
```

If the module name is followed by ==`as`, `import fibo as fib`==, then the name
following it is bound directly to the imported module.

For efficiency reasons, each module is only imported ==once== per interpreter
session. Therefore, if you change your modules, you must restart the
interpreter -- or, if it's just one module you want to test interactively,
use `importlib.reload`, e.g. `import importlib; importlib.reload(modulename)`.

When you run a Python module with :
```bash
python fibo.py <arguments>
```
the code in the module will be executed, just as if you imported it, but with
the `__name__` set to ==`"__main__"`==.


How to make the module file usable as a script as well as an importable module?
&#10;
You can make the file usable as a script as well as an importable module,
because the code that parses the command line only runs if the module is
executed as the "main" file:
```python
...
fib(...):
...
if __name__ == "__main__":
    import sys
    fib(int(sys.argv[1]))
```
```bash
$ python fibo.py 50
0 1 1 2 3 5 8 13 21 34

# If the module is imported, the code is not run:
# >>> import fibo
# >>>
```
This is often used either to provide a convenient user interface to a module, or
for testing purposes (running the module as a script executes a test suite).

Python module search path?
&#10;
When a module named `spam` is imported, the interpreter first searches for
a built-in module with that name. These module names are listed in
`sys.builtin_module_names`. If not found, it then searches for a file named
`spam.py` in a list of directories given by the variable `sys.path`. `sys.path`
is initialized from these locations:
- The directory containing the input script (or the current directory when no
  file is specified).
- `PYTHONPATH` (a list of directory names, with the same syntax as the
  shell variable `PATH`).
- The installation-dependent default (by convention including a
  `site-packages` directory, handled by the `site` module).
More details are at [The initialization of the sys.path module search
path](https://docs.python.org/3/library/sys_path_init.html).

> [!NOTE]
> On file systems which support symlinks, the directory containing the input
> script is calculated after the symlink is followed. In other words the
> directory containing the symlink is ==**not**== added to the module search
> path.

After initialization, Python programs can modify `sys.path`. The directory
containing the script being run is placed at the beginning of the search path,
ahead of the standard library path. This means that scripts in that directory
will be loaded instead of modules of the ==same name== in the library directory.
This is an error unless the replacement is intended.

To speed up loading modules, Python caches the compiled version of each module
in the ==`__pycache__`== directory under the name `module.{version}.pyc`, where
the version encodes the format of the compiled file; it generally contains the
Python version number. For example, in CPython release 3.3 the compiled version
of spam.py would be cached as `__pycache__/spam.cpython-33.pyc`. This naming
convention allows compiled modules from different releases and different
versions of Python to coexist.

How python determines module recompilation is required?
&#10;
Python checks the modification date of the source against the compiled version
to see if it's out of date and needs to be recompiled. This is a completely
automatic process. Also, the compiled modules are platform-independent, so the
same library can be shared among systems with different architectures.

When Python does not check the module cache?
&#10;
In two circumstances. First, it always recompiles and does not store the result
for the module that's loaded directly from the command line. Second, it does not
check the cache if there is no source module. To support a non-source (compiled
only) distribution, the compiled module must be in the source directory, and
there must not be a source module.

Some tips for experts:

-  You can use the `-O` or `-OO` switches on the Python command
   to reduce the size of a compiled module. The `-O` switch removes assert
   statements, the `-OO` switch removes both assert statements and \_\_doc\_\_
   strings. Since some programs may rely on having these available, you should
   only use this option if you know what you're doing. "Optimized" modules have
   an `opt-` tag and are usually smaller. Future releases may
   change the effects of optimization.
-  A program doesn't run any faster when it is read from a `.pyc`
   file than when it is read from a `.py` file; the only thing that's faster
   about `.pyc` files is the speed with which they are loaded.
-  The module `compileall` can create .pyc files for all modules in a
   directory.
-  There is more detail on this process, including a flow chart of the
   decisions, in [PEP 3147 - PYC Repository Directories](https://peps.python.org/pep-3147/)
   <!-- NEXT: check this pep -->

Some python modules are built into the interpreter; these provide access to
operations that are not part of the core of the language but are nevertheless
built in, either for efficiency or to provide access to operating system
primitives such as system calls.

Are all modules built into the interpreter aviable on all platforms (OS)?
No. The set of standard modules is a configuration option which also depends on
the underlying platform. For example, the `winreg` module is only provided on
Windows systems. One particular module deserves some attention: `sys`, which is
built into every Python interpreter.

The variables ==`sys.ps1` and `sys.ps2`== define the strings used as primary and
secondary prompts, only defined if the interpreter is in interactive mode.

The variable `sys.path` is a list of strings that determines the interpreter's
==search path== for modules. It is initialized to a default path taken from the
environment variable `PYTHONPATH`, or from a built-in default if
`PYTHONPATH` is not set. You can modify it using standard list
operations:
```python
import sys
sys.path.append('/ufs/guido/lib/python')
```

The built-in function ==`dir`== is used to find out which names a module
defines. It returns a sorted list of strings.

```python
import fibo, sys
dir(fibo)  # ['__name__', 'fib', 'fib2']
dir(sys)   # ['__breakpointhook__', '__displayhook__', '__doc__', ...]

Without arguments, `dir` lists the names you have defined ==currently==:
```python
a = [1, 2, 3, 4, 5]
import fibo
fib = fibo.fib
dir()  # ['__builtins__', '__name__', 'a', 'fib', 'fibo', 'sys']
```

`dir` does not list the names of built-in functions and variables. If you
want a list of those, they are defined in the standard module ==`builtins`==,
use `dir` to list them.

```python
import builtins
dir(builtins)  # ['ArithmeticError', 'AssertionError', 'AttributeError', ...]
```

Packages are a way of structuring Python's module namespace by using
=="dotted module names"==.
Just like the use of modules saves the authors of different modules from having
to worry about each other's global variable names, the use of dotted module
names saves the authors of multi-module packages like NumPy or Pillow from
having to worry about each other's module names.

Suppose you want to design a collection of modules (a "package") for the uniform
handling of sound files and sound data. There are many different sound file
formats (usually recognized by their extension, for example: `.wav`,
`.aiff`, `.au`), so you may need to create and maintain a growing
collection of modules for the conversion between the various file formats.

There are also many different operations you might want to perform on sound data
(such as mixing, adding echo, applying an equalizer function, creating an
artificial stereo effect), so in addition you will be writing a never-ending
stream of modules to perform these operations. Here's a possible structure for
your package (expressed in terms of a hierarchical filesystem):

``` text
sound/                          Top-level package
      __init__.py               Initialize the sound package
      formats/                  Subpackage for file format conversions
              __init__.py
              wavread.py
              wavwrite.py
              aiffread.py
              aiffwrite.py
              auread.py
              auwrite.py
              ...
      effects/                  Subpackage for sound effects
              __init__.py
              echo.py
              surround.py
              reverse.py
              ...
      filters/                  Subpackage for filters
              __init__.py
              equalizer.py
              vocoder.py
              karaoke.py
              ...
```

When importing the package, Python searches through the directories on
`sys.path` looking for the package subdirectory.

The ==`__init__.py`== files are required to make Python treat directories
containing the file as packages (unless using a `namespace package`, a
relatively advanced feature). This prevents directories with a common name,
such as `string`, from unintentionally hiding valid modules that occur later
on the module search path.

Is `__init__.py` package file must be empty?
&#10;
No, in the simplest case, `__init__.py` can just be an empty file, but it can
also execute initialization code for the package or set the `__all__` variable.

How to import individual modules from the package?
&#10;
Users of the package can import individual modules from the package, for
example:
```python
import sound.effects.echo
```
This loads the submodule `sound.effects.echo`. It must be referenced with
its full name.:
```python
sound.effects.echo.echofilter(input, output, delay=0.7, atten=4)
```
An alternative way (better for me) of importing the submodule is:
```python
from sound.effects import echo
```
This also loads the submodule `echo` (you can also import functions directly in
same way), and makes it available without its package prefix, so it can be used
as follows:
```python
echo.echofilter(input, output, delay=0.7, atten=4)
```

How `from package import item` is find required object and load it?
&#10;
When using `from package import item`, the item can be either a
submodule (or subpackage) of the package, or some other name defined in the
package, like a function, class or variable. The `import` statement first
tests whether the item is defined in the package; if not, it assumes it is a
module and attempts to load it. If it fails to find it, an `ImportError`
exception is raised.

Contrarily, when using syntax like `import item.subitem.subsubitem`, each item
except for the last must be ==a package==; the last item can be a module or a
package but can't be a class or function or variable defined in the previous
item.

What happens when the user writes `from sound.effects import *`, we have some
`sound` package with sub-modules and `__all__` is defined?
&#10;
Ideally, one would hope that this somehow goes out to the filesystem, finds
which submodules are present in the package, and imports them all. This could
take a long time and importing sub-modules might have unwanted side-effects that
should only happen when the sub-module is explicitly imported.
\
The only solution is for the package author to provide an explicit index of the
package. The `import` statement uses the following convention: if a package's
`__init__.py` code defines a list named `__all__`, it is taken to be the
list of module names that should be imported when `from package import *` is
encountered. It is up to the package author to keep this list up-to-date when a
new version of the package is released. Package authors may also decide not to
support it, if they don't see a use for importing \* from their package. For
example, the file `sound/effects/__init__.py` could contain the following
code:
```python
# `from sound.effects import *` would import the three named submodules
# of the `sound.effects` package.
__all__ = ["echo", "surround", "reverse"]
```

Be aware that imported submodules from package might become
==shadowed (used local object)== by locally defined names.

What if package have no `__all__` defined?
&#10;
If `__all__` is not defined, the statement `from package.name import *`
does *not* import all submodules from the package it only ensures that the package has
been imported and then imports whatever names are defined in the package.
```python
# in that case echo and surround are imported,
# since we import them before `import *` statement
import sound.effects.echo
import sound.effects.surround
from sound.effects import *
```

Is `from package import specific_submodule` notation recommended?
&#10;
There is nothing wrong with using `from package import specific_submodule` In
fact, this is the recommended notation unless the importing module needs to use
submodules with the same name from different packages.

How to import a module with relative import (useful for package code)?
&#10;
You can also write relative imports to import modules/packages, with the `from
module import name` form of import statement. These imports use leading dots to
indicate the current and parent packages involved in the relative import.
```python
from . import echo
from .. import formats
from ..filters import equalizer
```

What if I want to use in main namespace, how I need to import it (absolute or
relative)?
&#10;
Note that relative imports are based on the name of the current module. Since
the name of the main module is always `"__main__"`, modules intended for use
as the main module of a Python application must always use **absolute imports**.

What if you want to customize package modules search paths (add your own paths
with some conditions), how to do it?
&#10;
Packages support one more special attribute, `__path__`. This is
initialized to be a list containing the name of the directory holding the
package's `__init__.py` before the code in that file is executed. This
variable can be modified; doing so affects future searches for modules and
subpackages contained in the package.
While this feature is not often needed, it can be used to extend the set of
modules found in a package.
```python
# pkgutil will have change __path__ to
# ['/usr/lib/python2.6/site-packages/zope',
#  '/home/me/src/myproject/lib/python2.6/site-packages/zope']
pkgutil.extend_path(__path__, __name__)
```
