---
date: 2025-07-11T10:48:44+03:00
created: 2022-12-29T00:00:00+03:00
tags:
  - blog
  - work-tool-clean
sr-due: 2025-07-22
sr-interval: 1
sr-ease: 130
---

# Python

What type of programming language is Python?
<span class="f"></span>
[[high-level_programming_language|High-level]], general-purpose [[programming_language]].

Python emphasizing code readability through indentation.

What programming paradigms does Python support?
<span class="f"></span>
Multi-paradigm: [[OOP|object-oriented]], [[structured_programming|structured]], functional, and aspect-oriented programming (including metaprogramming and metaobjects).
Many other paradigms are supported via extensions, including design by contract and logic programming.

How does Python handle memory management?
<span class="f"></span>
Uses dynamic typing, reference counting, and cycle-detecting garbage collection. 

What is Python's name resolution method called?
<span class="f"></span>
Dynamic name resolution (late binding), which binds method and variable names during program execution.

What functional programming features does Python have?
<span class="f"></span>
It has `filter`, `map` and `reduce` functions; list comprehensions, dictionaries, sets, and generator expressions. The standard library has two modules (`itertools` and `functools`) that implement functional tools borrowed from Haskell and Standard ML.

Is Python weakly or strongly typed?
<span class="f"></span>
Python is strongly, dynamically typed.
- **Strong** typing means that the type of a value doesn't change in unexpected ways. A string containing only digits doesn't magically become a number, as may happen in Perl. Every change of type requires an explicit conversion.
- **Dynamic** typing means that runtime objects (values) have a type, as opposed to static typing where variables have a type.

[[zen_of_python|Zen of python]] describes the philosophy of Python.

This is most prioritized language for me. I learn it according to my [[computer_programming#Learning path|roadmap]].

**Python** is a [[high-level_programming_language|high-level]], [[general-purpose_programming_language|general-purpose]] programming language.

One of key features of Python is attention to [[readability]], by using indentation to delimit code blocks, rather than curly brackets or keywords.

Python is [dynamically typed] and [garbage-collected].

It supports any popular [[programming_paradigm]]:

- [[structured_programming|structured]]
- [[procedural_programming|procedural]]
- [[OOP|object-oriented]]
- [[functional_programming|functional]]

Rich [[Python_community-Python_tutorial_10_stdlib|stdlib]], it's "batteries included" language.

I use [[Python_code_snippets|collection]] of code snippets related to Python.

## Learning path

I learn Python according to customized amaargiru [^1] pyroad developer roadmap, I place links to my notes related to Python in special [[excalidraw]] whiteboard, aviable in the spoiler below:

> [!IMPORTANT]- High-level overview of Python ![[img/python_high_level_overview.excalidraw|100%|Python high-level overview scheme]] _Python high-level overview_

List of materials to review with [[my_notation]]:

- Brownlee_-_Python_Asyncio_Jump-Start
- [[Pydantic]]
- [Ruff](https://blog.jerrycodes.com/ruff-the-python-linter/)
- [Vulture - Find dead code](https://pypi.org/project/vulture/)
- [Task manager for asyncio | Taskiq](https://taskiq-python.github.io/)
- [RedBeat Celery Beat Scheduler](https://github.com/sibson/redbeat)
- [Flask](https://flask.palletsprojects.com/en/stable/)
- [FastAPI](https://fastapi.tiangolo.com/learn/)
- [FastStream](https://faststream.airt.ai/latest/faststream)
- [HTTPX](https://www.python-httpx.org/quickstart/)
- [ ] [Ultimate Python study guide](https://github.com/huangsam/ultimate-python)
- [ ] [roadmap.sh - Python](https://roadmap.sh/python).

- [ ] [Python cheat sheets](https://www.datacamp.com/cheat-sheet)
- [ ] [Python Cheatsheet](https://www.pythoncheatsheet.org/)
- [ ] [[Sorn-Comprehensive_python_cheatsheet|Python cheatsheet]], to dive in into language itself.
- [ ] [Python Wiki](https://wiki.python.org/moin/)

- [ ] [[Python_concurency]]
- [ ] [[projects#Python]]
- [/] [Documentation](https://docs.python.org/3/)
- [/] [[Python_cheat-sheet]]
- [/] [[Python_community-Python_tutorial_TOC|Official Python tutorial]]

### Core

- [CS50's Introduction to Programming with Python | Harvard University](https://pll.harvard.edu/course/cs50s-introduction-programming-python)
- [[Python_community-Python_FAQ|FAQ]]
- [[Python_community-Python_Glossary|Glossary]]
- [[Python_community-Python_tutorial_10_stdlib|Standart library]]
- [Python Developer’s Guide](https://devguide.python.org/)
- [How to learn Python programming | Guido van Rossum and Lex Fridman - YouTube](https://www.youtube.com/watch?v=F2Mx-u7auUs)
- [[Matthes-Python_crash_course]]
- [Python для сетевых инженеров](https://pyneng.readthedocs.io/ru/latest/index.html) paradigms function, imperative, oop
- [Python Introduction - Learn By Example](https://www.learnbyexample.org/python-introduction/)
- [Think Python — Think Python](https://allendowney.github.io/ThinkPython/)
- [[Ramalho-Fluent_Python]]
- [[Slatkin-Effective_Python]], general tips to write good Python code
- [Python Classes: The Power of OOP – Real Python](https://realpython.com/python-classes/)
- [Sets in Python – Real Python](https://realpython.com/python-sets/), research article.
- [Set Difference Python: Intersection, union and difference of Sets in Python. - DEV Community](https://dev.to/svinci/intersection-union-and-difference-of-sets-in-python-4gkn)
- [python - Meaning of @classmethod and @staticmethod](https://stackoverflow.com/questions/12179271/meaning-of-classmethod-and-staticmethod-for-beginner)
- [Thoughts On @staticmethod Usage In Python - Julius Seporaitis](https://www.seporaitis.net/posts/2020/05/05/python-staticmethod-usage/)
- [The Ultimate Guide to Error Handling in Python - miguelgrinberg.com](https://blog.miguelgrinberg.com/post/the-ultimate-guide-to-error-handling-in-python)
- [The Python Square Root Function – Real Python](https://realpython.com/python-square-root-function/)
- [Context Managers and Python's with Statement – Real Python](https://realpython.com/python-with-statement/)
- [[Python_decorators]], research a topic

- [Raymond Hettinger - Beyond PEP 8 -- Best practices for beautiful intelligible code - PyCon 2015 - YouTube](https://www.youtube.com/watch?v=wf-BqAjZb8M&t=757s)
- [PEP 8 – Style Guide for Python Code](https://peps.python.org/pep-0008/)

- [Recursion in Python: An Introduction – Real Python](https://realpython.com/python-recursion/)
- [[Xiryanov-Praktika_programmirovaniya_na_Python|Практика программирования на Python]].

- [awesome-python-typing](https://github.com/typeddjango/awesome-python-typing)
- [Python dataclasses will save you HOURS, also featuring attrs - YouTube](https://youtu.be/vBH6GRJ1REM)
- [Python Decorators 101 – Real Python](https://realpython.com/courses/python-decorators-101/)

- [string — Common string operations — Python 3.13.0 documentation](https://docs.python.org/3/library/string.html#formatstrings)
- [PEP 498 – Literal String Interpolation | peps.python.org](https://peps.python.org/pep-0498/)
- [Python's F-String for String Interpolation and Formatting – Real Python](https://realpython.com/python-f-strings/)

- [Refactoring Python Applications for Simplicity – Real Python](https://realpython.com/python-refactoring/)
- [Скучный Python: повышаем качество кода / Хабр](https://habr.com/ru/company/otus/blog/713992/)

- [The Hitchhiker’s Guide to Python!](https://python-docs.readthedocs.io/en/latest/index.html)
- [A Python Guide to the Fibonacci Sequence](https://realpython.com/fibonacci-sequence-python/).
- [Detailed Videos - PythonByteSize](https://www.pythonbytesize.com/detailed-videos.html)
- [The origins of Python](https://inference-review.com/article/the-origins-of-python)
- [Python Monorepo](https://www.tweag.io/blog/2023-04-04-python-monorepo-1/)
- [Ned Batchelder - Facts and Myths about Python names and values - PyCon 2015 - YouTube](https://www.youtube.com/watch?v=_AEJHKGk9ns)
- [А как в питоне пайпать? — Development — Форум](https://www.linux.org.ru/forum/development/17025364)

- [Blog - Full Stack Python](https://www.fullstackpython.com/blog.html)
- [The Complete Python course](https://www.udemy.com/course/the-complete-python-course/)
- [30 Days of Python](https://github.com/codingforentrepreneurs/30-Days-of-Python)

### Libraries and frameworks

- [ ] review

- [Python Packaging User Guide](https://packaging.python.org/en/latest/)
- [A curated list of awesome Python frameworks, libraries, software and resources](https://github.com/vinta/awesome-python)
- [[backend#Python]]

- [JupyterLite and pandas intro](https://jvns.github.io/pandas-cookbook/lab/index.html)
- [scipy](https://scipy.org/) - Fundamental algorithms for scientific computing in Python
- [numpy](https://numpy.org/) - the fundamental package for scientific computing with Python
- [Performance analysis for Python snippets](https://github.com/nschloe/perfplot)
- [A platform-independent file lock for Python.](https://github.com/tox-dev/filelock)
- [mistletoe: markdown parser in pure Python.](https://github.com/miyuchina/mistletoe)

### Python internals

- Obi - Inside The Python Virtual Machine
- [JIT-компилятор Python в 300 строк / Habr](https://habr.com/en/articles/674206/)
- [CPython's Garbage Collector and its Impact on Application Performance](https://blog.codingconfessions.com/p/connecting-cpythons-gc-internals)
- [Глобальная блокировка интерпретатора (GIL) и её воздействие на многопоточность в Python / Хабр](https://habr.com/ru/companies/wunderfund/articles/586360/)

### Web frameworks

- [[Lubanovic-FastAPI]]
- [GitHub - vishyarjun/rate_limiter_fastapi: API Rate Limiter built in FastAPI Python Framework](https://github.com/vishyarjun/rate_limiter_fastapi)

### Dev tools

- [Python Module Dependency graphs](https://github.com/thebjorn/pydeps)
- [Python Debugging With Pdb – Real Python](https://realpython.com/python-debugging-pdb/)

### Computer Graphics

- [Python CFFI bindings for Raylib](https://github.com/electronstudio/raylib-python-cffi)

[^1]: article - [Python High-level essentials / Хабр](https://habr.com/ru/articles/697760/), repository - [Python developer roadmap](https://github.com/amaargiru/pyroad)
