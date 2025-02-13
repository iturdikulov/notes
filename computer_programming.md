---
date: 2023-03-12T00:00+03:00
tags:
  - blog
  - outline
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
<br class="f">
Don't Repeat Youself. Avoid writing the same code in multiple places.
This principle make your code more maintainable when you need to change it.

Why repeating code is bad or can be bad?
<br class="f">
- If you need to change it, you have to change it in multiple places.
- If you forget to change it in one place, you'll have a new bug.
- It's more work to write it over and over again and maintain it.

KISS:<wbr class="f"> Keep It Simple, Stupid

YAGNI:<wbr class="f"> You Ain't Going to Need It

## Career Experience Goals

Yershov quote, TODO translate into English:

> Программист должен обладать способностью первоклассного математика к
> абстракции и логическому мышлению в сочетании с эдисоновским талантом
> сооружать все, что угодно, из нуля и единиц. Он должен сочетать аккуратность
> бухгалтера с проницательностью разведчика, фантазию автора детективных романов
> — с трезвой практичностью экономиста. А кроме того, программист должен иметь
> вкус к коллективной работе, понимать интересы пользователя и многое другое…\
> — <cite>Андрей Петрович Ершов</cite>

Programming Languages & Development:

- Experimental research programming experience in Lisp, Scheme, Pascal, etc.
- Development of complex software systems using Python, C, Go
- Microcontroller programming (ESP32)
- Proficiency in scripting languages: Bourne Shell, Lua
- Reading-level understanding of Rust, Ruby, Perl
- Experience with assembly languages.

Python Ecosystem:

- Python with modern asyncio, libraries and frameworks, type hints.
- Strong focus on asynchronous programming.
- Advanced typing system utilization (protocols, generics)
- Experience with pydantic, aiohttp, FastAPI, Django, requests, pytest/unittest.

Software Engineering & Architecture:

- Extensive experience in object-oriented analysis, design, and programming
- Multi-paradigm programming and design
- Extreme Programming (XP) methodology
- Clean Architecture, DDD, SOLID principles, and OOP expertise
- Testing (unit, integration, and end-to-end) and CI/CD.

Databases & Infrastructure:

- [[SQL]] language expertise, particularly [[PostgreSQL]] and [[SQLite]]
  dialects, indexes, transactinos, views, and triggers, procedures, functions,
  and stored procedures
- SQL [[SQL#ORM|ORM]] frameworks
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

- VCS tools proficiency, Git, GitHub, and GitLab
- Web development proficiency, HTML, JavaScript, CSS, and web frameworks
- LaTeX, Markdown proficiency and semi-professional typesetting
- Advanced English language proficiency
- Experience with Internet registration organizations.

## Programming learning path

Programming lerning path is closely related to
[[computer_science#Computer science learning path|computer science learning path]].

To understand custom bullet list types check [[my_notation]] note.

### Chapter 1: Programming Foundations

- [[computer_science]]
- [[computer_hardware]]

- [ ] Основы информатики и вычислительной техники
- [ ] [[Abelson_and_Sussman_-_SICP|SICP]]
- [ ] [[Stolyarov_-_Azy_programmirovaniya|Столяров - Азы программирования]]
- [ ] [[Hunt_and_Thomas_-_The_pragmatic_programmer]]
- [ ] [[McConnell_-_Code_complete]]
- [ ] [[Brownlee_-_Python_Asyncio_Jump-Start]]
- Evans, float numbers book
- [How to Convert from Binary to Decimal: 2 Simple Ways](https://www.wikihow.com/Convert-from-Binary-to-Decimal )

- [ ] [[pointer]]

### Chapter 2: Programming and testing

- [ ] [[Python]]
- [ ] [[Go]]
- [ ] [[Rust]]
- [ ] [[C]]
- [ ] [[JavaScript]]
- [ ] [[Lua]]
- [ ] [[Bash]]
- [ ] [[Pascal]]
- [ ] [[Nix]]
- [ ] [[projects]]

- [[conditional]]
- [[concurency]]
- How to Design Programs. Как проектировать программы: Фелляйзен, Финдлер, Флэтт
- [ ] [Великая дидактика — Википедия](https://ru.wikipedia.org/wiki/%D0%92%D0%B5%D0%BB%D0%B8%D0%BA%D0%B0%D1%8F_%D0%B4%D0%B8%D0%B4%D0%B0%D0%BA%D1%82%D0%B8%D0%BA%D0%B0)
- [Обобщённое программирование — Википедия](https://ru.wikipedia.org/wiki/%D0%9E%D0%B1%D0%BE%D0%B1%D1%89%D1%91%D0%BD%D0%BD%D0%BE%D0%B5_%D0%BF%D1%80%D0%BE%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5)

- [ ] [Awesome Software Architecture](https://awesome-architecture.com/)
- [p] [[12factor_app]] - Intersting high-level overview of "good" applications
  development practicies.
- [ ] [[Freeman_etal_-_Head_first_design_patterns]]
- [ ] [Architecture Patterns with Python](https://www.cosmicpython.com/book/preface.html)
- [python-patterns](https://github.com/faif/python-patterns)
- [ ] [[solid]] note research, part 2.
- [ ] Refactoring: Improving the Design of Existing Code, read and take notes.
- [/] [[McConnell_-_Code_complete]], read and take notes.
- Domain-Driven Design Distilled, read and take notes.
- [Data-Oriented Demo: SOA, composition - YouTube](https://www.youtube.com/watch?v=ZHqFrNyLlpA),
  research video.
- Beyond the Twelve-Factor App, read and take notes.
- [What every systems programmer should know about
  concurrency](./articles/Kline_-_concurrency_primer.pdf), research article.
- [[OOP]] - research note.
- [GitHub - pgorecki/python-ddd: Python DDD example](https://github.com/pgorecki/python-ddd)
- [Как сменить технологию и не закопаться в рефакторинге: опыт внедрения DDD в проект на FastAPI — Часть 1 / Хабр](https://habr.com/ru/articles/833720/)
- [ ] [A curated list of data oriented design resources](https://github.com/dbartolini/data-oriented-design)

#### Testing

- [ ] [[software_testing]]
- [ ] [Getting Started With Testing in Python – Real Python](https://realpython.com/python-testing/#writing-integration-tests)
- [ ] [Using Testcontainers with Pytest: Isolate Data for Effective Testing](https://qxf2.com/blog/using-testcontainers-with-pytest/)

- [[Hillard_-_testing_with_pytest]]
- [[Batchelder_-_Getting_started_testing]]
- [[Seporaitis_-_Large_scale_refactoring_with_PyBowler]]
- [Refactoring Python Applications for Simplicity – Real Python](https://realpython.com/python-refactoring/)
- [Testing Flask Applications — Flask Documentation (2.2.x)](https://flask.palletsprojects.com/en/2.2.x/testing/)
- [Simple mock server for testing using Flask · GitHub](https://gist.github.com/eruvanos/f6f62edb368a20aaa880e12976620db8)
- [x] [Typical Directory structure for python tests · GitHub](https://gist.github.com/tasdikrahman/2bdb3fb31136a3768fac) not worked as expected?

### Chapter 3: Databases

- [[SQL]], research note
- [Как хранить в БД древовидные структуры](https://github.com/codedokode/pasta/blob/master/db/trees.md)
- [Modified Preorder Tree Traversal](https://gist.github.com/tmilos/f2f999b5839e2d42d751)

### Chapter 4: Specialization

- [[asyncio]]
- [[Pydantic]]
- [Как выполнять скрейпинг LinkedIn — полное руководство (обновлено в 2025 г.)]( https://ru-brightdata.com/blog/how-tos-ru/linkedin-scraping-guide)
- [How to Scrape LinkedIn & 7 Best LinkedIn Scrapers ['25]](https://research.aimultiple.com/linkedin-scrapers/)

#### Backend

- [Backend Developer Roadmap](https://roadmap.sh/backend).
- [Бэкендеры | Вызов Хабр Карьеры и Хекслета](https://drive.google.com/drive/folders/1iW5Fgax0A1DTjt6URUhKYBoZ1A-AAZpZ)
- [[aio-pika_Community_-_rabbitmq_tutorial]].

- Django in action
- Django framework [[Greenfelds_-_Two_scoops_of_django_3.x]]
- [Руководство Django Girls](https://tutorial.djangogirls.org/ru/)
- [Python Django - The Practical Guide](https://www.udemy.com/course/python-django-the-practical-guide/)

- [FastAPI](https://fastapi.tiangolo.com/learn/)
- [Flask](https://flask.palletsprojects.com/en/stable/)

- [Превращаем любой фреймворк в FastAPI. На прицеле Flask / Habr](https://habr.com/en/articles/748618/)
- [Большой гайд по миграциям в Django: готовимся к миграциям и избегаем конфликтов / Хабр](https://habr.com/ru/companies/idaproject/articles/861386/)
- [Сборка Django-приложения при помощи Nuitka в onefile / Хабр](https://habr.com/ru/companies/astralinux/articles/872510/)
- [FastStream](https://faststream.airt.ai/latest/faststream)

- [rq-flask-sqlalchemy-template](https://github.com/edkrueger/rq-flask-sqlalchemy-template/tree/master)
- [python - Celery: log each task run to its own file?](https://stackoverflow.com/questions/25281612/celery-log-each-task-run-to-its-own-file)
- [Using Celery: Python Task Management](https://www.toptal.com/python/orchestrating-celery-python-background-jobs)

#### Web

- [[CSS]]
- [[HTML]]
- [[JavaScript]]

- [Web development](https://web.dev/learn).
- [The Path to Learn Web Development](https://flaviocopes.com/the-path-to-learn-web-development/)
- [OAuth.com - OAuth 2.0 Simplified](https://www.oauth.com/)
- [Build a JavaScript Front End for a Flask API – Real Python](https://realpython.com/flask-javascript-frontend-for-rest-api/#demo)

- [A simple two column CSS grid | Simon Willison’s TILs](https://til.simonwillison.net/css/simple-two-column-grid)
- Master Modern CSS with Kevin Powell
- [Simple.css is a CSS template that allows you to make a good looking website really quickly.](https://github.com/kevquirk/simple.css)

- [HTML - MDN](https://developer.mozilla.org/en-US/docs/Web/HTML)

- [CodePen trending](https://codepen.io/trending)
- [Grid Garden - A game for learning CSS grid](https://cssgridgarden.com/)
- Flexbox cheatsheet
- [CSS: Cascading Style Sheets | MDN](https://developer.mozilla.org/en-US/docs/Web/CSS)
- [Основы и практика CSS Grid Layout | Habr](https://habr.com/en/articles/656245/)
- [A collection of tips to help take your CSS skills pro](https://github.com/AllThingsSmitty/css-protips)
- [CSS GPU Animation: Doing It Right | Smashing Magazine](https://www.smashingmagazine.com/2016/12/gpu-animation-doing-it-right/)
- [CSS :<wbr class="f"> before and :<wbr class="f"> after for custom animations and transitions | LogRocket Blog](https://blog.logrocket.com/css-before-after-custom-animations-transitions/)

#### OS

- [ ] [[Tanenbaum_and_Bos_-_Modern_operating_systems]]
- Cpu scheduling
- Interrupts
- [ ] [[TCP_IP]]
- [ ] [[round-robin_scheduling]]
- [WireGuard in NetworkManager – Thomas Haller's Blog](https://blogs.gnome.org/thaller/2019/03/15/wireguard-in-networkmanager/ )
- pseudoterminal
- [EasyEffects не нужно, или PipeWire для продвинутых: часть 1 — Desktop — Статьи](https://www.linux.org.ru/articles/desktop/17829071)
- [Гайд по межсетевому экранированию (nftables)](https://habr.com/ru/articles/684524/))
- [Sending an ethernet packet](https://github.com/francisrstokes/githublog/blob/main/2024%2F11%2F1%2Fsending-an-ethernet-packet.md)
- users/groups/cgroups (The linux programming interface)

### Chapter 7: Advanced Topics

- [ ] [[Aho_Lam_et_al_-_Compilers]]
- [LLVM Tutorial](https://llvm.org/docs/tutorial/)

- [ ] [[Git]]
- [ ] [[Docker]]
- [ ] [[cryptography]]
- [Website monitoring | Grafana Labs](https://grafana.com/grafana/dashboards/13041-website-monitoring/)

#### Developer tools

- [/] [dotfiles](https://github.com/iturdikulov/dotfiles), personal [[NixOS]],
  scripts and [[my_awesome_software_list|software]] configuration.

- [ ] [[Neovim]]
- [ ] [[GNU_Sed]]
- [ ] [[Ripgrep]]
- [ ] [Guide to Faster, Less Frustrating Debugging](http://heather.cs.ucdavis.edu/matloff/public_html/UnixAndC/CLanguage/Debug.html)
- [ ] [Chrome DevTools](https://developer.chrome.com/docs/devtools)
- [ ] [Firefox DevTools](https://firefox-source-docs.mozilla.org/devtools-user/)
- [ ] [fastapi_celery_redis_postgres_app.py · GitHub](https://gist.github.com/JacobFV/c9c068f66d371175e5334d1635deaea0)
- [ ] [libfaketime modifies the system time for a single application](https://github.com/wolfcw/libfaketime/)
- [An Introduction to VisiData — An Introduction to VisiData](https://jsvine.github.io/intro-to-visidata/ )
- [PathPicker accepts a wide range of input -- output from git commands, grep results, searches -- pretty much anything. After parsing the input, PathPicker presents you with a nice UI to select which files you're interested in. After that you can open them in your favorite editor or execute arbitrary commands.](https://github.com/facebook/PathPicker)
- [ipython](https://ipython.org/) - interactive python command shell
- [jupyter](https://jupyter.org/) - interactive computing across all programming languages
- [Ruff: one Python linter to rule them all](https://blog.jerrycodes.com/ruff-the-python-linter/)
- [dosisod/refurb: A tool for refurbishing and modernizing Python codebases](https://github.com/dosisod/refurb)
- [asottile/pyupgrade: A tool (and pre-commit hook) to automatically upgrade syntax for newer versions of the language.](https://github.com/asottile/pyupgrade)

#### Game Development

- [/] [Bevy game development - Tainted Coders](https://taintedcoders.com/)

- [TIC-80 is a fantasy computer for making, playing and sharing tiny games.](https://github.com/nesbox/TIC-80 )
- [Coding an HTML5 Canvas Game with JS in 5 min 30 sec - YouTube](https://www.youtube.com/watch?v=KoWqdEACyLI)
- [ ] [[Godot]]
- [ ] [Game Development](https://develop.games/)
- [ ] [ASCII графика и PIXEL арт на Python - YouTube](https://www.youtube.com/watch?v=ww55ublLFq8)
- [ ] [Red Blob Games](https://www.redblobgames.com/)
- [ ] [t3ssel8r - YouTube](https://www.youtube.com/@t3ssel8r/videos)

- [ ] https://pragprog.com/titles/hwrust/hands-on-rust/

- [[Muratori_-_Handmade_hero]]
- [[lineage_2_tools]]
- [[L2bot]]
- [[OpenCV_L2_Bot]]
- [[L2jserver_lineage_2_java_server]]
- [LinuxCafeFederation/awesome-gnu-linux-gaming](https://github.com/LinuxCafeFederation/awesome-gnu-linux-gaming)
- [vinjn/awesome-vulkan: Awesome Vulkan ecosystem](https://github.com/vinjn/awesome-vulkan)

### Chapter 8: Profession

- [x] [[Yershov_-_programmirovanie_vtoraya_gramotnost]]
- [x] [[Grahm_-_Programming_Bottom-Up]]
- [ ] [Graham_-_Beating the Averages](https://paulgraham.com/avg.html)
- [ ] [Five Questions about Language Design](https://paulgraham.com/langdes.html)
- [ ] [Why Arc Isn't Especially Object-Oriented](https://paulgraham.com/noop.html)
- [ ] [What Languages Fix](https://paulgraham.com/fix.html)
- [ ] [Design and Research](https://paulgraham.com/desres.html)
- [ ] [Better Bayesian Filtering](https://paulgraham.com/better.html)
- [ ] [The Hundred-Year Language](https://paulgraham.com/hundred.html)
- [ ] [Hackers and Painters](https://paulgraham.com/hp.html)
- [ ] [Great Hackers](https://paulgraham.com/gh.html)
- [ ] [The Python Paradox](https://paulgraham.com/pypar.html)
- [ ] [[Evans_-_So_you_want_to_be_a_WizarD]]
- [ ] [[Hunt_and_Thomas_-_The_pragmatic_programmer]]
- [ ] [[Sonmez_-_Gibkie_navyki]]
- [ ] Программист-фанатик
- [ ] [[Brooks_-_Mythical_man-month]]
- [ ] [[Rainwater_-_Herding_cats]]
- [ ] [[Yourdon_-_Death_march]]

### Inbox

- [Техносфера - Мир программирования](https://www.technosphera.ru/lib/8)

- cs50py (mainly to be more familiar with Engish voculary)
- loop

- Virtual memory
- System call
- File descriptor
- Futex
- Mutex
- Semaphore
- Immediately Invoked Function Expressions (IIFE)

- [plan9/sys/src/cmd/cat.c - GitHub](https://github.com/0intro/plan9/blob/main/sys/src/cmd/cat.c),
research code.
- [ ] [ByteByteGo - YouTube](https://www.youtube.com/@ByteByteGo/videos)
- [ ] [Common Gateway Interface - Wikipedia](https://en.wikipedia.org/wiki/Common_Gateway_Interface).
- [ ] [How I Automated My Job Application Process. (Part 1)](https://blog.daviddodda.com/how-i-automated-my-job-application-process-part-1)
- [Capt. Grace Hopper on Future Possibilities: Data, Hardware, Software, and People (Part One, 1982) - YouTube](https://www.youtube.com/watch?v=si9iqF5uTFk )

- [[Linux_community_-_Submitting_patches|submit patches]] in right way.
- [Introduction · Linux Inside](https://0xax.gitbooks.io/linux-insides/content/)
- [Kunzelma Wiki](https://wiki.kunzelma.de/)

- [Как подружить веб-компоненты и JS-фреймворки / Хабр](https://habr.com/ru/companies/sberbank/articles/834998/)
- [CRDT: Conflict-free Replicated Data Types / Хабр](https://habr.com/ru/articles/418897/)
- [goldbergyoni/nodebestpractices](https://github.com/goldbergyoni/nodebestpractices/blob/master/README.russian.md)

- union
- intersection
- difference
- symmetric difference

- [is looping through an array easier on the memory than a long recursion](https://www.quora.com/In-computer-programming-is-looping-through-an-array-easier-on-the-memory-than-a-long-recursion)
- [What is a web server? | MDN](https://developer.mozilla.org/en-US/docs/Learn/Common_questions/Web_mechanics/What_is_a_web_server)
- [What is the difference between webpage, website, web server, and search engine? | MDN](https://developer.mozilla.org/en-US/docs/Learn/Common_questions/Web_mechanics/Pages_sites_servers_and_search_engines)

- [GitHub - testcontainers/testcontainers-python: Testcontainers is a Python library that providing a friendly API to run Docker container. It is designed to create runtime environment to use during your automatic tests.](https://github.com/testcontainers/testcontainers-python)

Web Frameworks:

- [The Flask Mega-Tutorial](https://blog.miguelgrinberg.com/post/the-flask-mega-tutorial-part-i-hello-world)
- [GitHub - zhanymkanov/fastapi-best-practices: FastAPI Best Practices and Conventions we used at our startup](https://github.com/zhanymkanov/fastapi-best-practices)


Programs, Libraries, Frameworks, Templates:


- [scipy](https://scipy.org/) - Fundamental algorithms for scientific computing
in Python
- [numpy](https://numpy.org/) - the fundamental package for scientific computing
with Python
- [[Seporaitis_-_Large_scale_refactoring_with_PyBowler|PyBowler]]
- [spectree: API spec validator and OpenAPI document generator](https://github.com/0b01001001/spectree#flask)
- [Лучшие open-source инструменты для Python проектов](https://habr.com/en/articles/708916/)

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

Other related web-development resources:
- [The Valley of Code](https://thevalleyofcode.com/)
- [Mini projects built with HTML5, CSS & JavaScript](https://github.com/bradtraversy/vanillawebprojects)
- [Как правильно верстать в 2022 году. Часть 1 / Habr](https://habr.com/en/articles/655009/)
- [The Odin Project, web development](https://www.theodinproject.com/)
- [Full stack open](https://fullstackopen.com/en/)
- [[Shuler_-_How_does_the_Internet_work]]

- [[Muratori_-_Handmade_hero]]

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
