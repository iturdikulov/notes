---
date: 2024-01-15
tags:
  - inbox
  - outline
sr-due: 2023-01-28
sr-interval: 1
sr-ease: 161
---

# Programming learning path

My number `#1` learning path.

I place here all my learning resources related to [[computer_programming]], here
is no strict grouping, but I'm trying to keep it organized by priority.

Programming is a big part of my life, I'm trying to learn it in a structured
way. Quality of learning resources is very important, but in same time learning
materials should be understandable and easy to follow.

Initial point to start learning programming is development of programming
principles, like this [[##Programming principles|principles]]. Also, it's worth
to check some [[Evans-So_you_want_to_be_a_WizarD|learning strategies]].

Programming is closely related to [[CS_learning_path|computer science]].

## Programming principles

- Gathering problems and requirements is first step.
- Architecture planning and discussion required to make decisions and deeply
understand the problem.
- Need to write maintainable code for people, DRY, KISS, YAGNI, need to avoid
neurosis and excessive perfectionism.
- Write **simple** self-documenting code that explains its logic, comments
should be up-to-date and do not contain unnecessary information (explain what is
not clear or why it was done that way):
  - I avoid deep abstractions and always prefer composition to inheritance or
  impurity.
  - I prefer flat data structures whenever possible.
  - I introduce external dependencies to a minimum (ideally without them at
  all).
  - I design modules with clear APIs, but almost never translate them into
  microservices.
  - To understand legacy code, I draw dependency graphs and sequence diagrams.
  - I write examples - lots of examples. Some of them are even interactive.
- Several levels of testing, with the help of "tools" (debugger, linter, etc.)
and automatic testing greatly help to detect bugs and issues.
- Working with team, helping others and myself (documentation, training,
reviews) significantly improve quality of any project.
- I listen to the opinion of older comrades, experience is very expensive and
useful.
- I do refactor my code if something is unclear and needs to be improved.

## Now

What I'm currently learning, with [[queue]] order.

- [x] [[Python]] note improvements
- [ ] Revisited python tutorial
- [ ] [[asyncio]]
- [ ] [[SQL]]
- [ ] [Ядро планеты Python / Хабр](https://habr.com/ru/articles/728568/)
- [ ] [Python High-level essentials / Хабр](https://habr.com/ru/articles/697760/)
- [ ] [Architecture Patterns with Python](https://www.cosmicpython.com/book/preface.html)
- [ ] [Getting Started With Testing in Python – Real Python](https://realpython.com/python-testing/#writing-integration-tests)
- [ ] [[aio-pika - Wrapper for the aiormq for asyncio and humans](https://aio-pika.readthedocs.io/en/latest/rabbitmq-tutorial/1-introduction.html)
- [ ] [[Ramalho-Fluent_Python|Ramalho - Fluent Python]]
- [ ] [A Tour of Go](https://go.dev/tour/)
- [ ] [[Stolyarov-Programming_volume_1_0_introduction|Stolyarov - intorudction]]
- [ ] [[Stolyarov-Programming_volume_1_1_preliminary_information|Stolyarov - preliminary]]
- [ ] [[Wengrow-Data_structures_and_algorithms|Wengrow - data structures and algorithms]]
- [ ] [Web development](https://web.dev/learn)
- [ ] [What every systems programmer should know about concurrency](https://assets.bitbashing.io/papers/concurrency-primer.pdf)
- [ ] [Python Packaging User Guide](https://packaging.python.org/en/latest/)
- [ ] [Firefox DevTools](https://firefox-source-docs.mozilla.org/devtools-user/)
- [ ] [nodebestpractices/README.russian.md at master · goldbergyoni/nodebestpractices · GitHub](https://github.com/goldbergyoni/nodebestpractices/blob/master/README.russian.md)
- [ ] [Как подружить веб-компоненты и JS-фреймворки / Хабр](https://habr.com/ru/companies/sberbank/articles/834998/)
- [ ] [Nix Workflow Initialize](https://ayats.org/blog/nix-workflow/)
- [ ] [nix.dev  documentation](https://nix.dev/)
- [ ] cryptography
- [ ] virtual memory
- [ ] system call
- [ ] cpu scheduling
- [ ] file descriptor
- [ ] tcp
- [ ] interrupts
- [ ] futex
- [ ] mutex
- [ ] semaphores
- [ ] users/groups/cgroups (The linux programming interface)
- [ ] union
- [ ] intersection
- [ ] difference
- [ ] symmetric difference

- [ ] [is looping through an array easier on the memory than a long recursion](https://www.quora.com/In-computer-programming-is-looping-through-an-array-easier-on-the-memory-than-a-long-recursion)
- [ ] [What is a web server? | MDN](https://developer.mozilla.org/en-US/docs/Learn/Common_questions/Web_mechanics/What_is_a_web_server)
- [ ] [What is the difference between webpage, website, web server, and search engine? | MDN](https://developer.mozilla.org/en-US/docs/Learn/Common_questions/Web_mechanics/Pages_sites_servers_and_search_engines)

## Python

My primary language, here stored collection of [[Python]]
learning materials.

- [roadmap.sh materials](https://roadmap.sh/python)
- [amaargiru/pyroad](https://github.com/amaargiru/pyroad)
- [[Real_Python_Team-Python_Tutorials|Real Python Tutorials]] and [Real Python Purchases](https://realpython.com/account/purchases/)

- [Documentation](https://docs.python.org/3/)
- [[Python_Community-Python_FAQ|FAQ]]
- [[Python_Community-Python_Glossary|Glossary]]
- [[Python_Community-Python_Standard_Library|Standart library]]

- [ ] [Ultimate Python study guide for newcomers and professionals alike.](https://github.com/huangsam/ultimate-python)

- [ ] [string — Common string operations — Python 3.13.0 documentation](https://docs.python.org/3/library/string.html#formatstrings)
- [ ] [Python's F-String for String Interpolation and Formatting – Real Python](https://realpython.com/python-f-strings/)
- [ ] [PEP 498 – Literal String Interpolation | peps.python.org](https://peps.python.org/pep-0498/)

- [ ] [Ultimate Python study guide](https://github.com/huangsam/ultimate-python)
- [ ] [Python Developer’s Guide](https://devguide.python.org/)
- [ ] [Recursion in Python: An Introduction – Real Python](https://realpython.com/python-recursion/)
- [ ] [Глобальная блокировка интерпретатора (GIL) и её воздействие на многопоточность в Python / Хабр](https://habr.com/ru/companies/wunderfund/articles/586360/)
- [ ] [Асинхронный python без головной боли (часть 1) / Хабр](https://habr.com/ru/articles/667630/)
- [ ] [Ускорение Python в 2 раза с помощью multiprocessing, async и MapReduce / Хабр](https://habr.com/ru/articles/825206/)
- [ ] [python - How does asyncio actually work? - Stack Overflow](https://stackoverflow.com/questions/49005651/how-does-asyncio-actually-work)
- [ ] [An Intro to Threading in Python – Real Python](https://realpython.com/intro-to-python-threading/)
- [ ] [asyncio — Asynchronous I/O Python 3.12.5 documentation](https://docs.python.org/3/library/asyncio.html)
- [ ] [Async IO in Python: A Complete Walkthrough – Real Python](https://realpython.com/async-io-python/)
- [ ] [How Python Asyncio Works: Recreating it from Scratch](https://jacobpadilla.com/articles/recreating-asyncio)
- [ ] [[Sorn-Comprehensive_python_cheatsheet|Python cheatsheet]], to dive in into language itself.
- [ ] [[Real_Python_Team-Python_Tutorials]]
- [ ] [PEP 8 – Style Guide for Python Code](https://peps.python.org/pep-0008/)
- [ ] [Python cheat sheets](https://www.datacamp.com/cheat-sheet)
- [ ] [[Slatkin-Effective_Python|Effective python]], general tips to write good Python code
- [ ] [[Xiryanov-Praktika_programmirovaniya_na_Python|Практика программирования на Python]].
- [ ] [[Matthes-Python_Crash_Course]]
- [ ] [[Craig-Python_Examples]]
- [ ] [How to learn Python programming | Guido van Rossum and Lex Fridman - YouTube](https://www.youtube.com/watch?v=F2Mx-u7auUs)
- [ ] [The Hitchhiker’s Guide to Python!](https://python-docs.readthedocs.io/en/latest/index.html)
- [ ] [JIT-компилятор Python в 300 строк / Habr](https://habr.com/en/articles/674206/)
- [ ] [A Python Guide to the Fibonacci Sequence](https://realpython.com/fibonacci-sequence-python/).
- [ ] [Detailed Videos - PythonByteSize](https://www.pythonbytesize.com/detailed-videos.html)
- [ ] [The origins of Python](https://inference-review.com/article/the-origins-of-python)
- [ ] [Python dataclasses will save you HOURS, also featuring attrs - YouTube](https://youtu.be/vBH6GRJ1REM)
- [ ] [Python Monorepo](https://www.tweag.io/blog/2023-04-04-python-monorepo-1/)
- [ ] [Скучный Python: повышаем качество кода / Хабр](https://habr.com/ru/company/otus/blog/713992/)
- [ ] [Ned Batchelder - Facts and Myths about Python names and values - PyCon 2015 - YouTube](https://www.youtube.com/watch?v=\_AEJHKGk9ns)
- [ ] [А как в питоне пайпать? — Development — Форум](https://www.linux.org.ru/forum/development/17025364)
- [ ] [Blog - Full Stack Python](https://www.fullstackpython.com/blog.html)
- [ ] [Python Cheatsheet - Python Cheatsheet](https://www.pythoncheatsheet.org/)
- [ ] [Python Tutorials – Real Python](https://realpython.com/)
- [ ] [Asyncio complete tutorial](https://superfastpython.com/python-asyncio/)
- [ ] [Modern Python Projects Course ](https://training.talkpython.fm/courses/details/modern-python-projects)
- [ ] [The Complete Python course](https://www.udemy.com/course/the-complete-python-course/)
- [ ] [30 Days of Python](https://github.com/codingforentrepreneurs/30-Days-of-Python)
- [ ] [python-patterns](https://github.com/faif/python-patterns)
- [ ] [Python Wiki](https://wiki.python.org/moin/)
- [ ] [Neural networks](https://stepik.org/course/50352/promo)
- [ ] [python - Meaning of @classmethod and @staticmethod](https://stackoverflow.com/questions/12179271/meaning-of-classmethod-and-staticmethod-for-beginner)

### Web Frameworks

- [The Flask Mega-Tutorial](https://blog.miguelgrinberg.com/post/the-flask-mega-tutorial-part-i-hello-world)
- [ ] Django framework [[Greenfelds-Two_Scoops_of_Django_3.x]]
- [ ] [Learn - FastAPI](https://fastapi.tiangolo.com/learn/)
- [Руководство Django Girls](https://tutorial.djangogirls.org/ru/)
- [Python Django - The Practical Guide](https://www.udemy.com/course/python-django-the-practical-guide/)
- [GitHub - zhanymkanov/fastapi-best-practices: FastAPI Best Practices and Conventions we used at our startup](https://github.com/zhanymkanov/fastapi-best-practices)

### SQL

- [ ] [SQLModel](https://sqlmodel.tiangolo.com/learn/)
- [ ] [python - SQLAlchemy proper session handling in multi-thread applications - Stack Overflow](https://stackoverflow.com/questions/9619789/sqlalchemy-proper-session-handling-in-multi-thread-applications)
- [ ] [Using Python SQLAlchemy session in multithreading](https://copdips.com/2019/05/using-python-sqlalchemy-session-in-multithreading.html#way-2-using-scoped_session-to-create-a-thread-local-variable)
- [ ] [You can use Pydantic in SQLAlchemy fields - Roman Imankulov](https://roman.pt/posts/pydantic-in-sqlalchemy-fields/)

### Testing and refactoring

- [ ] [[Hillard-Testing_With_Pytest]]
- [ ] [[Batchelder-Getting_started_testing]]
- [ ] [[Seporaitis-Large_Scale_Refactoring_With_PyBowler]]
- [ ] [Refactoring Python Applications for Simplicity – Real Python](https://realpython.com/python-refactoring/)
- [ ] [Testing Flask Applications — Flask Documentation (2.2.x)](https://flask.palletsprojects.com/en/2.2.x/testing/)
- [ ] [Simple mock server for testing using Flask · GitHub](https://gist.github.com/eruvanos/f6f62edb368a20aaa880e12976620db8)
- [x] [Typical Directory structure for python tests · GitHub](https://gist.github.com/tasdikrahman/2bdb3fb31136a3768fac) not worked as expected?

### Programs, Libraries, Frameworks, Templates:

- [ipython](https://ipython.org/) - interactive python command shell
- [scipy](https://scipy.org/) - Fundamental algorithms for scientific computing
in Python
- [jupyter](https://jupyter.org/) - interactive computing across all programming
languages
- [numpy](https://numpy.org/) - the fundamental package for scientific computing
with Python
- [ ] [Ruff: one Python linter to rule them all](https://blog.jerrycodes.com/ruff-the-python-linter/)
- [ ] [GitHub - astral-sh/ruff-lsp: A Language Server Protocol implementation for Ruff.](https://github.com/charliermarsh/ruff-lsp)
- [ ] [dosisod/refurb: A tool for refurbishing and modernizing Python codebases](https://github.com/dosisod/refurb)
- [ ] [pallets/flask: The Python micro framework for building web applications.](https://github.com/pallets/flask)
- [ ] [asottile/pyupgrade: A tool (and pre-commit hook) to automatically upgrade syntax for newer versions of the language.](https://github.com/asottile/pyupgrade)
- [ ] [[Seporaitis-Large_Scale_Refactoring_With_PyBowler|PyBowler]]
- [ ] [spectree: API spec validator and OpenAPI document generator](https://github.com/0b01001001/spectree#flask)
- [ ] [rq-flask-sqlalchemy-template](https://github.com/edkrueger/rq-flask-sqlalchemy-template/tree/master)
- [ ] [Лучшие open-source инструменты для Python проектов](https://habr.com/en/articles/708916/)
- [ ] [python - Celery: log each task run to its own file?](https://stackoverflow.com/questions/25281612/celery-log-each-task-run-to-its-own-file)
- [ ] [Using Celery: Python Task Management](https://www.toptal.com/python/orchestrating-celery-python-background-jobs)

### Inbox

- [ ] [config_manager/xdg_config/pyenv/default-packages](https://github.com/tjdevries/config_manager/blob/master/xdg_config/pyenv/default-packages)
- [A curated list of awesome Python frameworks, libraries, software and resources](https://github.com/vinta/awesome-python)
- [awesome-python-typing](https://github.com/typeddjango/awesome-python-typing)
- [GitHub - testcontainers/testcontainers-python: Testcontainers is a Python library that providing a friendly API to run Docker container. It is designed to create runtime environment to use during your automatic tests.](https://github.com/testcontainers/testcontainers-python)
- [Using Testcontainers with Pytest: Isolate Data for Effective Testing](https://qxf2.com/blog/using-testcontainers-with-pytest/)
- [Manim](https://www.manim.community/)
- [GitHub - tox-dev/filelock: A platform-independent file lock for Python.](https://github.com/tox-dev/filelock)
- [GitHub - miyuchina/mistletoe: A fast, extensible and spec-compliant Markdown parser in pure Python.](https://github.com/miyuchina/mistletoe)
- [Type hints cheat sheet - mypy 1.11.2 documentation](https://mypy.readthedocs.io/en/stable/cheat_sheet_py3.html)
- [GitHub - nschloe/perfplot: :chart_with_upwards_trend: Performance analysis for Python snippets](https://github.com/nschloe/perfplot)

## Go

My secondary language, here stored collection of [[Go]] learning
materials.

- [Lean the Go Programming Language](https://go.dev/learn/)

## JavaScript

[[JavaScript|JavaScript]] is my tertiary programming language.

- [ ] [Современный учебник JavaScript](https://learn.javascript.ru/)
- [ ] [[Flanagan-JavaScript]]
- [ ] [Why async: JavaScript and the real world](https://frontarm.com/courses/async-javascript/promises/why-async/)
- [ ] [React](https://react.dev/learn)
- [ ] [JavaScript | MDN](https://developer.mozilla.org/en-US/docs/Web/JavaScript)
- [ ] [1000x FASTER JavaScript? - YouTube](https://www.youtube.com/watch?v=B76gFi43HvM)
- [ ] [Examples of how to do query, style, dom, ajax, event etc like jQuery with plain javascript.](https://github.com/camsong/You-Dont-Need-jQuery)
- [ ] [Cheatsheet for the JavaScript knowledge you will frequently encounter in modern projects.](https://github.com/mbeaudru/modern-js-cheatsheet)
- [ ] [Infinitely Better UIs with Finite Automata - YouTube](https://www.youtube.com/watch?v=VU1NKX6Qkxc)
- [ ] [XState Catalogue](https://xstate-catalogue.com/)
- [ ] [Tutorial: Tic-Tac-Toe – React](https://react.dev/learn/tutorial-tic-tac-toe)

- [Comparison of JavaScript-based web frameworks - Wikipedia](https://en.wikipedia.org/wiki/Comparison_of_JavaScript-based_web_frameworks)
- [GitHub - codemirror/dev: Development repository for the CodeMirror editor project](https://github.com/codemirror/dev/)

## Web development

[[HTML]] is initial resource of web page, sort of bones of web-page,
how information is structured on the web and more, some learning materials:
- [HTML - MDN](https://developer.mozilla.org/en-US/docs/Web/HTML)

[[CSS]] allow you to stylize your web page, tool to represent your
page in unique way, some learning materials:
- [CodePen trending](https://codepen.io/trending)
- [ ] [Grid Garden - A game for learning CSS grid](https://cssgridgarden.com/)
- [ ] Flexbox cheatsheet
- [ ] [CSS: Cascading Style Sheets | MDN](https://developer.mozilla.org/en-US/docs/Web/CSS)
- [ ] [Основы и практика CSS Grid Layout | Habr](https://habr.com/en/articles/656245/)
- [ ] [A collection of tips to help take your CSS skills pro](https://github.com/AllThingsSmitty/css-protips)
- [ ] [CSS GPU Animation: Doing It Right | Smashing Magazine](https://www.smashingmagazine.com/2016/12/gpu-animation-doing-it-right/)
- [ ] [CSS ::before and ::after for custom animations and transitions | LogRocket Blog](https://blog.logrocket.com/css-before-after-custom-animations-transitions/)

Other related web-development resources:
- [ ] [The Valley of Code](https://thevalleyofcode.com/)
- [ ] [Mini projects built with HTML5, CSS & JavaScript](https://github.com/bradtraversy/vanillawebprojects)
- [ ] [Как правильно верстать в 2022 году. Часть 1 / Habr](https://habr.com/en/articles/655009/)
- [ ] [The Odin Project, web development](https://www.theodinproject.com/)
- [ ] [Full stack open](https://fullstackopen.com/en/)
- [ ] [[Shuler-How_Does_the_Internet_Work]]

## C (and a little bit of C++)

[[C|C]] is the lowest-level of the highest-level programming languages

Great cheat sheet with core language syntax:

TODO: verify this
[C Reference Card](img/C_Reference_Card_ANSI.v2.2.pdf)
_[C Reference Card (ANSI)](https://www.math.brown.edu/johsilve/ReferenceCards/CRefCard.v2.2.pdf)_

- [[learnxinyminutes-Learn_C_in_Y_minutes]]
- [ ] [[Kernighan_and_Ritchie-The_C_programming_language]]
- [ ] [[Muratori-Handmade_Hero]]
- [[Xiryanov-Kurs_molodogo_bojcza_MFTI_yazyk_S]], to learn basics of [[C]].
- [[Costrasel-The_C_Programming_Language_Solutions]]
- [Learn C the Hard Way](https://learncodethehardway.org/c/)

- [ ] [Comparing C to machine language - YouTube](https://www.youtube.com/watch?v=yOyaJXpAYZQ)
- [ ] [Why C is so Influential - Computerphile - YouTube](https://www.youtube.com/watch?v=ci1PJexnfNE)
- [ ] [The GNU C Library - GNU Project - Free Software Foundation (FSF)](https://www.gnu.org/software/libc/manual/)
- [ ] [15 Years Writing C++ - Advice for new programmers - YouTube](https://www.youtube.com/watch?v=37VZu3b045k)

## Lua

[[lua]], actively use it with [[Neovim]], learning materials:

- [ ] `:h lua-guide` in neovim
- [ ] [A guide to using Lua in Neovim (lua guide in russian)](https://github.com/kuator/nvim-lua-guide-ru)
- [ ] [Programming in Lua (first edition)](https://www.lua.org/pil/contents.html)
- [ ] [Lua 5.4 Reference Manual - contents](https://www.lua.org/manual/5.4/),
- [ ] [Russian version](https://lua.org.ru/contents_ru.html).

## Rust

[[Rust]] is practically unknown to me, learning materials:

- [ ] [Implementing TCP in Rust](https://www.youtube.com/watch?v=bzja9fQWzdA)
- [ ] [Introduction - Rust By Example](https://doc.rust-lang.org/stable/rust-by-example/index.html)
- [ ] [The Rust Programming Language - The Rust Programming Language](https://doc.rust-lang.org/book/)
- [ ] [Rust Language Cheat Sheet](https://cheats.rs/)
- [ ] [Rust by the Numbers: The Rust Programming Language in 2021 - The New Stack](https://thenewstack.io/rust-by-the-numbers-the-rust-programming-language-in-2021/)
- [ ] [Rust vs. Go: Why They’re Better Together - The New Stack](https://thenewstack.io/rust-vs-go-why-theyre-better-together/)
- [ ] [rust - How can I perform parallel asynchronous HTTP GET requests with reqwest? - Stack Overflow](https://stackoverflow.com/questions/51044467/how-can-i-perform-parallel-asynchronous-http-get-requests-with-reqwest)

## Pascal

[[Pascal]] is my "old friend", my initial programming language.

---

## General programming and software development

- [ ] [Backend Developer Roadmap](https://roadmap.sh/backend).
- [[Aho_Lam_et_al-Compilers]]
- [[McConnell-Code_complete]]
- [[DeVries-Tutorials]]
- [[ThePrimeagen-Tutorials]]
- [Sourcemaking](https://sourcemaking.com/)
- [A collection of full-stack resources for programmers](https://github.com/charlax/professional-programming)

### Code organization and version control, code quality

- [ ] [organize large projects](https://www.reddit.com/r/learnpython/comments/mxwdpj/are_there_any_books_or_videos_that_describe_how/)
- [[Linux_Community-Submitting_patches|submit patches]] in right way.
- [[Chacon_and_Ben-Pro_Git]]
- [[Martin_Fowler-Refactoring]]

### Soft skills

- [[Brooks-Mythical_Man-Month]]
- [[Hunt_and_Thomas-The_Pragmatic_Programmer]]
- [[Rainwater-Herding_Cats]]
- [[Yourdon-Death_March]]
- [x] [[Evans-So_you_want_to_be_a_WizarD]]

### DevOps

I really want to learn more about [[Nix]] language, maybe someday I'll start to
learn it seriously.

- [[Will_NixOS]]
- [[Henry_How_to_Learn_Nix]]

### OS and kernel development

- [[Tanenbaum_and_Bos-Modern_Operating_Systems]]

### Other

- [ ] [How to "think" (and design) like a Software Architect at Silicon Valley
Code Camp 2019 - YouTube](https://www.youtube.com/watch?v=mCM6QVHD08c)
- [[Kernighan_and_Plauger-The_Elements_of_Programming_Style]]
- [[Kernighan_and_Pike-The_Practice_of_Programming]]
- [[Abelson_and_Sussman-Structure_and_Interpretation_of_Computer_Programs_SICP|SICP]]

- [Continually updated, interactive, and test-driven coding challenges, with Anki flashcards.](https://github.com/donnemartin/interactive-coding-challenges)
- [karan/Projects: A list of practical projects that anyone can solve in any programming language.](https://github.com/karan/Projects)
- [Programming Tasks](https://rosettacode.org/wiki/Category:Programming_Tasks)
- [ ] [Energy Efficiency across Programming Languages](https://greenlab.di.uminho.pt/wp-content/uploads/2017/09/paperSLE.pdf)
- [ ] [The Architecture of Open Source Applications](https://aosabook.org/en/)
- [ ] [6.00sc Основы программирования - YouTube](https://www.youtube.com/playlist?list=PLxZ7p55WWz1la38FHUrOqNEBCn7tZfKf3)
- [ ] [Processing, flexible software sketchbook and a language for learning how to code](https://processing.org/)
- [ ] [Comparison of programming languages - Wikipedia](https://en.wikipedia.org/wiki/Comparison_of_programming_languages)
- [ ] [Exercism, become fluent in your chosen programming languages](https://exercism.org/tracks)
- [ ] [Which Programming Language Should I Learn First?](https://carlcheo.com/startcoding)
- [ ] [Классификация знаний в области программирования / Habr](https://habr.com/en/articles/249983/)
- [Rosetta Code - Wikipedia](https://en.wikipedia.org/wiki/Rosetta_Code)

## Computer graphics and game development

- [[Javidx9-Code_It_Yourself]]
- [[Muratori-Handmade_Hero|Handmade Hero]], my initial steps, heavy
  related to programming with [[MS_Windows|Windows]] API and
  [[computer_graphics|computer graphics]].
- [ ] [Shadertoy BETA](https://www.shadertoy.com/)
- [Компьютерная графика](http://compgraphics.info/)
- [Real Time VFX](https://realtimevfx.com/)
- [RenderDoc](https://renderdoc.org/)

### Godot

Good engine for fast prototyping and game development.

- [ ] [Godot 4: 3D Pixel Art - YouTube](https://www.youtube.com/watch?v=Mg_V27arKdg)
- [ ] [Tutemic - YouTube](https://www.youtube.com/@tutemic/videos)
- [ ] [Crigz Vs Game Dev - YouTube](https://www.youtube.com/@crigz/videos)

- [ ] [Godot recipes](https://kidscancode.org/godot_recipes/)
- [ ] [Picster - YouTube](https://www.youtube.com/@picster/videos?app=desktop)
- [ ] [Minimal plugin manager for Godot](https://github.com/imjp94/gd-plug)
- [ ] [godotengine/godot-demo-projects: Demonstration and Template Projects](https://github.com/godotengine/godot-demo-projects)
- [ ] [gdquest-demos/godot-4-3d-third-person-controller: Godot 4 demo with a plug-and-play 3D Third-Person Shooter (TPS) character controller inspired by games like Ratchet and Clank.](https://github.com/gdquest-demos/godot-4-3d-third-person-controller)
- [ ] [Godot 3 Tutorial Series - YouTube](https://www.youtube.com/playlist?list=PLda3VoSoc_TSBBOBYwcmlamF1UrjVtccZ)
- [ ] [[Heartbeast-Godot_Tutorials]]
- [ ] [[HK-SHAO-Godot_Raytracing_Demo]]
- [ ] [[Manzur_and_Marques-Godot_Engine_Game_Development]]
- [ ] [[Godot_Community-Godot_demo_projects]]

## Archive

- [-] [Writing The Matrix in Python: easy guide](https://habr.com/en/articles/720452/).
Not really enjoyed (questions to structure and contains specific error), so skipped.
- [-] [30-Days-of-Python - codingforentrepreneurs](https://www.youtube.com/playlist?list=PLEsfXFp6DpzQjDBvhNy5YbaBx9j-ZsUe6),
Probably good for beginners, but I not like too many inaccuracy/wrongness in this course.
- [[Pycharm]] - Jetbrains Python IDE (in [[Java]]), stopped using
