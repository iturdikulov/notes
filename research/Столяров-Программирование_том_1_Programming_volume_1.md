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
sr-due: 2024-01-26
sr-interval: 1
sr-ease: 130
directory:
  - ~/Computer/programming/Столяров-Программирование
---

# Программирование - Введение в профессию. Том 1.

## Introduction 1, philosophical (Предисловие 1, философское)

Author tell how he wrote this book, what difficulties he had and how
crowdfunding project helped him to write this book.

With crowdfunding project author can live and write book, without spending time
on other jobs. In total author spend 2200 hours (he tracks time somehow) to
write 3 volumes, books wasn't written from scratch (previous works and lectures
was used).

Author also doesn't like current situation with publishers, which make money on
books.

I think this preface is like historical reference, how he wrote this book. Also
was told which topics was touched ([[Pascal]], `NASM`, [[C]],
[[Operating_system|OS]], paradigms, etc.) and reworked during writing this book,
who helped author and other aspects of writing process.

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
<!--SR:!2024-02-13,1,207-->

On very fundamental level no-one knows what algorithm it is, that's why we have
[[Computational_problem|computational problems]], and theoretical
[[Computer_science|computer science]].

Algorithm make transformation from set of [[Word|words]] (chains of symbols over
some alphabet) into the same ==set==.
For this transformation can exist more than one algorithm (countless) or not
exist.
<!--SR:!2024-02-18,6,227-->

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

Is good idea to educate someone, when you haven't enough experience and when
you're even not trying to use proven learning materials?
?
Don't need to learn someone programming if you don't know what is in fundamental
level. And if you really want to learn someone find good proven education path.
Bad teachers can mislead a newbie student, for example start learning
programming with making GUI (focusing on UI, not a program logic), which is bad
idea. It can traumatize student mindset, and he will have many problems to
relearn programming in future (if he can do it) and think programming is boring
process (will not know what he lost).
<!--SR:!2024-02-13,1,162-->

### Language determines thinking (Язык определяет мышления)

Why need to learn form "simple" languages, which providing basic concepts and
not too complicated?
?
Stating learning programming from complex programming languages (like Java, C++
and even C) is bad idea, newbie learners will have hard been understanding their
concepts and not really will learn programming.

Knowing [[Data_structure|data structures]] is important, if you're not
understanding difference (and in result where they can be used) between `vector`
and `list` in C++ and you **won't understand it** this is bad sign.

Mixing C and C++ is bad idea (maintainability reason).

Why learning C as first programming language is not so good?
?
C as first programming language is not suitable, you need to understand pointers
first and work with them (and it's hard).
<!--SR:!2024-02-13,1,162-->

Why knowing language on fundamental level is important?
?
Understanding code as "magic commands" is not good for good programmers, you
need to understand code on very low level to create truly effective programs.
<!--SR:!2024-02-13,1,162-->

In C you haven't procedures, only functions. Even assignment, increment are
arithmetic operations. And in C formally any actions (which is core of C) are
creating [[Side_effect|side effect]].

> Side effect can be appeared only when evaluating expression.
Side effect this is arbitrary change, which occurring when evaluating expression
and then can be somehow ==detected==.
<!--SR:!2024-02-17,5,227-->

Unlike C, C++ and functional programming languages, in [[Pascal]] there mostly
no side effects.

```c
while((dest++ = * src++));
```
Why you should not write code like this? To avoid side effects and make this
less cryptic.
Yes in C you can't avoid side effects anyway, but in other languages you can.

When knowledge of C can be useful?
?
Writing in C is requirement, you need to understand how computer and operating
system is working on subconscious level to write really **quality programs**.

Learning C, here are some requirements in understanding pointers and
recursion, which can help some another language ([[Pascal]]):
- language fully support pointers
- you can use language without pointers
- using pointers you can extend your capabilities (real necessity)

Is deep learning Pascal (in details) is needed when you learn general
programming?
?
Not really. You learn not Pascal, you learn programming by using Pascal, and you
can omit some Pascal specific features.
<!--SR:!2024-02-14,2,182-->

Why need to learning Assembly language (at least basics)?
?
Big role in understanding programming is taking [[Assembly_language|Assembly
language]]. You can never write programs in it (prefer C is recommended), but
you must understand how it works to understand what you are really doing,
understand OS kernel, how to interact with it, understand system calls, deeply
understand data structures, etc. And you need usually also learn it before C
(but after Pascal). You can use any assembly to learn, need to get understanding
how to work with registers and memory areas, understand stack frame, interrupts,
etc.

So chain to learn programming is: ==Pascal → Assembly → C → C++== (special
author's vision), OS, I/O, processes, sockets, multithreading, mutex objects and
semaphores, critical sections, etc.

## Introduction 3, parting words (Предисловие 3, напутственное)

First who created things which works on their own (automatically) are watch
mechanics. XVIII century - Jaquet-Droz ==automata== (most complex is penman,
containing 6000 details).
<!--SR:!2024-02-14,2,182-->

![Jaquet Droz The Writer Automaton From 1774 In Action](https://www.youtube.com/watch?v=ux2KW20nqHU)
_Jaquet Droz The Writer Automaton From 1774 In Action_

He not only invented these automata machines, hi also spent a lot of time to
make required tools and details, so making some complex automation system was
combination of many different skills, finances and physical labor.

With programmable computers you can avoid ==material== requirements to make
something useful and great. Program itself is finished product. Programming is
the most creative profession in engineering and technical professions.
<!--SR:!2024-02-14,2,182-->

What is 2 main things which are important for programmer?
?
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
<!--SR:!2024-02-17,5,227-->

### 1.1.1 Some history (1.1.1 Немного истории)

First computing machine is mechanical ==calculating clock== of Wilhelm
Schickard, 1623. But before it Leonardo da Vinci created some sketches of
computing mechanism.

Most old working computing machine is Pascal's ==adding machine== (pascaline),
1642.
<!--SR:!2024-02-13,1,162-->

![Additionner avec la réplique de la Pascaline 1645 - YouTube](https://www.youtube.com/watch?v=GX4RQK__fQc)
![How the Pascaline Works - YouTube](https://www.youtube.com/watch?v=3h71HAJWnVU)

Basic operation is addition, you input first number, then input second number,
and you will see sum.

To subtract number you need to use special method - nines'
==complement arithmetic==, which allows doing subtraction using summation.

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
==sum, subtraction, multiplication and division==.

General property (disadvantage) of arithmometer is it can't do calculations
without ==human help==, if you need to do more than one operation.
<!--SR:!2024-02-14,2,182-->

1823 Charles Babbage started working on difference engine, which can do
calculations using method of ==divided differences==, but he failed to finish
it. George Scheutz created working difference engine in 1843, by using Babbage's
ideas.
<!--SR:!2024-02-13,1,162-->

But Babbage's main idea was ==analytical== engine, which can do any
calculations. So he invited idea of programmable machines, data transferring
from one data storage into another and actions depending on analyze results
(compare for example).

Ada Lovelace - translated Babbage's analytical machine notes and added detailed
comments. In one of these comments (Note G) she provided full set of commands to
calculate Bernoulli numbers on analytical machine - this set of commands is
considered as first in history computer program, and Ada Lovelace is often
called ==first programmer==.

Also, she predicted future of programmable computers.
> The Analytical Engine might act upon other things besides number, were
> objects found whose mutual fundamental relations could be expressed by those
> of the abstract science of operations, and which should be also susceptible of
> adaptations to the action of the operating notation and mechanism of the
> engine...Supposing, for instance, that the fundamental relations of pitched
> sounds in the science of harmony and of musical composition were susceptible
> of such expression and adaptations, the engine might compose elaborate and
> scientific pieces of music of any degree of complexity or extent. [^1]\
> — <cite>Ada Lovelace</cite>

First full mechanical programmable computer?
?
1938 Konrad Zuse created Z1, first full mechanical programmable computer
(electricity used only in motor). Z1 used [[Binary_number|binary]] logic.
<!--SR:!2024-02-14,2,182-->

Z2 used same mechanics but used electrical relay circuits for computational
operating. As Z1 it used perforated tape to execute program (instructions).
They can't do rewind tape and cycle operations was not supported.

Z3 used only relay circuits and used plastic tape to store program. This machine
supported cycle operations, but not conditional jumps.

Z4 was like Z3, but supported conditional jumps.

TODO: explain diode, triode, trigger
https://www.youtube.com/playlist?list=PLnw98JPyObn1i3yJ2Q7A62cl2eVXoIPP0

How to build trigger using vacuum tube?
?
Vacuum tube is next element after mechanics to use in computers, it's glass bulb
with electrodes and electric vacuum inside. Using 2 triodes you can build
trigger, which can be used to store information and as base block to build logic
gates.
<!--SR:!2024-02-14,2,182-->

One of first programmable computers (electrical) was ==ENIAC==, which used
17,468 vacuum tubes. It was created by John Mauchly and J. Presper Eckert in
1946.
<!--SR:!2024-02-15,3,202-->

Colossus Mark I/II was a set of computers developed by ==British== codebreakers
in the years 1943–1945 to help in the cryptanalysis of the Lorenz cipher. But
they are was destroyed after war (by Tommy Flowers, creator of these machines)
on Winston Churchill's order.
<!--SR:!2024-02-15,3,202-->


#### Computer generations

Distinguishing by generation only electronic computers, not mechanical ones.

A vacuum-tube computer is a ==first==-generation computer, is a
computer that uses vacuum tubes for logic circuitry.
<!--SR:!2024-02-17,5,227-->

First generation computers have one very important principle, principle of
==stored-program==.
<!--SR:!2024-02-17,5,227-->

Program stored in sequences of commands codes in the same memory same as data,
memory is interchangeable or uniform, commands codes don't differ fundamentally.
Machines which meet this requirement are called
==Von Neumann architecture machines (not invented by Vonn Neumann only)==.
<!--SR:!2024-02-14,2,182-->

Compilers and interpreters are programs which can ==execute other programs== and
without Vonn Neumann architecture they can't exist (here used principle when
program can be interpreted as data and another program can execute it).
<!--SR:!2024-02-14,2,182-->

What useful computer illness is?
?
If you want to be programmer you need to play with computers, this give you
infinite motivation to learn programming and more importantly it's fun!
<!--SR:!2024-02-14,2,182-->

Storing program in memory as instructions, saving a lot of time to change
programs, you can load another one from external storage (tapes or cards) and
storing data and program in same memory allowing interpreting data as
==another program== (allows creating compilers, OS, etc.).

One of first computer to deal not only with calculations.
?
1951, in Great Britain was developed one of first computer to deal not only with
calculations, LEO I, first application is Lyons Electronic Office(J. Lyons &
Co.).
> The LEO (Lyons Electronic Office) was a series of early computer systems
> created by J. Lyons and Co. The first in the series, the LEO I, was the first
> computer used for commercial business applications.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/LEO_\(computer\))</cite>
Quotes of Ada Lovelace start become prophetic, object of computer programs can
be information and mathematical field is not only field where computer can be
used.
<!--SR:!2024-02-14,2,182-->

Next revolution after vacuum tubes was inventing ==transistor== (invented in
1947 by physicists John Bardeen, Walter Brattain, and William Shockley at Bell
Labs), which much smaller, cheaper and working very similar (schematically) to
vacuum triode.

TODO: review this after lamps section (above)
- A bipolar junction transistor (BJT) has terminals labeled base, collector and
emitter. A small current at the base terminal, flowing between the base and the
emitter, can control or switch a much larger current between the collector and
emitter.

- A field-effect transistor (FET) has terminals labeled gate, source and drain.
A voltage at the gate can control a current between source and drain.

In analog electronics transistors and vacuum triodes used to signal
amplification. TODO: explain effect.

In digital circuits more important is ==control== effect of transistors than
amplification, two transistors allowing you to build trigger (the current
flowing through one transistor closes the second and vice versa).
TODO: check https://en.wikipedia.org/wiki/Flip-flop_(electronics)
<!--SR:!2024-02-16,4,185-->

Magnetic-core memory is second serious invention, which determineted the shift
of computer generation (with transistors).

> Magnetic-core memory was the predominant form of random-access computer memory
> for 20 years between about 1955 and 1975. Such memory is often just called
> core memory, or, informally, core.\
>
> Core memory uses toroids (rings) of a hard magnetic material (usually a
> semi-hard ferrite). Each core stores one bit of information.
> — <cite>[Magnetic-core memory - Wikipedia](https://en.wikipedia.org/wiki/Magnetic-core_memory)</cite>

Computers which used solid electronic components (mainly transistors) called
==second==-generation computers. They provide more possibilities, consume less
electricity, are much smaller and mainly have more memory (since use different
memory type).

They are also much cheaper (became after some time) and can be used for
commercial purposes.

In 1953 created first full transistor machines and in 1954 IBM created first
commercial computer - IBM 608 Transistor Calculator.

Next third-generation computers used ==integrated circuits (IC's)== and at this
point computers started producing massively, size was like small closet and
aviability of computers was much higher.

In 1971 Intel created one of first microprocessor (instead multiple IC's used
only one for microprocessor) - Intel 4004, which was aviable on market.

> The World's First Microprocessor was designed and developed from 1968-1970.
> This site describes the design work for a MOS-LSI, highly integrated,
> microprocessor chip set designed starting June 1968 and completed by June
> 1970. This highly integrated computer chip set was designed for the US Navy
> F14A “TomCat” fighter jet by Mr. Steve Geller and Mr. Ray Holt as part of a
> design team while working for Garrett AiResearch Corp under contract from
> Grumman Aircraft, the prime contractor for the US Navy. The MOS-LSI chips,
> called the MP944, were manufactured by American Microsystems, Inc of Santa
> Clara, California.\
> — <cite>[First Microprocessor](https://firstmicroprocessor.com/)</cite>

Microprocessors are start history of ==fourth==-generation of computers, which
are current generation of computers.
<!--SR:!2024-02-18,6,205-->

What information modern computers can process?
?
Modern computers used to processing any information, which possible to write
and read in digital form (databases, text, sound, images, videos, tactile
information, etc.).

Supercomputers used for ==computationally intensive tasks==, mainly scientific
calculations, simulations, etc.

In mathematics, a function is a mathematical object that produces an
==output, when given an input== (which could be a number, a vector, or
**anything** that can exist inside a set of things).

Do computers compute any information?
?
Yes. They can compute numbers and any other information. Computers can process
data (information) in specific determined form (binary code, chains of symbols
in some alphabet or "text"). In this approach any information transformations
are **functions** from one set of text into another set of text (sets have equal
alphabet). And any information processing is function computing.
<!--SR:!2024-02-13,1,162-->

### 1.1.2 Processor, memory, bus (Процессор, память, шина)

In [[Computer_architecture|computer architecture]] system bus (historically also
called data highway or databus) is a communication system that
==transfers data== between components inside a computer, or between computers.
<!--SR:!2024-02-13,1,162-->

Physically bus is many (tens) ==parallel wires==.

Main 3 components which connected to bus (computing) are:
?
To the bus connecting central processor unit (CPU), random access memory (RAM)
and controllers.

Main controllers work is to control computer ==devices==.
<!--SR:!2024-02-14,2,182-->

CPU through ==bus== interact with other computer components.

RAM and controllers is designed to ignore any information, which go through bus,
except ==addressed== especially to specific RAM data bank or controller.
<!--SR:!2024-02-14,2,182-->

Three main parts of system bus:
?
> A system bus is a single computer bus that connects the major components of a
> computer system, combining the functions of a **data bus** to carry
> information, an **address bus** to determine where it should be sent or read
> from, and a **control bus** to determine its operation.\
> — <cite>[System bus - Wikipedia](https://en.wikipedia.org/wiki/System_bus)</cite>
![[img/System_bus.excalidraw]]

Here my notes about how RAM is working:
[[research/How_does_Computer_Memory_Work]]

From schematic perspective each wire can be in 2 positions, logical ==1 or 0==.
<!--SR:!2024-02-14,2,182-->

Combinations of 0 and 1 make an address, and all devices except CPU working with
bus only when address from bus ==equal to their address==.
<!--SR:!2024-02-14,2,182-->

Memory (RAM) consist of identical memory addressable locations, which constitute
an addressable space. Which is $$2^{N}$$ addresses, where N is
==number of wires or bus size==.

Modern hardware operates by using virtual addressing memory (virtual memory),
it's different from physical addressing.

Is data is transferring in data bus in parallel?
?
Through data bus memory values usually transferred in parallel, for example we
can read/write 32 bits of information from RAM in parallel (utilize multiple
memory locations).
<!--SR:!2024-02-14,2,182-->

DRAM can't work without ==electricity (power)== and data lost without it (not
completely, especially if RAM will be frozen at -60°С [^2]).
<!--SR:!2024-02-14,2,182-->

Difference between persistent memory and volatile memory?
?
Opposite to Volatile memory (SRAM - CPU cache/registers, DRAM), persistent
memory (SSD/HDD) is differnt, it can store data long time, without power. CPU
can't work directly with it, required to use special controllers and computer
programs (drives).
<!--SR:!2024-02-13,1,162-->

Does CPU differentiate between persistent and volatile memory locations?
?
The CPU does not differentiate between persistent and volatile memory locations.
The CPU interacts with different levels of memory hierarchy, which include both
volatile and persistent memory components.
<!--SR:!2024-02-14,2,182-->

Some memory blocks can be physically read-only, they're not supporting direct
CPU writing operations, usually need to use some interface, for example I²C
(Inter-Integrated Circuit) and SPI (Serial Peripheral Interface) for EEPROM
(electrically erasable programmable read-only memory). Main advantage is
==persistent== memory.
<!--SR:!2024-02-14,2,182-->

Usually EEPROM used to store special BIOS/UEFI (Unified Extensible Firmware
Interface) program, which used to ==prepare (initialize) and test computer==
hardware. This program is starting to execute when you power on computer, main
task of it find where to boot operating system (OS), load it and give it
control. All other tasks are concern of OS (run subprograms, virtual memory
management, hardware access (internal/external) through drivers, etc.).
<!--SR:!2024-02-14,2,182-->

What is used to organize information storing (on storage for humans)?
?
Computer files is one of method to organize information (OS using filesystem
organize it), usually computer files has filenames (which humans can understand).

CPU is electrical scheme (in microprocessor form), the only work of it is to
perform ==simple steps, instructions==.

Main work with information (for CPU) carried out with ==registers==, each of
them can store up to tens of bits.
<!--SR:!2024-02-14,2,182-->

Processor can do following operations (==instruction set==):
- read and write memory locations
- arithmetic operations (`+`, `-`, `*`, `/`).
- copy data between registers
- service actions (for example jump to location and code execution)

### 1.1.3 Operations principles of Central Processor (Принципы работы центрального процессора)

![[img/computer_system.excalidraw]]

Each elementary instruction, which CPU is performing has operation code or
==machine code==.
<!--SR:!2024-02-14,2,182-->

## References

[^1]: Lovelace, Ada; Menabrea, Luigi (1842). "Sketch of the Analytical Engine
    invented by Charles Babbage Esq". _[Scientific Memoirs][]_. Richard Taylor:
1. [Scientific Memoirs]: https://en.wikipedia.org/wiki/Scientific_Memoirs
"Scientific Memoirs"
[^2]: Section 7. [Secure Deletion of Data from Magnetic and Solid-State Memory](https://www.cs.auckland.ac.nz/~pgut001/pubs/secure_del.html)
