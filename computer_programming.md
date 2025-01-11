---
date: 2023-03-12
tags:
  - inbox
  - base
sr-due: 2024-01-31
sr-interval: 3
sr-ease: 208
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
programming, software development in my [[programming_learning_path]].

## Programming principles

TODO: add term
https://en.wikipedia.org/wiki/Category:Programming_principles

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

Why repeating code is bad?
&#10;<br>
- If you need to change it, you have to change it in multiple places
- If you forget to change it in one place, you'll have a bug
- It's more work to write it over and over again

KISS::Keep It Simple, Stupid

YAGNI::You Ain't Going to Need It

<!-- NEXT: review this -->

## SOLID principles, to make object-oriented designs better

The SOLID ideas are:

- The Single-responsibility principle: "There should never be more than one
reason for a class to change." In other words, every class should have only
one responsibility.

- The Open–closed principle: "Software entities ... should be open for
extension, but closed for modification."

- The Liskov substitution principle: "Functions that use pointers or references
to base classes must be able to use objects of derived classes without knowing
it." See also design by contract.

- The Interface segregation principle: "Clients should not be forced to depend
upon interfaces that they do not use."

- The Dependency inversion principle: "Depend upon abstractions, not concretions."

The SOLID acronym was introduced later, around 2004, by Michael Feathers.

Although the SOLID principles apply to any object-oriented design, they can also
form a core philosophy for methodologies such as agile development or adaptive
software development.

[S]ingle responsibility principle – принцип единственной обязанности на каждый
класс должна быть возложена одна-единственная обязанность

[O]pen/closed principle – принцип открытости/закрытости программные сущности
должны быть закрыты для изменения но открыты для расширения

[L]iskov substitution principle – принцип подстановки Барбары Лисков функции,
которые используют базовый тип, должны иметь возможность использовать подтипы
базового типа, не зная об этом.

[I]nterface segregation principle – принцип разделения интерфейса много
специализированных интерфейсов лучше, чем один универсальный

[D]ependency inversion principle – принцип инверсии зависимостей зависимости
внутри системы строятся на основе абстракций. Модули верхнего уровня не зависят
от модулей нижнего уровня. Абстракции не должны зависеть от деталей. Детали
должны зависеть от абстракций

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

