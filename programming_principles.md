---
date: 2022-12-29
tags:
  - inbox
  - base
sr-due: 2024-01-28
sr-interval: 1
sr-ease: 188
---
# Programming principles

TODO: add term
https://en.wikipedia.org/wiki/Category:Programming_principles

DRY
&#10;
Don't Repeat Youself. Avoid writing the same code in multiple places.
This principle make your code more maintainable when you need to change it.

Why repeating code is bad?
&#10;
- If you need to change it, you have to change it in multiple places
- If you forget to change it in one place, you'll have a bug
- It's more work to write it over and over again

KISS::Keep It Simple, Stupid

YAGNI::You Ain't Gonna Need It

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
