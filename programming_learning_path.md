---
date: 2024-01-15
tags:
  - inbox
  - bridge
  - bridge
sr-due: 2023-01-28
sr-interval: 1
sr-ease: 161
---

# Programming learning path

My number #1 learning path.

I place here my active learning resources, here is no strict grouping, but I'm
trying to keep it organized by priority.

[[computer_programming|Programming]] is a big part of my life, I'm trying to
learn it in a structured way. Quality of learning resources is important for me,
but in same time learning materials should be understandable and easy to follow.

Initial point to start learning programming is development of your programming
principles, like this [[##Programming principles|principles]]. Also. worth to
check some [[research/Evans-So_you_want_to_be_a_WizarD|learning strategies]].

Programming is closely related to [[CS_learning_path|computer science]].

## Programming principles

- Gathering problems and requirements.
- Architecture planning and discussion.
- Writing maintainable code for people, DRY, KISS, YAGNI. Avoiding neurosis and
excessive perfectionism.
- Writing **simple** self-documenting code that explains its logic, comments
should be up-to-date and do not contain unnecessary information (explain what is
not clear or why it was done that way).
  - I avoid deep abstractions and always prefer composition to inheritance or impurity.
  - I prefer flat data structures whenever possible.
  - I introduce external dependencies to a minimum (ideally without them at all).
  - I design modules with clear APIs, but almost never translate them into microservices.
  - To understand legacy code, I draw dependency graphs and sequence diagrams.
  - I write examples - lots of examples. Some of them are even interactive.
- Several levels of testing, with the help of "tools" (debugger, linter, etc.)
and automatic testing.
- Working with team, helping others and myself (documentation, training,
reviews).
- I listen to the opinion of older comrades, experience is expensive.
- I do refactor if something is unclear and needs to be improved.


## Now

What I'm currently learning, with [[queue]] order

- [/] Asyncio
- [/] RabbitMQ tutorial for aio-pika
- [/] [[research/Stolyarov-Programming_volume_1_0_introduction]]
- [ ] [[research/Stolyarov-Programming_volume_1_1_preliminary_information]]
- [ ] [Web development](https://web.dev/learn)
- [ ] [is looping through an array easier on the memory than a long recursion](https://www.quora.com/In-computer-programming-is-looping-through-an-array-easier-on-the-memory-than-a-long-recursion)
- [ ] python packaging
- [ ] Concurrency primer - https://assets.bitbashing.io/papers/concurrency-primer.pdf
- [ ] Chrome dev tools
- [ ] https://github.com/goldbergyoni/nodebestpractices/blob/master/README.russian.md
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

## Learning materials

Collections to pick something useful to learn, some items are hidden inside
related notes (first sections, priority matters).

### General purpose

- [[research/Python|Python]], my primary programming language
- [[research/Go|Go]], my secondary programming language
- [[research/JavaScript|JavaScript]], my tertiary programming language
- [[research/Pascal]], my "old friend", my initial programming language
- [[research/C|C]] is the lowest-level of the highest-level programming languages
- [[research/lua|lua]], actively use it with [[Neovim]]
- [[research/Rust]] practically unknown to me

### Web development

- [[research/HTML]] is initial resource of web page, sort of bones of web-page,
how information is structured on the web and more.
- [[research/CSS]] allow you to stylize your web page, tool to represent your
page in unique way.

- [ ] [Backend Developer Roadmap](https://roadmap.sh/backend).
- [ ] [The Valley of Code](https://thevalleyofcode.com/)
- [ ] [Mini projects built with HTML5, CSS & JavaScript](https://github.com/bradtraversy/vanillawebprojects)
- [ ] [Как правильно верстать в 2022 году. Часть 1 / Habr](https://habr.com/en/articles/655009/)
- [ ] [The Odin Project, web development](https://www.theodinproject.com/)
- [ ] [Full stack open](https://fullstackopen.com/en/)

- [ ] [[research/Shuler-How_Does_the_Internet_Work]]
- [ ] [What is a web server? | MDN](https://developer.mozilla.org/en-US/docs/Learn/Common_questions/Web_mechanics/What_is_a_web_server)
- [ ] [What is the difference between webpage, website, web server, and search engine? | MDN](https://developer.mozilla.org/en-US/docs/Learn/Common_questions/Web_mechanics/Pages_sites_servers_and_search_engines)

### Today I learned (TIL)

I think it's good source to find something useful to learn and some "life-hacks",
snippets and more.

- [jbranchaudtil memo Today I Learned](https://github.com/jbranchaud/til)
- [Simon Willison TIL](https://til.simonwillison.net/)
- [Hashrocket - Today I Learned](https://til.hashrocket.com/)

### General programming and software development

- [[research/Aho_Lam_et_al-Compilers]]
- [[research/McConnell-Code_complete]]
- [[research/DeVries-Tutorials]]
- [[research/ThePrimeagen-Tutorials]]
- [Sourcemaking](https://sourcemaking.com/)
- [A collection of full-stack resources for programmers](https://github.com/charlax/professional-programming)

### Code organization and version control, code quality

- [ ] [organize large projects](https://www.reddit.com/r/learnpython/comments/mxwdpj/are_there_any_books_or_videos_that_describe_how/)
- [[research/Linux_Community-Submitting_patches|submit patches]] in right way.
- [[research/Chacon_and_Ben-Pro_Git]]
- [[research/Martin_Fowler-Refactoring]]

### Soft skills

- [[research/Brooks-Mythical_Man-Month]]
- [[research/Hunt_and_Thomas-The_Pragmatic_Programmer]]
- [[research/Rainwater-Herding_Cats]]
- [[research/Yourdon-Death_March]]
- [x] [[research/Evans-So_you_want_to_be_a_WizarD]]

### DevOps

I really want to learn more about [[Nix]] language, maybe someday I'll start to
learn it seriously.

- [[research/Will_NixOS]]
- [[research/Henry_How_to_Learn_Nix]]

### Computer graphics and game development

- [[research/Javidx9-Code_It_Yourself]]
- [[research/Muratori-Handmade_Hero|Handmade Hero]], my initial steps, heavy
  related to programming with [[MS_Windows|Windows]] API and
  [[computer_graphics|computer graphics]].

### OS and kernel development

- [[research/Tanenbaum_and_Bos-Modern_Operating_Systems]]

### Other

- [ ] [How to "think" (and design) like a Software Architect at Silicon Valley
Code Camp 2019 - YouTube](https://www.youtube.com/watch?v=mCM6QVHD08c)
- [[research/Kernighan_and_Plauger-The_Elements_of_Programming_Style]]
- [[research/Kernighan_and_Pike-The_Practice_of_Programming]]
- [[research/Abelson_and_Sussman-Structure_and_Interpretation_of_Computer_Programs_SICP|SICP]]

- [Continually updated, interactive, and test-driven coding challenges, with Anki flashcards.](https://github.com/donnemartin/interactive-coding-challenges)
- [karan/Projects: A list of practical projects that anyone can solve in any programming language.](https://github.com/karan/Projects)
- [Programming Tasks](https://rosettacode.org/wiki/Category:Programming_Tasks)
- [ ] [Energy Efficiency across Programming Languages](https://greenlab.di.uminho.pt/wp-content/uploads/2017/09/paperSLE.pdf)
- [ ] [The Architecture of Open Source Applications](https://aosabook.org/en/)
- [ ] [15 Years Writing C++ - Advice for new programmers - YouTube](https://www.youtube.com/watch?v=37VZu3b045k)
- [ ] [6.00sc Основы программирования - YouTube](https://www.youtube.com/playlist?list=PLxZ7p55WWz1la38FHUrOqNEBCn7tZfKf3)
- [ ] [Processing, flexible software sketchbook and a language for learning how to code](https://processing.org/)
- [ ] [Comparison of programming languages - Wikipedia](https://en.wikipedia.org/wiki/Comparison_of_programming_languages)
- [ ] [Exercism, become fluent in your chosen programming languages](https://exercism.org/tracks)
- [ ] [Which Programming Language Should I Learn First?](https://carlcheo.com/startcoding)
- [ ] [Классификация знаний в области программирования / Habr](https://habr.com/en/articles/249983/)
- [Rosetta Code - Wikipedia](https://en.wikipedia.org/wiki/Rosetta_Code)

## Archive

- [-] [Writing The Matrix in Python: easy guide](https://habr.com/en/articles/720452/).
Not really enjoyed (questions to structure and contains specific error), so skipped.
- [-] [30-Days-of-Python - codingforentrepreneurs](https://www.youtube.com/playlist?list=PLEsfXFp6DpzQjDBvhNy5YbaBx9j-ZsUe6),
Probably good for beginners, but I not like too many inaccuracy/wrongness in this course.
