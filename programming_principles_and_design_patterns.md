---
created: 2022-12-29T00:00+03:00
tags:
  - blog
  - computer_programming_patterns
sr-due: 2025-07-19
sr-interval: 1
sr-ease: 130
---

# Programming principles and design patterns

List of programming principles aviable at Wikipedia [^1].

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

[[SOLID]]
<br class="f">
Single Responsibility, Open/Closed, Liskov Substitution, Interface Segregation,
Dependency Inversion.

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

## Learning path

- [[software_quality]]
- [[Martin_Fowler-Refactoring]]
- [[Kernighan_and_Pike-The_practice_of_programming]]
- [[Kernighan_and_Plauger-The_elements_of_programming_style]]
- [Sourcemaking](https://sourcemaking.com/)
- Winter and Manshreck and Wright - Software Engineering at Google
- Spolsky - The Best Software Writing I
- How to Design Programs. Как проектировать программы: Фелляйзен, Финдлер, Флэтт
- [ ] [Великая дидактика — Википедия](https://ru.wikipedia.org/wiki/%D0%92%D0%B5%D0%BB%D0%B8%D0%BA%D0%B0%D1%8F_%D0%B4%D0%B8%D0%B4%D0%B0%D0%BA%D1%82%D0%B8%D0%BA%D0%B0)
- [Обобщённое программирование — Википедия](https://ru.wikipedia.org/wiki/%D0%9E%D0%B1%D0%BE%D0%B1%D1%89%D1%91%D0%BD%D0%BD%D0%BE%D0%B5_%D0%BF%D1%80%D0%BE%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5)
- [ ] [Awesome Software Architecture](https://awesome-architecture.com/)
- [p] [[12factor_app]] - Intersting high-level overview of "good" applications
  development practicies.
- [ ] [[Freeman_etal-Head_first_design_patterns]]
- [ ] [Architecture Patterns with Python](https://www.cosmicpython.com/book/preface.html)
- [python-patterns](https://github.com/faif/python-patterns)
- [ ] [[solid]] note research, part 2.
- [ ] Refactoring: Improving the Design of Existing Code, read and take notes.
- Domain-Driven Design Distilled, read and take notes.
- [Data-Oriented Demo: SOA, composition - YouTube](https://www.youtube.com/watch?v=ZHqFrNyLlpA),
  research video.
- Beyond the Twelve-Factor App, read and take notes.
- [[OOP]] - research note.
- [GitHub - pgorecki/python-ddd: Python DDD example](https://github.com/pgorecki/python-ddd)
- [Как сменить технологию и не закопаться в рефакторинге: опыт внедрения DDD в проект на FastAPI — Часть 1 / Хабр](https://habr.com/ru/articles/833720/)
- [ ] [A curated list of data oriented design resources](https://github.com/dbartolini/data-oriented-design)
- [/] [[McConnell-Code_complete]], read and take notes.
- [ ] [Five Questions about Language Design](https://paulgraham.com/langdes.html)
- [ ] [Why Arc Isn't Especially Object-Oriented](https://paulgraham.com/noop.html)

- [x] [[Grahm-Programming_Bottom-Up]]
- [ ] [Graham_-_Beating the Averages](https://paulgraham.com/avg.html)
- [ ] [Design and Research](https://paulgraham.com/desres.html)
- [ ] [Better Bayesian Filtering](https://paulgraham.com/better.html)
- [ ] [The Hundred-Year Language](https://paulgraham.com/hundred.html)
- [ ] [The Python Paradox](https://paulgraham.com/pypar.html)
- [How to "think" (and design) like a Software Architect at Silicon Valley](https://www.youtube.com/watch?v=mCM6QVHD08c)
- [Python Application Layouts: A Reference – Real Python](https://realpython.com/python-application-layouts/)

[^1]: [Category:Programming principles - Wikipedia](https://en.wikipedia.org/wiki/Category:Programming_principles)
