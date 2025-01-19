---
date: 2023-03-12T00:00+03:00
tags:
  - blog
  - base
  - bridge
---

# Computer programming

> Computer programming is the process of performing particular
> [[computation|computations]] (or more generally, accomplishing specific
> computing results), usually by designing and building executable
> [[computer_program|computer programs]]. Programming involves tasks such as
> analysis, generating [[algorithm|algorithms]], profiling algorithms' accuracy
> and resource consumption, and the implementation of algorithms (usually in a
> particular programming language, commonly referred to as coding).\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Computer_programming)</cite>

Computer programming is the process of performing a particular computation,
usually by designing/building an executable computer program, closely related to
[[computer_science]].

Programming is a big part of my life, I'm trying to learn it in a structured
way. Quality of learning resources is very important, but in same time learning
materials should be understandable and easy to follow. I collect resources about
programming, software development in my learning path.

## Programming principles

List of programming principles aviable at Wikipedia [^1].

Programming principles are required to write "good code". If you follow them
usually you receive good codebase which can be easily maintained and extended.

High-level principles:

- Gathering problems and requirements is first step, and it's important.
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

DRY
&#10;<br>
Don't Repeat Youself. Avoid writing the same code in multiple places.
This principle make your code more maintainable when you need to change it.

Why repeating code is bad or can be bad?
&#10;<br>
- If you need to change it, you have to change it in multiple places.
- If you forget to change it in one place, you'll have a new bug.
- It's more work to write it over and over again and maintain it.

KISS::Keep It Simple, Stupid

YAGNI::You Ain't Going to Need It

## Career Experience Goals

Programming Languages & Development:

- Experimental research programming experience in Lisp, Scheme, Pascal, etc.
- Development of complex software systems using Python, C, Go
- Microcontroller programming (ESP32)
- Proficiency in scripting languages: Bourne Shell, Lua
- Reading-level understanding of Rust, Ruby, Perl
- Experience with assembly languages.

Python Ecosystem:

- Python with modern asyncio, libraries and frameworks.
- Strong focus on asynchronous programming.
- Advanced typing system utilization (protocols, generics)
- Experience with aiohttp, FastAPI, pytest/unittest.

Software Engineering & Architecture:

- Extensive experience in object-oriented analysis, design, and programming
- Multi-paradigm programming and design
- Extreme Programming (XP) methodology
- Clean Architecture, DDD, SOLID principles, and OOP expertise.

Databases & Infrastructure:

- Relational database theory and practice, particularly PostgreSQL and SQLite
- SQL optimization and database expert knowledge
- Experience with Redis, ElasticCache
- AWS services expertise (EC2, Lambda, AuroraDB, API Gateway)
- Infrastructure as Code (Terraform).

System Administration & Security:

- Docker, Docker Compose, and Kubernetes practical experience
- UNIX services configuration (sendmail, ngnix, etc.)
- Information and network security knowledge
- Cryptography expertise
- Networks with firewall, VPN and routing.

Additional Skills:

- Web development proficiency, HTML, JavaScript, CSS, and web frameworks
- LaTeX, Markdown proficiency and semi-professional typesetting
- Advanced English language proficiency
- Experience with Internet registration organizations.

## Programming learning path

Programming lerning path is closely related to
[[computer_science#Computer science learning path|computer science learning path]].

To understand custom bullet list types check [[my_notation]] note.

- [/] [[Evans_-_So_you_want_to_be_a_WizarD]]
- [/] [[Python]], research, re-read, adjust flashcards.
- [/] [[JavaScript]] note research.
- [/] [[Sonmez_-_Soft_skills]]
- [/] [SQL Squid Game](https://datalemur.com/sql-game)
- [/] [[Abelson_and_Sussman_-_SICP|SICP]]
- [/] [[Stolyarov_-_Azy_programmirovaniya|Столяров - Азы программирования]]
- [/] codecrafters-shell_python at [Build your own Shell](https://app.codecrafters.io/courses/shell/introduction).
  - [ ] Move into [[Bash]] and document it.
- [/] [[Rust]], research note.
- [/] [[C]], research note.
- [/] [[Go]], research note.
- [/] [[lua]], research note.

### Foundations

- [ ] [Backend Developer Roadmap](https://roadmap.sh/backend).
- How to Design Programs. Как проектировать программы: Фелляйзен, Финдлер, Флэтт
- [ ] [Техносфера - Мир программирования](https://www.technosphera.ru/lib/8)
- [ ] cs50py (mainly to be more familiar with Engish voculary)
- [Programming Bottom-Up](https://www.paulgraham.com/progbot.html)
- loop
- [[conditional]]
- [[round-robin_scheduling]]
- pseudoterminal
- Virtual memory
- Cryptography
- System call
- Cpu scheduling
- File descriptor
- [[TCP_IP]]
- Interrupts
- Futex
- Mutex
- Semaphore
- Evans, float numbers book init
- Immediately Invoked Function Expressions (IIFE)
- [How to Convert from Binary to Decimal: 2 Simple Ways](https://www.wikihow.com/Convert-from-Binary-to-Decimal )
- [Обобщённое программирование — Википедия](https://ru.wikipedia.org/wiki/%D0%9E%D0%B1%D0%BE%D0%B1%D1%89%D1%91%D0%BD%D0%BD%D0%BE%D0%B5_%D0%BF%D1%80%D0%BE%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5)

### Projects to learn, frameworks, libraries, software

- [Modified Preorder Tree Traversal](https://gist.github.com/tmilos/f2f999b5839e2d42d751)
- [Как хранить в БД древовидные структуры](https://github.com/codedokode/pasta/blob/master/db/trees.md)

- [Scripts to import data into blender for use with testing/benchmarking renderers](https://github.com/aclysma/rendering-demo-scenes)


- [Advent of Code 2024](https://adventofcode.com/2024) - intersting challenge.
  - [AOC: What would you say are the minimal skills for beginners?](https://www.reddit.com/r/adventofcode/comments/7kd8jt/comment/dre0uu3/),
    research article.
- [Writing a simple JSON parser | notes.eatonphil.com](https://notes.eatonphil.com/writing-a-simple-json-parser.html)
- [ ] [Build your own Interpreter](https://app.codecrafters.io/courses/interpreter/introduction)
  with [[Python]] and Crafting Interpreters book.
  - [ ] [Welcome](https://craftinginterpreters.com/welcome.html) and prepare project.
  - [ ] [Introduction](https://craftinginterpreters.com/introduction.html).
  - [ ] [The Lox Language](https://craftinginterpreters.com/the-lox-language.html).
- [ ] [[aio-pika_Community_-_rabbitmq_tutorial]].
- [ ] [LLVM Tutorial](https://llvm.org/docs/tutorial/)
- [JavaScript on Exercism](https://exercism.org/tracks/javascript) - learn
  [[JavaScript]] with practical lessons.
- initialize FastAPI note, [Learn - FastAPI](https://fastapi.tiangolo.com/learn/)
- [Debounce на примере формы поиска — JavaScript — Дока](https://doka.guide/js/debounce/ )
- [Большой гайд по миграциям в Django: готовимся к миграциям и избегаем конфликтов / Хабр](https://habr.com/ru/companies/idaproject/articles/861386/)
- [Превращаем любой фреймворк в FastAPI. На прицеле Flask / Habr](https://habr.com/en/articles/748618/)
- [GitHub - vishyarjun/rate_limiter_fastapi: API Rate Limiter built in FastAPI Python Framework](https://github.com/vishyarjun/rate_limiter_fastapi )
- [Гайд по межсетевому экранированию (nftables)](https://habr.com/ru/articles/684524/))
- [/] [[asyncio]] - research note.
- [Как выполнять скрейпинг LinkedIn — полное руководство (обновлено в 2025 г.)]( https://ru-brightdata.com/blog/how-tos-ru/linkedin-scraping-guide)
- [How to Scrape LinkedIn & 7 Best LinkedIn Scrapers ['25]](https://research.aimultiple.com/linkedin-scrapers/)
- [PageDot - Визуальная админка для Сайты](https://pagedot.ru/)
- [A simple two column CSS grid | Simon Willison’s TILs](https://til.simonwillison.net/css/simple-two-column-grid)
- [Python Module Dependency graphs](https://github.com/thebjorn/pydeps)
- [An Introduction to VisiData — An Introduction to VisiData](https://jsvine.github.io/intro-to-visidata/ )
- [Simple.css is a CSS template that allows you to make a good looking website really quickly.](https://github.com/kevquirk/simple.css)
- [Сборка Django-приложения при помощи Nuitka в onefile / Хабр](https://habr.com/ru/companies/astralinux/articles/872510/)

- [FastAPI](https://fastapi.tiangolo.com/learn/)
  - [[Pydantic]]
- [The Big Book of Small Python Projects](https://inventwithpython.com/bigbookpython/)
- [Sending an ethernet packet](https://github.com/francisrstokes/githublog/blob/main/2024%2F11%2F1%2Fsending-an-ethernet-packet.md)
- Research shlex split source code
- Django in action
- [Novice Nix: Flake Templates · peppe.rs](https://oppi.li/posts/novice_nix:_flake_templates/ )
- [Бэкендеры | Вызов Хабр Карьеры и Хекслета](https://drive.google.com/drive/folders/1iW5Fgax0A1DTjt6URUhKYBoZ1A-AAZpZ)
- [TIC-80 is a fantasy computer for making, playing and sharing tiny games.](https://github.com/nesbox/TIC-80 )

- [PathPicker accepts a wide range of input -- output from git commands, grep results, searches -- pretty much anything. After parsing the input, PathPicker presents you with a nice UI to select which files you're interested in. After that you can open them in your favorite editor or execute arbitrary commands.](https://github.com/facebook/PathPicker)
- [WireGuard in NetworkManager – Thomas Haller's Blog](https://blogs.gnome.org/thaller/2019/03/15/wireguard-in-networkmanager/ )
- [libfaketime modifies the system time for a single application](https://github.com/wolfcw/libfaketime/)
- [Удобная схема временного чата на PHP (шпаргалка) — Admin — Форум](https://www.linux.org.ru/forum/admin/17834631?lastmod=0)
- [EasyEffects не нужно, или PipeWire для продвинутых: часть 1 — Desktop — Статьи](https://www.linux.org.ru/articles/desktop/17829071)

- [ ] [How to use Celery Pytest Fixtures ](https://medium.com/@scythargon/how-to-use-celery-pytest-fixtures-for-celery-intergration-testing-6d61c91775d9)
- [ ] [python - Celery: log each task run to its own file? - Stack Overflow](https://stackoverflow.com/questions/25281612/celery-log-each-task-run-to-its-own-file)
- [ ] [First Steps with Celery — Celery 5.4.0 documentation](https://docs.celeryq.dev/en/stable/getting-started/first-steps-with-celery.html)

- [Thinking in React](https://react.dev/learn/thinking-in-react)
- Complete Intro to React.
- Master Modern CSS with Kevin Powell
- [From 0 to Production - The Modern React Tutorial (RSCs, Next.js, Shadui, Drizzle, TS and more) - YouTube](https://www.youtube.com/watch?v=d5x0JCZbAJs)

### Architecture, patterns

- [x] [[12factor_app]] - methodology for building software-as-a-service.
- [ ] [[solid]] note research, part 2.
- [/] [[McConnell_-_Code_complete]], read and take notes.
- Domain-Driven Design Distilled, read and take notes.
- [Data-Oriented Demo: SOA, composition - YouTube](https://www.youtube.com/watch?v=ZHqFrNyLlpA),
  research video.
- Refactoring: Improving the Design of Existing Code, read and take notes.
- Beyond the Twelve-Factor App, read and take notes.
- [/] [[concurency]] - research note.
- [What every systems programmer should know about
  concurrency](./articles/Kline_-_concurrency_primer.pdf), research article.
- [[OOP]] - research note.
- [GitHub - pgorecki/python-ddd: Python DDD example](https://github.com/pgorecki/python-ddd)
- [Как сменить технологию и не закопаться в рефакторинге: опыт внедрения DDD в проект на FastAPI — Часть 1 / Хабр](https://habr.com/ru/articles/833720/)

### Programming languages

- [ ] [[Slatkin_-_Effective_Python]], general tips to write good Python code
  - [Python Debugging With Pdb – Real Python](https://realpython.com/python-debugging-pdb/ )
  - [Traditional Face Detection Using Python – Real Python](https://realpython.com/courses/traditional-face-detection-python/ )
  - [Refactoring Python Applications for Simplicity – Real Python](https://realpython.com/python-refactoring/ )
  - [Python Classes: The Power of Object-Oriented Programming – Real Python]( https://realpython.com/python-classes/)
  - [Sets in Python – Real Python](https://realpython.com/python-sets/), research
    article.
  - [plan9/sys/src/cmd/cat.c - GitHub](https://github.com/0intro/plan9/blob/main/sys/src/cmd/cat.c),
    research code.
  - [Set Difference Python: Intersection, union and difference of Sets in Python. - DEV Community](https://dev.to/svinci/intersection-union-and-difference-of-sets-in-python-4gkn)
  - [Think Python — Think Python](https://allendowney.github.io/ThinkPython/)
  - [CPython's Garbage Collector and its Impact on Application Performance](https://blog.codingconfessions.com/p/connecting-cpythons-gc-internals)
  - [python - Meaning of @classmethod and @staticmethod](https://stackoverflow.com/questions/12179271/meaning-of-classmethod-and-staticmethod-for-beginner)
  - [Thoughts On @staticmethod Usage In Python - Julius Seporaitis](https://www.seporaitis.net/posts/2020/05/05/python-staticmethod-usage/)

- [[Ramalho_-_Fluent_Python]]
  - [ ] Write flashcards.
- [ ] [Собрал в одном большом гайде всё, что хотел бы знать, когда изучал язык C / Хабр](https://habr.com/ru/companies/ncloudtech/articles/871748/)
- [ ] :h lua-guide
- [ ] [Everything You Need To Start Writing Lua - YouTube](https://www.youtube.com/watch?v=CuWfgiwI73Q )

### Databases and SQL

- [SQLite: How it works, by Richard Hipp - YouTube](https://www.youtube.com/watch?v=ZSKLA81tBis)
- [/] [PostgreSQL Tutorial](https://neon.tech/postgresql/tutorial).
- [[SQL]], research
- [/] [[Forta_-_SQL_za_10_minut]]
- [Database normalization - Wikipedia](https://en.m.wikipedia.org/wiki/Database_normalization )
- [SQLModel](https://sqlmodel.tiangolo.com/learn/)
- [Database normalization - Wikipedia](https://en.m.wikipedia.org/wiki/Database_normalization)
- [Безумные и забавные факты о SQLite / Хабр](https://habr.com/ru/companies/ruvds/articles/873816/)

### Other

- [ ] [ByteByteGo - YouTube](https://www.youtube.com/@ByteByteGo/videos)
- [ ] [Common Gateway Interface - Wikipedia](https://en.wikipedia.org/wiki/Common_Gateway_Interface).
- [ ] [Semantic Commit Messages · GitHub](https://gist.github.com/joshbuchea/6f47e86d2510bce28f8e7f42ae84c716)
- [ ] [I hate Conventional Commits — musicmatzes blog](https://beyermatthias.de/i-hate-conventional-commits )
- [ ] [How I Automated My Job Application Process. (Part 1)](https://blog.daviddodda.com/how-i-automated-my-job-application-process-part-1)
- [Capt. Grace Hopper on Future Possibilities: Data, Hardware, Software, and People (Part One, 1982) - YouTube](https://www.youtube.com/watch?v=si9iqF5uTFk )
- [[Git]], need to research
- [Bash Scriptng Guide](https://www.opennet.ru/docs/RUS/bash_scripting_guide/)
- git bisect
- Evans How Git Works
- [[Henry_How_to_Learn_Nix]]
- [Архитектура микропроцессоров и изоляция уровней исполнения](https://dxdt.ru/2024/03/29/12651/)

- Competitive Programmer’s Handbook

## Inbox

### High-level topics

- [ ] [Web development](https://web.dev/learn).
- [ ] [The Path to Learn Web Development](https://flaviocopes.com/the-path-to-learn-web-development/)
- [ ] [Awesome Software Architecture](https://awesome-architecture.com/)
- [ ] [A curated list of data oriented design resources](https://github.com/dbartolini/data-oriented-design)

### Books

- [ ] [[Hunt_and_Thomas_-_The_pragmatic_programmer]]
- [ ] [[Freeman_etal_-_Head_first_design_patterns]]
- [ ] [[Kernighan_and_Ritchie_-_The_C_programming_language]]
- [ ] [[Osipov_-_Mastering_Vim]]
- [ ] [Python Introduction - Learn By Example](https://www.learnbyexample.org/python-introduction/)
- [ ] [[Lubanovic_-_FastAPI]]
- [ ] [Python для сетевых
  инженеров](https://pyneng.readthedocs.io/ru/latest/index.html) paradigms
  function, imperative, oop
- [ ] [[Tanenbaum_and_Bos_-_Modern_operating_systems]]
- [ ] [[Aho_Lam_et_al_-_Compilers]]
- [ ] [[McConnell_-_Code_complete]]
- [ ] [[Brooks_-_Mythical_man-month]]
- [ ] [[Hunt_and_Thomas_-_The_pragmatic_programmer]]
- [ ] [[Rainwater_-_Herding_cats]]
- [ ] [[Yourdon_-_Death_march]]

### Video courses

- [ ] [Python Decorators 101 – Real Python](https://realpython.com/courses/python-decorators-101/)

### Challenges

- [ ] [1 Billion Row challenge - Discussions](https://github.com/gunnarmorling/1brc/discussions)
- [ ] [Build HTTP server](https://app.codecrafters.io/courses/http-server/)
- [ ] [Build Interpreter](https://app.codecrafters.io/courses/interpreter/introduction)

### Articles, websites and notes

#### Architecture

- [p] [[12factor_app]] - Intersting high-level overview of "good" applications
  development practicies.

#### Programming languages

- [/] [[Python]], research a topic
- [ ] [The Python Square Root Function – Real Python](https://realpython.com/python-square-root-function/)
- [ ] [The Ultimate Guide to Error Handling in Python - miguelgrinberg.com](https://blog.miguelgrinberg.com/post/the-ultimate-guide-to-error-handling-in-python)
- [ ] [Context Managers and Python's with Statement – Real Python](https://realpython.com/python-with-statement/)
- [ ] [[Python_decorators]], research a topic
- [ ] [[Python_community_-_Python_tutorial_TOC]], research a topic
- [ ] [Raymond Hettinger - Beyond PEP 8 -- Best practices for beautiful intelligible code - PyCon 2015 - YouTube](https://www.youtube.com/watch?v=wf-BqAjZb8M&t=757s)
- [ ] [Ядро планеты Python / Хабр](https://habr.com/ru/articles/728568/)
- [ ] [Python High-level essentials / Хабр](https://habr.com/ru/articles/697760/)
- [ ] [Architecture Patterns with Python](https://www.cosmicpython.com/book/preface.html)
- [!] [Coding an HTML5 Canvas Game with JS in 5 min 30 sec - YouTube](https://www.youtube.com/watch?v=KoWqdEACyLI)
- [ ] [Современный учебник JavaScript](https://learn.javascript.ru/)
- [ ] [Thinking in React – React]( https://react.dev/learn/thinking-in-react)
- [ ] [Essential Typescript for React](https://www.jacobparis.com/content/react-ts)
- [ ] [[JavaScript]], research a topic
- [ ] [[lua]], research a topic
- [ ] [[Go]], fill with [A Tour of Go](https://go.dev/tour/)
- [ ] [Lean the Go Programming Language](https://go.dev/learn/)
- [!] [[C]], fill with Learn C in Y minutes
- [ ] [[nix]], fill with a [nix.dev  documentation](https://nix.dev/)
- [ ] [[Pascal]], review

#### Databases and SQL

- [ ] [!] [[SQL]], fill with SQL in 10 minutes book
- [ ] [Неочевидные для начинающих тонкости Postgres / Хабр](https://habr.com/ru/companies/ruvds/articles/859422/)
- [ ] [What I Wish Someone Told Me About Postgres | ChallahScript](https://challahscript.com/what_i_wish_someone_told_me_about_postgres)
- [ ] [Don't Do This - PostgreSQL wiki](https://wiki.postgresql.org/wiki/Don%27t_Do_This)
- [ ] [Оптимизация SQL запросов / Хабр](https://habr.com/ru/articles/861604/)

#### Testing

- [ ] Review [[software_testing]] note
- [ ] [Getting Started With Testing in Python – Real Python](https://realpython.com/python-testing/#writing-integration-tests)
- [ ] [Using Testcontainers with Pytest: Isolate Data for Effective Testing](https://qxf2.com/blog/using-testcontainers-with-pytest/)

#### Developer tools

- [ ] [[GNU_Sed]] tutorial
- [ ] [[Ripgrep]] tutorial
- [ ] [Guide to Faster, Less Frustrating Debugging](http://heather.cs.ucdavis.edu/matloff/public_html/UnixAndC/CLanguage/Debug.html)
- [ ] [Diving Deeper in Vim Regular Expressions](https://thevaluable.dev/vim-regular-expressions-in-depth/)
- [ ] [The Basics of Vim Regular Expressions](https://thevaluable.dev/regular-expression-basics-vim-grep/)
- [ ] [Firefox DevTools](https://firefox-source-docs.mozilla.org/devtools-user/)
- [ ] [fastapi_celery_redis_postgres_app.py · GitHub](https://gist.github.com/JacobFV/c9c068f66d371175e5334d1635deaea0)
- [ ] Python copy settings [Configuration files to enable validating python code with flake8, mypy, isort, and black using pre-commit hooks (via https://pre-commit.com/). Also an .editorconfig file for standardization across editors. · GitHub](https://gist.github.com/tdhopper/ae09efe739247029e096e6dbdd891544)

#### Libraries, protocols and frameworks

- [ ] [OAuth.com - OAuth 2.0 Simplified](https://www.oauth.com/)
- [!] Review cpython source: Lib/dataclasses.py
- [ ] [Python REST APIs With Flask, Connexion, and SQLAlchemy](https://realpython.com/flask-connexion-rest-api/)
- [ ] [Build a JavaScript Front End for a Flask API – Real Python](https://realpython.com/flask-javascript-frontend-for-rest-api/#demo)
- [ ] [What's New in SQLAlchemy 2.0? - miguelgrinberg.com](https://blog.miguelgrinberg.com/post/what-s-new-in-sqlalchemy-2-0)
- [ ] [Table of Contents - Practical Python Projects](https://practicalpython.yasoob.me/toc#)
- [ ] Decomposition of [igorbenav/FastAPI-boilerplate](https://github.com/igorbenav/FastAPI-boilerplate)
- [ ] [HTTPX](https://www.python-httpx.org/quickstart/)
- [Website monitoring | Grafana Labs](https://grafana.com/grafana/dashboards/13041-website-monitoring/)
- HTMX and Go, ThePrimeagen

### Other

- [Python Packaging User Guide](https://packaging.python.org/en/latest/)
- [Learn - SQLModel](https://sqlmodel.tiangolo.com/learn/)
- [[aio-pika_Community_-_rabbitmq_tutorial]], research a topic
- [[Docker]], research a topic, add info from [Multi-stage](https://docs.docker.com/build/building/multi-stage/)
- [How To Deploy A Docker Image To A Server Using GitHub Actions](https://www.programonaut.com/how-to-deploy-a-docker-image-to-a-server-using-github-actions/)
- [[Linux_community_-_Submitting_patches|submit patches]] in right way.
- [Introduction · Linux Inside](https://0xax.gitbooks.io/linux-insides/content/)
- [Bash Debugging Hub](https://sentry.io/answers/bash)
- [Advanced Bash-Scripting Guide RUS](https://www.opennet.ru/docs/RUS/bash_scripting_guide/)
- [Vim Tips I Wish I Knew Earlier - YouTube](https://www.youtube.com/watch?v=5BU2gBOe9RU)
- [Kunzelma Wiki](https://wiki.kunzelma.de/)

- [Как подружить веб-компоненты и JS-фреймворки / Хабр](https://habr.com/ru/companies/sberbank/articles/834998/)
- [CRDT: Conflict-free Replicated Data Types / Хабр](https://habr.com/ru/articles/418897/)
- [goldbergyoni/nodebestpractices](https://github.com/goldbergyoni/nodebestpractices/blob/master/README.russian.md)

- [Nix Workflow Initialize](https://ayats.org/blog/nix-workflow/)
- users/groups/cgroups (The linux programming interface)
- union
- intersection
- difference
- symmetric difference

- [is looping through an array easier on the memory than a long recursion](https://www.quora.com/In-computer-programming-is-looping-through-an-array-easier-on-the-memory-than-a-long-recursion)
- [What is a web server? | MDN](https://developer.mozilla.org/en-US/docs/Learn/Common_questions/Web_mechanics/What_is_a_web_server)
- [What is the difference between webpage, website, web server, and search engine? | MDN](https://developer.mozilla.org/en-US/docs/Learn/Common_questions/Web_mechanics/Pages_sites_servers_and_search_engines)

- [roadmap.sh materials](https://roadmap.sh/python)
- [amaargiru/pyroad](https://github.com/amaargiru/pyroad)
- [[Real_Python_Community_-_Python_tutorials|Real Python Tutorials]] and [Real Python Purchases](https://realpython.com/account/purchases/)

- [Pydantic](https://docs.pydantic.dev/dev/)
- [Advanced Pydantic Usage Guide · GitHub](https://gist.github.com/shiningflash/f17eabef18b38a70a38fb510130be58b)

- [Documentation](https://docs.python.org/3/)
- [[Python_community_-_Python_FAQ|FAQ]]
- [[Python_community_-_Python_Glossary|Glossary]]
- [[Python_community_-_Python_tutorial_10_stdlib|Standart library]]

- [awesome-python-typing](https://github.com/typeddjango/awesome-python-typing)
- [GitHub - testcontainers/testcontainers-python: Testcontainers is a Python library that providing a friendly API to run Docker container. It is designed to create runtime environment to use during your automatic tests.](https://github.com/testcontainers/testcontainers-python)

- [Ultimate Python study guide for newcomers and professionals alike.](https://github.com/huangsam/ultimate-python)

- [string — Common string operations — Python 3.13.0 documentation](https://docs.python.org/3/library/string.html#formatstrings)
- [Python's F-String for String Interpolation and Formatting – Real Python](https://realpython.com/python-f-strings/)
- [PEP 498 – Literal String Interpolation | peps.python.org](https://peps.python.org/pep-0498/)

- [Ultimate Python study guide](https://github.com/huangsam/ultimate-python)
- [Python Developer’s Guide](https://devguide.python.org/)
- [Recursion in Python: An Introduction – Real Python](https://realpython.com/python-recursion/)
- [Глобальная блокировка интерпретатора (GIL) и её воздействие на многопоточность в Python / Хабр](https://habr.com/ru/companies/wunderfund/articles/586360/)
- [Асинхронный python без головной боли (часть 1) / Хабр](https://habr.com/ru/articles/667630/)
- [Ускорение Python в 2 раза с помощью multiprocessing, async и MapReduce / Хабр](https://habr.com/ru/articles/825206/)
- [python - How does asyncio actually work? - Stack Overflow](https://stackoverflow.com/questions/49005651/how-does-asyncio-actually-work)
- [An Intro to Threading in Python – Real Python](https://realpython.com/intro-to-python-threading/)
- [asyncio — Asynchronous I/O Python 3.12.5 documentation](https://docs.python.org/3/library/asyncio.html)
- [Async IO in Python: A Complete Walkthrough – Real Python](https://realpython.com/async-io-python/)
- [How Python Asyncio Works: Recreating it from Scratch](https://jacobpadilla.com/articles/recreating-asyncio)
- [[Sorn_-_Comprehensive_python_cheatsheet|Python cheatsheet]], to dive in into language itself.
- [[Real_Python_Community_-_Python_tutorials]]
- [PEP 8 – Style Guide for Python Code](https://peps.python.org/pep-0008/)
- [Python cheat sheets](https://www.datacamp.com/cheat-sheet)
- [[Xiryanov_-_Praktika_programmirovaniya_na_Python|Практика программирования на Python]].
- [[Matthes_-_Python_crash_course]]
- [[Craig_-_Python_examples]]
- [How to learn Python programming | Guido van Rossum and Lex Fridman - YouTube](https://www.youtube.com/watch?v=F2Mx-u7auUs)
- [The Hitchhiker’s Guide to Python!](https://python-docs.readthedocs.io/en/latest/index.html)
- [JIT-компилятор Python в 300 строк / Habr](https://habr.com/en/articles/674206/)
- [A Python Guide to the Fibonacci Sequence](https://realpython.com/fibonacci-sequence-python/).
- [Detailed Videos - PythonByteSize](https://www.pythonbytesize.com/detailed-videos.html)
- [The origins of Python](https://inference-review.com/article/the-origins-of-python)
- [Python dataclasses will save you HOURS, also featuring attrs - YouTube](https://youtu.be/vBH6GRJ1REM)
- [Python Monorepo](https://www.tweag.io/blog/2023-04-04-python-monorepo-1/)
- [Скучный Python: повышаем качество кода / Хабр](https://habr.com/ru/company/otus/blog/713992/)
- [Ned Batchelder - Facts and Myths about Python names and values - PyCon 2015 - YouTube](https://www.youtube.com/watch?v=\_AEJHKGk9ns)
- [А как в питоне пайпать? — Development — Форум](https://www.linux.org.ru/forum/development/17025364)
- [Blog - Full Stack Python](https://www.fullstackpython.com/blog.html)
- [Python Cheatsheet - Python Cheatsheet](https://www.pythoncheatsheet.org/)
- [Python Tutorials – Real Python](https://realpython.com/)
- [Asyncio complete tutorial](https://superfastpython.com/python-asyncio/)
- [Modern Python Projects Course ](https://training.talkpython.fm/courses/details/modern-python-projects)
- [The Complete Python course](https://www.udemy.com/course/the-complete-python-course/)
- [30 Days of Python](https://github.com/codingforentrepreneurs/30-Days-of-Python)
- [python-patterns](https://github.com/faif/python-patterns)
- [Python Wiki](https://wiki.python.org/moin/)
- [Neural networks](https://stepik.org/course/50352/promo)

Web Frameworks:

- [The Flask Mega-Tutorial](https://blog.miguelgrinberg.com/post/the-flask-mega-tutorial-part-i-hello-world)
- Django framework [[Greenfelds_-_Two_scoops_of_django_3.x]]
- [Руководство Django Girls](https://tutorial.djangogirls.org/ru/)
- [Python Django - The Practical Guide](https://www.udemy.com/course/python-django-the-practical-guide/)
- [GitHub - zhanymkanov/fastapi-best-practices: FastAPI Best Practices and Conventions we used at our startup](https://github.com/zhanymkanov/fastapi-best-practices)

SQL:

- [SQLModel](https://sqlmodel.tiangolo.com/learn/)
- [python - SQLAlchemy proper session handling in multi-thread applications - Stack Overflow](https://stackoverflow.com/questions/9619789/sqlalchemy-proper-session-handling-in-multi-thread-applications)
- [Using Python SQLAlchemy session in multithreading](https://copdips.com/2019/05/using-python-sqlalchemy-session-in-multithreading.html#way-2-using-scoped_session-to-create-a-thread-local-variable)
- [You can use Pydantic in SQLAlchemy fields - Roman Imankulov](https://roman.pt/posts/pydantic-in-sqlalchemy-fields/)

Testing and refactoring:

- [[Hillard_-_testing_with_pytest]]
- [[Batchelder_-_Getting_started_testing]]
- [[Seporaitis_-_Large_scale_refactoring_with_PyBowler]]
- [Refactoring Python Applications for Simplicity – Real Python](https://realpython.com/python-refactoring/)
- [Testing Flask Applications — Flask Documentation (2.2.x)](https://flask.palletsprojects.com/en/2.2.x/testing/)
- [Simple mock server for testing using Flask · GitHub](https://gist.github.com/eruvanos/f6f62edb368a20aaa880e12976620db8)
- [x] [Typical Directory structure for python tests · GitHub](https://gist.github.com/tasdikrahman/2bdb3fb31136a3768fac) not worked as expected?

Programs, Libraries, Frameworks, Templates:

- [ipython](https://ipython.org/) - interactive python command shell
- [scipy](https://scipy.org/) - Fundamental algorithms for scientific computing
in Python
- [jupyter](https://jupyter.org/) - interactive computing across all programming
languages
- [numpy](https://numpy.org/) - the fundamental package for scientific computing
with Python
- [Ruff: one Python linter to rule them all](https://blog.jerrycodes.com/ruff-the-python-linter/)
- [GitHub - astral-sh/ruff-lsp: A Language Server Protocol implementation for Ruff.](https://github.com/charliermarsh/ruff-lsp)
- [dosisod/refurb: A tool for refurbishing and modernizing Python codebases](https://github.com/dosisod/refurb)
- [pallets/flask: The Python micro framework for building web applications.](https://github.com/pallets/flask)
- [asottile/pyupgrade: A tool (and pre-commit hook) to automatically upgrade syntax for newer versions of the language.](https://github.com/asottile/pyupgrade)
- [[Seporaitis_-_Large_scale_refactoring_with_PyBowler|PyBowler]]
- [spectree: API spec validator and OpenAPI document generator](https://github.com/0b01001001/spectree#flask)
- [rq-flask-sqlalchemy-template](https://github.com/edkrueger/rq-flask-sqlalchemy-template/tree/master)
- [Лучшие open-source инструменты для Python проектов](https://habr.com/en/articles/708916/)
- [python - Celery: log each task run to its own file?](https://stackoverflow.com/questions/25281612/celery-log-each-task-run-to-its-own-file)
- [Using Celery: Python Task Management](https://www.toptal.com/python/orchestrating-celery-python-background-jobs)

- [x] [Tutorial: Tic-Tac-Toe –
  React](https://react.dev/learn/tutorial-tic-tac-toe), not really enjoyed it

- [config_manager/xdg_config/pyenv/default-packages](https://github.com/tjdevries/config_manager/blob/master/xdg_config/pyenv/default-packages)
- [A curated list of awesome Python frameworks, libraries, software and resources](https://github.com/vinta/awesome-python)
- [Manim](https://www.manim.community/)
- [GitHub - tox-dev/filelock: A platform-independent file lock for Python.](https://github.com/tox-dev/filelock)
- [GitHub - miyuchina/mistletoe: A fast, extensible and spec-compliant Markdown parser in pure Python.](https://github.com/miyuchina/mistletoe)
- [Type hints cheat sheet - mypy 1.11.2 documentation](https://mypy.readthedocs.io/en/stable/cheat_sheet_py3.html)
- [GitHub - nschloe/perfplot: :chart_with_upwards_trend: Performance analysis for Python snippets](https://github.com/nschloe/perfplot)
- [JupyterLite and pandas intro](https://jvns.github.io/pandas-cookbook/lab/index.html)
- [Create text-based diagrams with Mermaid - YouTube](https://www.youtube.com/watch?v=4_LdV1cs2sA)
- Rsync tutorial, [rsync(1) manpage](https://download.samba.org/pub/rsync/rsync.1) and [examples](https://rsync.samba.org/examples.html)
- [Chrome DevTools](https://developer.chrome.com/docs/devtools)

JavaScript:

- [Современный учебник JavaScript](https://learn.javascript.ru/)
- [[Flanagan_-_JavaScript]]
- [Why async: JavaScript and the real world](https://frontarm.com/courses/async-javascript/promises/why-async/)
- [JavaScript | MDN](https://developer.mozilla.org/en-US/docs/Web/JavaScript)
- [1000x FASTER JavaScript? - YouTube](https://www.youtube.com/watch?v=B76gFi43HvM)
- [Examples of how to do query, style, dom, ajax, event etc like jQuery with plain javascript.](https://github.com/camsong/You-Dont-Need-jQuery)
- [Cheatsheet for the JavaScript knowledge you will frequently encounter in modern projects.](https://github.com/mbeaudru/modern-js-cheatsheet)
- [Infinitely Better UIs with Finite Automata - YouTube](https://www.youtube.com/watch?v=VU1NKX6Qkxc)
- [XState Catalogue](https://xstate-catalogue.com/)

- [Comparison of JavaScript-based web frameworks - Wikipedia](https://en.wikipedia.org/wiki/Comparison_of_JavaScript-based_web_frameworks)
- [GitHub - codemirror/dev: Development repository for the CodeMirror editor project](https://github.com/codemirror/dev/)

Web development:

[[HTML]] is initial resource of web page, sort of bones of web-page,
how information is structured on the web and more, some learning materials:
- [HTML - MDN](https://developer.mozilla.org/en-US/docs/Web/HTML)

[[CSS]] allow you to stylize your web page, tool to represent your
page in unique way, some learning materials:
- [CodePen trending](https://codepen.io/trending)
- [Grid Garden - A game for learning CSS grid](https://cssgridgarden.com/)
- Flexbox cheatsheet
- [CSS: Cascading Style Sheets | MDN](https://developer.mozilla.org/en-US/docs/Web/CSS)
- [Основы и практика CSS Grid Layout | Habr](https://habr.com/en/articles/656245/)
- [A collection of tips to help take your CSS skills pro](https://github.com/AllThingsSmitty/css-protips)
- [CSS GPU Animation: Doing It Right | Smashing Magazine](https://www.smashingmagazine.com/2016/12/gpu-animation-doing-it-right/)
- [CSS ::before and ::after for custom animations and transitions | LogRocket Blog](https://blog.logrocket.com/css-before-after-custom-animations-transitions/)

Other related web-development resources:
- [The Valley of Code](https://thevalleyofcode.com/)
- [Mini projects built with HTML5, CSS & JavaScript](https://github.com/bradtraversy/vanillawebprojects)
- [Как правильно верстать в 2022 году. Часть 1 / Habr](https://habr.com/en/articles/655009/)
- [The Odin Project, web development](https://www.theodinproject.com/)
- [Full stack open](https://fullstackopen.com/en/)
- [[Shuler_-_How_does_the_Internet_work]]

C (and a little bit of C++):

[[C]] is the lowest-level of the highest-level programming languages

Great cheat sheet with core language syntax:

TODO: verify this
[C Reference Card](img/C_Reference_Card_ANSI.v2.2.pdf)
_[C Reference Card (ANSI)](https://www.math.brown.edu/johsilve/ReferenceCards/CRefCard.v2.2.pdf)_

- [[Kernighan_and_Ritchie_-_The_C_programming_language]]
- [[Muratori_-_Handmade_hero]]
- [[Xiryanov_-_Kurs_molodogo_bojcza_MFTI_yazyk_S]], to learn basics of [[C]].
- [[Costrasel_-_The_C_programming_language_solutions]]
- [Learn C the Hard Way](https://learncodethehardway.org/c/)

- [Comparing C to machine language - YouTube](https://www.youtube.com/watch?v=yOyaJXpAYZQ)
- [Why C is so Influential - Computerphile - YouTube](https://www.youtube.com/watch?v=ci1PJexnfNE)
- [The GNU C Library - GNU Project - Free Software Foundation (FSF)](https://www.gnu.org/software/libc/manual/)
- [15 Years Writing C++ - Advice for new programmers - YouTube](https://www.youtube.com/watch?v=37VZu3b045k)

Lua:

[[lua]], actively use it with [[Neovim]], learning materials:

- `:h lua-guide` in neovim
- [A guide to using Lua in Neovim (lua guide in russian)](https://github.com/kuator/nvim-lua-guide-ru)
- [Programming in Lua (first edition)](https://www.lua.org/pil/contents.html)
- [Lua 5.4 Reference Manual - contents](https://www.lua.org/manual/5.4/),
- [Russian version](https://lua.org.ru/contents_ru.html).

Rust:

[[Rust]] is practically unknown to me, learning materials:

- [Implementing TCP in Rust](https://www.youtube.com/watch?v=bzja9fQWzdA)
- [Introduction - Rust By Example](https://doc.rust-lang.org/stable/rust-by-example/index.html)
- [The Rust Programming Language - The Rust Programming Language](https://doc.rust-lang.org/book/)
- [Rust Language Cheat Sheet](https://cheats.rs/)
- [Rust by the Numbers: The Rust Programming Language in 2021 - The New Stack](https://thenewstack.io/rust-by-the-numbers-the-rust-programming-language-in-2021/)
- [Rust vs. Go: Why They’re Better Together - The New Stack](https://thenewstack.io/rust-vs-go-why-theyre-better-together/)
- [rust - How can I perform parallel asynchronous HTTP GET requests with reqwest? - Stack Overflow](https://stackoverflow.com/questions/51044467/how-can-i-perform-parallel-asynchronous-http-get-requests-with-reqwest)

- [[DeVries_-_Tutorials]]
- [[ThePrimeagen_-_Tutorials]]
- [Sourcemaking](https://sourcemaking.com/)
- [A collection of full-stack resources for programmers](https://github.com/charlax/professional-programming)

Code organization and version control, code quality:

- [organize large projects](https://www.reddit.com/r/learnpython/comments/mxwdpj/are_there_any_books_or_videos_that_describe_how/)
- [[Chacon_and_Ben_-_Pro_git]]
- [[Martin_Fowler_-_Refactoring]]

DevOps:

I really want to learn more about [[Nix]] language, maybe someday I'll start to
learn it seriously.

- [[Will_NixOS]]
- [[Henry_How_to_Learn_Nix]]

Other:

- [How to "think" (and design) like a Software Architect at Silicon Valley
Code Camp 2019 - YouTube](https://www.youtube.com/watch?v=mCM6QVHD08c)
- [[Kernighan_and_Plauger_-_The_elements_of_programming_style]]
- [[Kernighan_and_Pike_-_The_practice_of_programming]]

- [Continually updated, interactive, and test-driven coding challenges, with Anki flashcards.](https://github.com/donnemartin/interactive-coding-challenges)
- [karan/Projects: A list of practical projects that anyone can solve in any programming language.](https://github.com/karan/Projects)
- [Programming Tasks](https://rosettacode.org/wiki/Category:Programming_Tasks)
- [Energy Efficiency across Programming Languages](https://greenlab.di.uminho.pt/wp-content/uploads/2017/09/paperSLE.pdf)
- [The Architecture of Open Source Applications](https://aosabook.org/en/)
- [6.00sc Основы программирования - YouTube](https://www.youtube.com/playlist?list=PLxZ7p55WWz1la38FHUrOqNEBCn7tZfKf3)
- [Processing, flexible software sketchbook and a language for learning how to code](https://processing.org/)
- [Comparison of programming languages - Wikipedia](https://en.wikipedia.org/wiki/Comparison_of_programming_languages)
- [Exercism, become fluent in your chosen programming languages](https://exercism.org/tracks)
- [Which Programming Language Should I Learn First?](https://carlcheo.com/startcoding)
- [Классификация знаний в области программирования / Habr](https://habr.com/en/articles/249983/)
- [Rosetta Code - Wikipedia](https://en.wikipedia.org/wiki/Rosetta_Code)

### Archive

- [c] [Writing The Matrix in Python: easy guide](https://habr.com/en/articles/720452/).
Not really enjoyed (questions to structure and contains specific error), so skipped.
- [c] [30-Days-of-Python - codingforentrepreneurs](https://www.youtube.com/playlist?list=PLEsfXFp6DpzQjDBvhNy5YbaBx9j-ZsUe6),
Probably good for beginners, but I not like too many inaccuracy/wrongness in this course.
- [x] [[Pycharm]] - Jetbrains Python IDE (in [[Java]]), stopped using

[^1]: [Category:Programming principles - Wikipedia](https://en.wikipedia.org/wiki/Category:Programming_principles)
