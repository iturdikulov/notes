---
date: 2023-03-18
tags:
  - inbox
  - SR_programming
sr-due: 2024-01-26
sr-interval: 2
sr-ease: 228
---

# SOLID

> In [[Software_engineering|software engineering]], SOLID is a mnemonic acronym
> for five design principles intended to make object-oriented designs more
> understandable, flexible, and maintainable. The principles are a subset of
> many principles promoted by American software engineer and instructor Robert
> C. Martin, first introduced in his 2000 paper Design Principles and Design
> Patterns discussing software rot.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/SOLID)</cite>

The SOLID acronym was introduced later, around 2004, by Michael Feathers.

SOLID principles help build architecture with object-oriented design
([[Object-oriented_design|OOD]]). This isn't simple process and challenge for
your skills. Usually OOD is must be done before you start coding.

Main purpose of SOLID principles is to make your classes more maintainable,
flexible, improve their structure and make scalable. But don't forget about
overhead and over-engineering. You should use SOLID principles when you **need
to** use them.

## Single-Responsibility Principle (SRP)

- The **S**ingle-responsibility principle (SRP):
&#10;
"There should **never** be more than **one** reason for a class to change."
Every class should have only one responsibility.\
One soldier one job.

## The Open–closed principle (OCP)

- The Open–closed principle:
&#10;
"Software entities ... should be open for extension, but closed for
modification."

## The Liskov substitution principle (LSP)

- The Liskov substitution principle:
&#10;
"Functions that use pointers or references to base classes must be able to use
objects of derived classes without knowing it." See also design by contract.

## The Interface segregation principle (ISP)

- The Interface segregation principle:
&#10;
"Clients should not be forced to depend upon interfaces that they do not use."

## The Dependency inversion principle (DIP)

- The Dependency inversion principle:
&#10;
"Depend upon abstractions, not concretes."


## References

- [ ] [SOLID Principles: Improve OOD in Python](https://realpython.com/solid-principles-python/)
