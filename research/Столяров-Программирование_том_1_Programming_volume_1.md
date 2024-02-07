---
author:
  - Андрей Викторович Столяров
date: 2021
external:
  - http://www.stolyarov.info/books/programming_intro/vol1
tags:
  - research
  - inbox
  - SR_programming
sr-due: 2024-05-03
sr-interval: 99
sr-ease: 227
directory:
  - ~/Computer/programming/Столяров-Программирование
---

# Программирование - Введение в профессию. Том 1.

## Introduction 1, philosophical (Предисловие 1, философское)

Author tell how he wrote this book, what difficulties he had and how crowdfunding
project helped him to write this book.

With crowdfunding project author can exist and write book,
not search for other jobs. In total author spend 2200 hours to write 3 volumes,
books wasn't written from scratch (previous works and lectures was used).

Author also doesn't like current situation with publishers, which make money on
books.

I think this preface is like historical reference, how he wrote this book.
Also was told which topics was touched (Pascal, NASM, C, operating systems,
paradigms, etc.) and reworked during writing this book, who helped author and
other aspects of writing process.

## Introduction 2, methodical (Предисловие 2, методическое)

You can study programming only by yourself (maybe too categorical).

Learning programming by writing GUI applications (event-driven approach) is bad
idea.

Main tool of professional Unix user is **organized** command line
([[Command-line_interface_CLI|CLI]]).

Command line interface is more powerful and flexible than GUI, you can work with
it faster, less stress on hands, operations are easier to remember and so on.

You can write CLI program much easier than GUI program. This open new learning
opportunities and customization of OS (hobby programming).

Reasons why Unix is the most suitable OS for learning programming:

### Mathematical reason (Математическая причина)

Any [[Computer_programming|program]] is a record of ==algorithm== on some
programming language.
<!--SR:!2024-02-10,2,227-->

Что такое алгоритм (фундаментальный уровень, конструктив) на самом деле никто в
реальности не знает, поэтому и существуют теория вычислимости, теоретические
составляющее информатики и т.д.

On very fundamental level algorithm no-one knows what it is, that's why we have
[[Computational_problem|computational problems]], theoretical [[Computer_science]]

Algorithm make transformation from set of [[Word|words]] (chains of symbols over
some alphabet) into the same ==set==.
<!--SR:!2024-02-10,2,227-->

For this transformation can exist more than one algorithm (countless) or not
exist.

Algorithm is such a "thing" which read input word, do something **constructive**
and return another word.

The same way works many programs from Unix family. STDIN → transformations →
STDOUT (filters) and you can combine them using pipes.

### Psychological reason (Психологическая причина)

Programming can't be learned in traditional ways, it's more craft and need you
do a lot of practice which solve real world problems (not just write code to
learn some algorithm or theory). This is why pet projects are important, some
pet projects can be transformed into very useful projects (GNU/Linux,
open-source projects, etc.). And when you get real users of your software you
are established as programmer and can congratulate yourself.

### Ergonomic reason (Эргономическая причина)

You can't replace CLI usability with any graphical UI. And you must learn CLI
as soon as possible (I use it every day, but still not very effective).

### Pedagogical reason (Педагогическая причина)

Bad teachers can mislead a newbie student, for example start learning
programming with making GUI (focusing on UI, not a program logic), which is bad
idea. It can traumatize student mindset, and he will have many problems to
relearn programming in future (if he can do it) and think programming is boring
process (will not know what he lost).

### Language determines thinking (Язык определяет мышления)

Stating learning programming from complex programming languages (like Java, C++
and even C) is bad idea, newbie learners will have hard been understanding their
concepts and not really will learn programming.

Don't need to learn someone programming if you don't know what is in fundamental
level. And if you really want to learn someone find good proven education path.

Knowing [[Data_structure|data structures]] is important, if you're not
understanding difference (and in result where they can be used) between `vector`
and `list` in C++ and you won't understand it this is bad sign.

Mixing C and C++ is bad idea (maintainability).

C as first programming language is not suitable, you need to understand pointers
first and work with them (and it's hard).

Understanding code as "magic commands" is not good for good programmers, you
need to understand code on very low level to create truly effective programs.

In C you haven't procedures, only functions. Even assignment, increment are
arithmetic operations. And in C formally any actions (which is core of C) are
creating [[Side_effect|side effect]].

> Side effect can be appeared only when evaluating expression.
Side effect this is arbitrary change, which occurring when evaluating expression
and then can be somehow ==detected==.
<!--SR:!2024-02-10,2,227-->

Unlike C, C++ and functional programming languages, in [[Pascal]] there mostly
no side effects.

```c
while((dest++ = * src++));
```
Why you should not write code like this? To avoid side effects and make this
less cryptic.
Yes in C you can't avoid side effects anyway, but in other languages you can.

Writing in C is requirement, you need to understand how computer and operating
system is working on subconscious level to write really quality programs.
But to learn C, here are some requirements in understanding pointers and
recursion, which can help some another language ([[Pascal]]):

- language fully support pointers
- you can use language without pointers
- using pointers you can extend your capabilities (real necessity)

You learn not Pascal, you learn programming by using Pascal, and you can omit
some Pascal specific features.

Big role in understanding programming is taking [[Assembly_language|Assembly
language]]. You can never write programs in it (prefer C), but you must
understand how it works to understand what you are really doing, understand OS
kernel, how to interact with it, understand system calls, deeply understand data
structures, etc. And you need usually also learn it before C (but after Pascal).
You can use any assembly to learn, need to get understanding how to work with
registers and memory areas, understand stack frame, interrupts, etc.

So chain to learn programming is: Pascal → Assembly → C → C++ (special author's
vision), OS, I/O, processes, sockets, multithreading, mutex objects and
semaphores, critical sections, etc.

## Introduction 3, parting words (Предисловие 3, напутственное)

First who created things which works on their own (automatically) are watch
mechanics. XVIII century - Jaquet-Droz automata (most complex is penman,
containing 6000 details).

![Jaquet Droz The Writer Automaton From 1774 In Action](https://www.youtube.com/watch?v=ux2KW20nqHU)

He not only invented these automata machines, hi also spent a lot of time to
make required tools and details, so making some complex automation system was
combination of many different skills, finances and physical labor.

With programmable computers you can avoid material requirements to make
something useful and great. Program itself is finished product. Programming is
the most creative profession in engineering and technical professions.

Self-education and practice is requirement to be programmer.

Author also tells you need to use CLI to learn something from this book (I use
it daily), which give you abilities to write simple programs and find program
users.

Programming requires maximum intellectual tension and not everyone can withstand
it!

## Book structure (Структура книги и соглашения, используемые в тексте).

Here mostly general information about books and volumes.

---

# Part 1 (Часть 1)

# Preliminary information (Предварительные сведения)

## 1.1. Computer: what is it? (Компьютер: что это такое?)

Main [[Computer|computer]] function is ==to compute==. In our time millions
computing operations are wasted on information representation, then on actual
calculations (low efficiency).
<!--SR:!2024-02-10,2,227-->

### 1.1.1 Some history (1.1.1 Немного истории)

First computing machine is mechanical adding machine of Wilhelm Schickard, 1623.
But before it Leonardo da Vinci created some sketches of computing mechanism.

Most old working computing machine is Pascal's adding machine (pascaline), 1642.

![Additionner avec la réplique de la Pascaline 1645 - YouTube](https://www.youtube.com/watch?v=GX4RQK__fQc)
![How the Pascaline Works - YouTube](https://www.youtube.com/watch?v=3h71HAJWnVU)

Basic operation is addition, you input first number, then input second number,
and you will see sum.

To subtract number you need to use special method - nines' complement
arithmetic, which allows doing subtraction using summation.

Main steps to use it:
1. Input first number: `00500`
2. Calculate nines' complement from second number: `99866 = 100000 - 134`, here
  exist trick, you can use `100000 - 134 = 99999 - 134 + 1 = 99866`
3. Input nines' complement: `99866`
4. Calculate sum: `00500 + 99866 = 100366`
5. Subtract `100000` from sum and get result: `100366 - 100000 = 00366`

On pascaline it was little different (check video and description in book),
`99999 - x + y`.

In 1673 Gottfried Wilhelm Leibniz created calculating machine, with supported
sum, subtraction, multiplication and division.

General property of arithmometer is it can't do calculations without human
help, if you need to do more than one operation.

1823 Charles Babbage started working on difference engine, which can do
calculations using method of divided differences, but he failed to finish it.
George Scheutz created working difference engine in 1843, by using Babbage's
ideas.

But Babbage's main idea was analytical engine, which can do any calculations.
So he invited idea of programmable machines, data transferring from one data
storage into another and actions depending on analyze results (compare for
example).

Ada Lovelace - translated Babbage's analytical machine notes and added detailed
comments. In one of these comments she provided full set of commands to
calculate Bernoulli numbers on analytical machine - this set of commands is
considered as first in history computer program, and Ada Lovelace is often
called first programmer.

> The Analytical Engine might act upon other things besides number, were
> objects found whose mutual fundamental relations could be expressed by those
> of the abstract science of operations, and which should be also susceptible of
> adaptations to the action of the operating notation and mechanism of the
> engine...Supposing, for instance, that the fundamental relations of pitched
> sounds in the science of harmony and of musical composition were susceptible
> of such expression and adaptations, the engine might compose elaborate and
> scientific pieces of music of any degree of complexity or extent. [^1]\
> — <cite>Ada Lovelace</cite>

1938 Konrad Zuse created Z1, first full mechanical programmable computer
(electricity used only in motor). Z1 used [[Binary_number|binary]] logic.

Z2 used same mechanics but used electrical relay circuits for computational
operating. As Z1 it used perforated tape to execute program (instructions).
They can't do rewind tape and cycle operations was not supported.

Z3 used only relay circuits and used plastic tape to store program. This machine
supported cycle operations, but not conditional jumps.

Z4 was like Z3, but supported conditional jumps.

TODO: explain diode, triode, trigger
https://www.youtube.com/playlist?list=PLnw98JPyObn1i3yJ2Q7A62cl2eVXoIPP0

Vacuum tube next element to use in computers, it's glass bulb with electrodes
and electric vacuum inside. Using 2 triodes you can build trigger, which can be
used to store information and as base block to build logic gates.

One of first programmable computers was ENIAC, which used 17,468 vacuum tubes.
ENIAC was created by John Mauchly and J. Presper Eckert in 1946.

Colossus Mark I/II was a set of computers developed by British codebreakers in
the years 1943–1945 to help in the cryptanalysis of the Lorenz cipher. But they
are was destroyed after war (by Tommy Flowers, creator of these machines).

A vacuum-tube computer is a ==first==-generation computer, is a
computer that uses vacuum tubes for logic circuitry.
<!--SR:!2024-02-10,2,227-->

Distinguishing by generation only electronic computers, not mechanical ones.

First generation computers have one very important principle, principle of
==stored-program==.
<!--SR:!2024-02-10,2,227-->

Program stored in sequences of commands codes in the same memory same as data,
memory is interchangeable or uniform, commands codes don't differ fundamentally.
Machines which meet this requirement are called ==Von Neumann architecture
machines==.

Compilers and interpreters are programs which can execute other programs and
without Vonn Neumann architecture they can't exist (here used principle when
program can be interpreted as data and another program can execute it).

## References

[^1]: Lovelace, Ada; Menabrea, Luigi (1842). "Sketch of the Analytical Engine
    invented by Charles Babbage Esq". _[Scientific Memoirs][]_. Richard Taylor:
1. [Scientific Memoirs]: https://en.wikipedia.org/wiki/Scientific_Memoirs
"Scientific Memoirs"
