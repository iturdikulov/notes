---
date: 2023-06-05T00:00+03:00
tags:
  - blog
  - base
sr-due: 2024-02-13
sr-interval: 19
sr-ease: 202
external:
  - https://en.wikipedia.org/wiki/Glossary_of_computer_science
---

# Glossary of [[computer_science]]

You can check also this resource: [Dictionary of Algorithms and Data
Structures](https://xlinux.nist.gov/dads/)

## A

### Abstract data type (ADT)
&#10;<br>
A mathematical model for data types in which
a data type is defined by its behavior (semantics) from the point of view of a
user of the data, specifically in terms of possible values, possible operations
on data of this type, and the behavior of these operations. This contrasts with
data structures, which are concrete representations of data from the point of
view of an implementer rather than a user. \ [[ADT]] it's probably any type of
[[data_type]]. It's mathematical model for data types. AST data type is defined
by its behavior (semantic) from the point of view of a user of the data (not
concrete implementation, I think it's abstract implementation). This model
defined in terms of: possible values, possible operations on data of this type,
and the behavior of these operations.

### Abstract method
&#10;<br>
abstract method is like placeholder for method, it has only a signature and no
implementation body. Usually used to indicate that a subclass must provide an
implementation of the method.
```java
// Abstract methods are used to specify interfaces in some computer languages.
class Animal {
    public abstract void animalSound();
}

class Pig extends Animal {
    public void animalSound() {
        System.out.println("The pig says: wee wee");
    }
}
```
One with only a signature and no implementation body. It is often used to
specify that a subclass must provide an implementation of the method. Abstract
methods are used to specify interfaces in some computer languages. [1]

### Abstraction
&#10;<br>
1. In software engineering and computer science, the process of removing
   physical, spatial, or temporal details [2] or attributes in the study of
   objects or systems in order to more closely attend to other details of
   interest; [3] it is also very similar in nature to the process of
   generalization.
2. The result of this process: an abstract concept-object created by keeping
   common features or attributes to various concrete objects or systems of
   study. [3]

### Agent architecture
&#10;<br>
A blueprint for software agents and intelligent control systems depicting the
arrangement of components. The architectures implemented by intelligent agents
are referred to as cognitive architectures. [4]

### Agent-based model (ABM)
&#10;<br>
A class of computational models for simulating the actions and interactions of
autonomous agents (both individual or collective entities such as
organizations or groups) with a view to assessing their effects on the system
as a whole. It combines elements of game theory, complex systems, emergence,
computational sociology, multi-agent systems, and evolutionary programming.
Monte Carlo methods are used to introduce randomness.

### Aggregate function
&#10;<br>
In database management, a function in which the values of multiple rows are
grouped together to form a single value of more significant meaning or
measurement, such as a sum, count, or max.

### Agile software development
&#10;<br>
An approach to software development under which requirements and solutions
evolve through the collaborative effort of self-organizing and
cross-functional teams and their customer(s)/end user(s). [5] It advocates
adaptive planning, evolutionary development, early delivery, and continual
improvement, and it encourages rapid and flexible response to change. [6]

### Algorithm
&#10;<br>
An unambiguous specification of how to solve a class of problems. Algorithms
can perform calculation, data processing, and automated reasoning tasks. They
are ubiquitous in computing technologies.

### Algorithm design
&#10;<br>
A method or mathematical process for problem-solving and for engineering
algorithms. The design of algorithms is part of many solution theories of
operation research, such as dynamic programming and divide-and-conquer.
Techniques for designing and implementing algorithm designs are also called
algorithm design patterns, [7] such as the template method pattern and
decorator pattern.

### Algorithmic efficiency
&#10;<br>
A property of an algorithm which relates to the number of computational
resources used by the algorithm. An algorithm must be analyzed to determine
its resource usage, and the efficiency of an algorithm can be measured based
on usage of different resources. Algorithmic efficiency can be thought of as
analogous to engineering productivity for a repeating or continuous process.

### American Standard Code for Information Interchange (ASCII)
&#10;<br>
A character encoding standard for electronic communications. ASCII codes
represent text in computers, telecommunications equipment, and other devices.
Most modern character-encoding schemes are based on ASCII, although they
support many additional characters.

### Application programming interface (API)
&#10;<br>
A set of subroutine definitions, communication protocols, and tools for
building software. In general terms, it is a set of clearly defined methods of
communication among various components. A good API makes it easier to develop
a computer program by providing all the building blocks, which are then put
together by the programmer.

### Application software
&#10;<br>
Computer software designed to perform a group of coordinated functions, tasks,
or activities for the benefit of the user. Common examples of applications
include word processors, spreadsheets, accounting applications, web browsers,
media players, aeronautical flight simulators, console games, and photo
editors. This contrasts with system software, which is mainly involved with
managing the computer's most basic running operations, often without direct
input from the user. The collective noun application software refers to all
applications collectively. [8]

### Array data structure
&#10;<br>
A data structure consisting of a collection of elements (values or variables),
each identified by at least one array index or key. An array is stored such
that the position of each element can be computed from its index tuple by a
mathematical formula. [9] [10] [11] The simplest type of data structure is a
linear array, also called a one-dimensional array.

### Artifact
&#10;<br>
One of many kinds of tangible by-products produced during the development of
software. Some artifacts (e.g. use cases, class diagrams, and other Unified
Modeling Language (UML) models, requirements, and design documents) help
describe the function, architecture, and design of software. Other artifacts
are concerned with the process of development itself—such as project plans,
business cases, and risk assessments.

### Artificial intelligence (AI)
&#10;<br>
Intelligence demonstrated by machines, in contrast to the natural intelligence
displayed by humans and other animals. In computer science, AI research is
defined as the study of "intelligent agents": devices capable of perceiving
their environment and taking actions that maximize the chance of successfully
achieving their goals. [12] Colloquially, the term "artificial intelligence"
is applied when a machine mimics "cognitive" functions that humans associate
with other human minds, such as "learning" and "problem solving". [13]

### ASCII
&#10;<br>
See American Standard Code for Information Interchange.

### Assertion
&#10;<br>
In computer programming, a statement that a predicate (Boolean-valued
function, i.e. a true–false expression) is always true at that point in code
execution. It can help a programmer read the code, help a compiler compile it,
or help the program detect its own defects. For the latter, some programs
check assertions by actually evaluating the predicate as they run and if it is
not in fact true – an assertion failure – the program considers itself to be
broken and typically deliberately crashes or throws an assertion failure
exception.

### Associative array
&#10;<br>
An associative array, map, symbol table, or dictionary is an abstract data
type composed of a collection of (key, value) pairs, such that each possible
key appears at most once in the collection.

Operations associated with this data type allow: [14] [15] the addition of a
pair to the collection the removal of a pair from the collection the
modification of an existing pair the lookup of a value associated with a
particular key

### Automata theory
&#10;<br>
The study of abstract machines and automata, as well as the computational
problems that can be solved using them. It is a theory in theoretical computer
science and discrete mathematics (a subject of study in both mathematics and
computer science).

### Automated reasoning
&#10;<br>
An area of computer science and mathematical logic dedicated to understanding
different aspects of reasoning. The study of automated reasoning helps produce
computer programs that allow computers to reason completely, or nearly
completely, automatically. Although automated reasoning is considered a
sub-field of artificial intelligence, it also has connections with theoretical
computer science, and even philosophy.

## B

### Bandwidth
&#10;<br>
The maximum rate of data transfer across a given path. Bandwidth may be
characterized as network bandwidth, [16] data bandwidth, [17] or digital
bandwidth. [18] [19]

### Bayesian programming
&#10;<br>
A formalism and a methodology for having a technique to specify probabilistic
models and solve problems when less than the necessary information is
available.

### Benchmark
&#10;<br>
The act of running a computer program, a set of programs, or other operations,
in order to assess the relative performance of an object, normally by running
a number of standard tests and trials against it. [20] The term benchmark is
also commonly utilized for the purposes of elaborately designed benchmarking
programs themselves.

### Best, worst and average case
&#10;<br>
Expressions of what the resource usage is at least, at most, and on average,
respectively, for a given algorithm. Usually the resource being considered is
running time, i.e. time complexity, but it could also be memory or some other
resource. Best case is the function which performs the minimum number of steps
on input data of n elements; worst case is the function which performs the
maximum number of steps on input data of size n; average case is the function
which performs an average number of steps on input data of n elements.

### Big data
&#10;<br>
A term used to refer to data sets that are too large or complex for
traditional data-processing application software to adequately deal with. Data
with many cases (rows) offer greater statistical power, while data with higher
complexity (more attributes or columns) may lead to a higher false discovery
rate. [21]

### Big O notation
&#10;<br>
A mathematical notation that describes the limiting behavior of a function
when the argument tends towards a particular value or infinity. It is a member
of a family of notations invented by Paul Bachmann, [22] Edmund Landau, [23]
and others, collectively called Bachmann–Landau notation or asymptotic
notation.

### Binary number
&#10;<br>
In mathematics and digital electronics, a number expressed in the base-2
numeral system or binary numeral system, which uses only two symbols:
typically 0 (zero) and 1 (one).

### Binary search algorithm
&#10;<br>
A search algorithm that finds the position of a target value within a sorted
array. [27]

### Binary tree
&#10;<br>
A tree data structure in which each node has at most two children, which are
referred to as the left child and the right child. A recursive definition
using just set theory notions is that a (non-empty) binary tree is a tuple (L,
S, R), where L and R are binary trees or the empty set and S is a singleton
set. [28] Some authors allow the binary tree to be the empty set as well. [29]

### Bioinformatics
&#10;<br>
An interdisciplinary field that combines biology, computer science,
information engineering, mathematics, and statistics to develop methods and
software tools for analyzing and interpreting biological data. Bioinformatics
is widely used for in silico analyses of biological queries using mathematical
and statistical techniques.

### Bit
&#10;<br>
A basic unit of information used in computing and digital communications; a
portmanteau of binary digit. A binary digit can have one of two possible
values, and may be physically represented with a two-state device. These state
values are most commonly represented as either a 0or1. [30]

### Bit rate (R)
&#10;<br>
In telecommunications and computing, the number of bits that are conveyed or
processed per unit of time. [31]

### Blacklist
&#10;<br>
In computing, a basic access control mechanism that allows through all
elements (email addresses, users, passwords, URLs, IP addresses, domain names,
file hashes, etc.), except those explicitly mentioned in a list of prohibited
elements. Those items on the list are denied access. The opposite is a
whitelist, which means only items on the list are allowed through whatever
gate is being used while all other elements are blocked. A greylist contains
items that are temporarily blocked (or temporarily allowed) until an
additional step is performed.

### BMP file format
&#10;<br>
A raster graphics image file format used to store bitmap digital images
independently of the display device (such as a graphics adapter), used
especially on Microsoft Windows [32] and OS/2 [33] operating systems.

### Boolean data type
&#10;<br>
A data type that has one of two possible values (usually denoted true and
false), intended to represent the two truth values of logic and Boolean
algebra. It is named after George Boole, who first defined an algebraic system
of logic in the mid-19th century. The Boolean data type is primarily
associated with conditional statements, which allow different actions by
changing control flow depending on whether a programmer-specified Boolean
condition evaluates to true or false. It is a special case of a more general
logical data type (see probabilistic logic)—i.e. logic need not always be
Boolean.

### Boolean expression
&#10;<br>
An expression used in a programming language that returns a Boolean value when
evaluated, that is one of true or false. A Boolean expression may be composed
of a combination of the Boolean constants true or false, Boolean-typed
variables, Boolean-valued operators, and Boolean-valued functions. [34]

### Boolean algebra
&#10;<br>
In mathematics and mathematical logic, the branch of algebra in which the
values of the variables are the truth values true and false, usually denoted 1
and 0, respectively. Contrary to elementary algebra, where the values of the
variables are numbers and the prime operations are addition and
multiplication, the main operations of Boolean algebra are the conjunction and
(denoted as ∧), the disjunction or (denoted as ∨), and the negation not
(denoted as ¬). It is thus a formalism for describing logical relations in the
same way that elementary algebra describes numeric relations.

### Byte
&#10;<br>
A unit of digital information that most commonly consists of eight bits,
representing a binary number. Historically, the byte was the number of bits
used to encode a single character of text in a computer [35] [36] and for this
reason it is the smallest addressable unit of memory in many computer
architectures.

### Booting
&#10;<br>
The procedures implemented in starting up a computer or
computer appliance until it can be used. It can be initiated by hardware such as
a button press or by a software command. After the power is switched on, the
computer is relatively dumb and can read only part of its storage called
read-only memory. There, a small program is stored called firmware. It does
power-on self-tests and, most importantly, allows access to other types of
memory like a hard disk and main memory. The firmware loads bigger programs into
the computer's main memory and runs it. Check also [[boot_sector]].

## C

### Callback
&#10;<br>
Any executable code that is passed as an argument to other code that is
expected to "call back" (execute) the argument at a given time. This execution
may be immediate, as in a synchronous callback, or it might happen at a later
time, as in an asynchronous callback.

### Central processing unit (CPU)
&#10;<br>
The electronic circuitry within a computer that carries out the instructions
of a computer program by performing the basic arithmetic, logic, controlling,
and input/output (I/O) operations specified by the instructions. The computer
industry has used the term "central processing unit" at least since the early
1960s. [38] Traditionally, the term "CPU" refers to a processor, more
specifically to its processing unit and control unit (CU), distinguishing
these core elements of a computer from external components such as main memory
and I/O circuitry. [39]

### Character
&#10;<br>
A unit of information that roughly corresponds to a grapheme, grapheme-like
unit, or symbol, such as in an alphabet or syllabary in the written form of a
natural language. [40]

### Cipher
&#10;<br>
In cryptography, an algorithm for performing encryption or decryption—a series
of well-defined steps that can be followed as a procedure.

### Class
&#10;<br>
In object-oriented programming, an extensible program-code-template for
creating objects, providing initial values for state (member variables) and
implementations of behavior (member functions or methods). [41] [42] In many
languages, the class name is used as the name for the class (the template
itself), the name for the default constructor of the class (a subroutine that
creates objects), and as the type of objects generated by instantiating the
class; these distinct concepts are easily conflated. [42]

### Class-based programming
&#10;<br>
A style of object-oriented programming (OOP) in which inheritance occurs via
defining "classes" of objects, instead of via the objects alone (compare
prototype-based programming).

### Client
&#10;<br>
A piece of computer hardware or software that accesses a service made
available by a server. The server is often (but not always) on another
computer system, in which case the client accesses the service by way of a
network. [43] The term applies to the role that programs or devices play in
the client–server model.

### Cleanroom software engineering
&#10;<br>
A software development process intended to produce software with a certifiable
level of reliability. The cleanroom process was originally developed by Harlan
Mills and several of his colleagues including Alan Hevner at IBM. [44] The
focus of the cleanroom process is on defect prevention, rather than defect
removal.

### Closure
&#10;<br>
A technique for implementing lexically scoped name binding in a language with
first-class functions. Operationally, a closure is a record storing a function
[a] together with an environment. [45]

### Cloud computing
&#10;<br>
Shared pools of configurable computer system resources and higher-level
services that can be rapidly provisioned with minimal management effort, often
over the Internet. Cloud computing relies on sharing of resources to achieve
coherence and economies of scale, similar to a public utility.

### Code library
&#10;<br>
A collection of non-volatile resources used by computer programs, often for
software development. These may include configuration data, documentation,
help data, message templates, pre-written code and subroutines, classes,
values or type specifications. In IBM's OS/360 and its successors they are
referred to as partitioned data sets.

### Coding
&#10;<br>
Computer programming is the process of designing and building an executable
computer program for accomplishing a specific computing task. Programming
involves tasks such as analysis, generating algorithms, profiling algorithms'
accuracy and resource consumption, and the implementation of algorithms in a
chosen programming language (commonly referred to as coding [46] [47]). The
source code of a program is written in one or more programming languages. The
purpose of programming is to find a sequence of instructions that will
automate the performance of a task for solving a given problem. The process of
programming thus often requires expertise in several different subjects,
including knowledge of the application domain, specialized algorithms, and
formal logic.

### Coding theory
&#10;<br>
The study of the properties of codes and their respective fitness for specific
applications. Codes are used for data compression, cryptography, error
detection and correction, data transmission and data storage. Codes are
studied by various scientific disciplines—such as information theory,
electrical engineering, mathematics, linguistics, and computer science—for the
purpose of designing efficient and reliable data transmission methods. This
typically involves the removal of redundancy and the correction or detection
of errors in the transmitted data.

### Cognitive science
&#10;<br>
The interdisciplinary, scientific study of the mind and its processes. [48] It
examines the nature, the tasks, and the functions of cognition (in a broad
sense). Cognitive scientists study intelligence and behavior, with a focus on
how nervous systems represent, process, and transform information. Mental
faculties of concern to cognitive scientists include language, perception,
memory, attention, reasoning, and emotion; to understand these faculties,
cognitive scientists borrow from fields such as linguistics, psychology,
artificial intelligence, philosophy, neuroscience, and anthropology. [49]

### Collection
&#10;<br>
A collection or container is a grouping of some variable number of data items
(possibly zero) that have some shared significance to the problem being solved
and need to be operated upon together in some controlled fashion. Generally,
the data items will be of the same type or, in languages supporting
inheritance, derived from some common ancestor type. A collection is a concept
applicable to abstract data types, and does not prescribe a specific
implementation as a concrete data structure, though often there is a
conventional choice (see Container for type theory discussion).

### Comma-separated values (CSV)
&#10;<br>
A delimited text file that uses a comma to separate values. A CSV file stores
tabular data (numbers and text) in plain text. Each line of the file is a data
record. Each record consists of one or more fields, separated by commas. The
use of the comma as a field separator is the source of the name for this file
format.

### Compiler
&#10;<br>
A computer program that transforms computer code written in one programming
language (the source language) into another programming language (the target
language). Compilers are a type of translator that support digital devices,
primarily computers. The name compiler is primarily used for programs that
translate source code from a high-level programming language to a lower-level
language (e.g. assembly language, object code, or machine code) to create an
executable program. [50]

### Computability theory
&#10;<br>
also known as recursion theory, is a branch of mathematical logic, of computer
science, and of the theory of computation that originated in the 1930s with
the study of computable functions and Turing degrees. The field has since
expanded to include the study of generalized computability and definability.
In these areas, recursion theory overlaps with proof theory and effective
descriptive set theory.

### Computation
&#10;<br>
Any type of calculation [51] [52] that includes both arithmetical and
non-arithmetical steps and follows a well-defined model, e.g. an algorithm.
The study of computation is paramount to the discipline of computer science.

### Computational biology
&#10;<br>
Involves the development and application of data-analytical and theoretical
methods, mathematical modelling and computational simulation techniques to the
study of biological, ecological, behavioural, and social systems. [53] The
field is broadly defined and includes foundations in biology, applied
mathematics, statistics, biochemistry, chemistry, biophysics, molecular
biology, genetics, genomics, computer science, and evolution. [54]
Computational biology is different from biological computing, which is a
subfield of computer science and computer engineering using bioengineering and
biology to build computers.

### Computational chemistry
&#10;<br>
A branch of chemistry that uses computer simulation to assist in solving
chemical problems. It uses methods of theoretical chemistry, incorporated into
efficient computer programs, to calculate the structures and properties of
molecules and solids.

### Computational complexity theory
&#10;<br>
A subfield of computational science which focuses on classifying computational
problems according to their inherent difficulty, and relating these classes to
each other. A computational problem is a task solved by a computer. A
computation problem is solvable by mechanical application of mathematical
steps, such as an algorithm.

### Computational model
&#10;<br>
A mathematical model in computational science that requires extensive
computational resources to study the behavior of a complex system by computer
simulation. [55]

### Computational neuroscience
&#10;<br>
A branch of neuroscience which employs mathematical models, theoretical
analysis, and abstractions of the brain to understand the principles that
govern the development, structure, physiology, and cognitive abilities of the
nervous system. [56] [57] [58] [59]

### Computational physics
&#10;<br>
Is the study and implementation of numerical analysis to solve problems in
physics for which a quantitative theory already exists. [60] Historically,
computational physics was the first application of modern computers in
science, and is now a subset of computational science.

### Computational science
&#10;<br>
An interdisciplinary field that uses advanced computing capabilities to
understand and solve complex problems. It is an area of science which spans
many disciplines, but at its core it involves the development of computer
models and simulations to understand complex natural systems.

### Computational steering
&#10;<br>
Is the practice of manually intervening with an otherwise autonomous
computational process, to change its outcome.

### Computer
&#10;<br>
A device that can be instructed to carry out sequences of arithmetic or
logical operations automatically via computer programming. Modern computers
have the ability to follow generalized sets of operations, called programs.
These programs enable computers to perform an extremely wide range of tasks.

### Computer architecture
&#10;<br>
A set of rules and methods that describe the functionality, organization, and
implementation of computer systems. Some definitions of architecture define it
as describing the capabilities and programming model of a computer but not a
particular implementation. [61] In other definitions computer architecture
involves instruction set architecture design, microarchitecture design, logic
design, and implementation. [62]

### Computer data storage
&#10;<br>
A technology consisting of computer components and recording media that are
used to retain digital data. Data storage is a core function and fundamental
component of all modern computer systems. [63]: 15–16

### Computer ethics
&#10;<br>
A part of practical philosophy concerned with how computing professionals
should make decisions regarding professional and social conduct. [64]

### Computer graphics
&#10;<br>
Pictures and films created using computers. Usually, the term refers to
computer-generated image data created with the help of specialized graphical
hardware and software. It is a vast and recently developed area of computer
science.

### Computer network
&#10;<br>
A digital telecommunications network which allows nodes to share resources. In
computer networks, computing devices exchange data with each other using
connections (data links) between nodes. These data links are established over
cable media such as wires or optic cables, or wireless media such as Wi-Fi.

### Computer program
&#10;<br>
Is a collection of instructions [65] that can be executed by a computer to
perform a specific task.

### Computer programming
&#10;<br>
The process of designing and building an executable computer program for
accomplishing a specific computing task. Programming involves tasks such as
analysis, generating algorithms, profiling algorithms' accuracy and resource
consumption, and the implementation of algorithms in a chosen programming
language (commonly referred to as coding [46] [47]). The source code of a
program is written in one or more programming languages. The purpose of
programming is to find a sequence of instructions that will automate the
performance of a task for solving a given problem. The process of programming
thus often requires expertise in several different subjects, including
knowledge of the application domain, specialized algorithms, and formal logic.

### Computer science
&#10;<br>
The theory, experimentation, and engineering that form the basis for the
design and use of computers. It involves the study of algorithms that process,
store, and communicate digital information. A computer scientist specializes
in the theory of computation and the design of computational systems. [66]

### Computer scientist
&#10;<br>
A person who has acquired the knowledge of computer science, the study of the
theoretical foundations of information and computation and their application.
[67]

### Computer security
&#10;<br>
The protection of computer systems from theft or damage to their hardware,
software, or electronic data, as well as from disruption or misdirection of
the services they provide.

### Computer vision
&#10;<br>
An interdisciplinary scientific field that deals with how computers can be
made to gain high-level understanding from digital images or videos. From the
perspective of engineering, it seeks to automate tasks that the human visual
system can do. [69] [70] [71]

### Computing
&#10;<br>
Is any goal-oriented activity requiring, benefiting from, or creating
computing machinery. It includes study of algorithmic processes and
development of both hardware and software. It has scientific, engineering,
mathematical, technological and social aspects. Major computing fields include
computer engineering, computer science, cybersecurity, data science,
information systems, information technology and software engineering. [72]

### Concatenation
&#10;<br>
In formal language theory and computer programming, string concatenation is
the operation of joining character strings end-to-end. For example, the
concatenation of "snow" and "ball" is "snowball". In certain formalisations of
concatenation theory, also called string theory, string concatenation is a
primitive notion.

### Concurrency
&#10;<br>
The ability of different parts or units of a program, algorithm, or problem to
be executed out-of-order or in partial order, without affecting the final
outcome. This allows for parallel execution of the concurrent units, which can
significantly improve overall speed of the execution in multi-processor and
multi-core systems. In more technical terms, concurrency refers to the
decomposability property of a program, algorithm, or problem into
order-independent or partially-ordered components or units. [73]

### Conditional
&#10;<br>
A feature of a programming language which performs different computations or
actions depending on whether a programmer-specified Boolean condition
evaluates to true or false. Apart from the case of branch predication, this is
always achieved by selectively altering the control flow based on some
condition.

### Container
&#10;<br>
Is a class, a data structure, [74] [75] or an abstract data type (ADT) whose
instances are collections of other objects. In other words, they store objects
in an organized way that follows specific access rules. The size of the
container depends on the number of objects (elements) it contains. Underlying
(inherited) implementations of various container types may vary in size and
complexity, and provide flexibility in choosing the right implementation for
any given scenario.

### Continuation-passing style (CPS)
&#10;<br>
A style of functional programming in which control is passed explicitly in the
form of a continuation. This is contrasted with direct style, which is the
usual style of programming. Gerald Jay Sussman and Guy L. Steele, Jr. coined
the phrase in AI Memo 349 (1975), which sets out the first version of the
Scheme programming language. [76] [77]

### Control flow
&#10;<br>
The order in which individual statements, instructions or function calls of an
imperative program are executed or evaluated. The emphasis on explicit control
flow distinguishes an imperative programming language from a declarative
programming language.

### Creative Commons (CC)
&#10;<br>
An American non-profit organization devoted to expanding the range of creative
works available for others to build upon legally and to share. [78] The
organization has released several copyright-licenses, known as Creative
Commons licenses, free of charge to the public.

### CRLF
&#10;<br>
CR and LF are [control
characters](https://en.wikipedia.org/wiki/Control_character) or
[bytecode](https://en.wikipedia.org/wiki/Bytecode) that can be used to mark a
line break in a text file.
- CR = Carriage Return (`\r`, `0x0D` in hexadecimal, 13 in decimal) — moves
the cursor to the beginning of the line without advancing to the next line.
- LF = Line Feed (`\n`, `0x0A` in hexadecimal, 10 in decimal) — moves the
cursor down to the next line without returning to the beginning of the line. A
CR immediately followed by a LF (CRLF, `\r\n`, or `0x0D0A`) moves the cursor to
the beginning of the line and then down to the next line.
```
CR Lorem ipsum dolor
│                   LF
│                   │
│                   └── Line Feed (LF, \n) moves the cursor down
└───── Carriage Return (CR, \r) moves the cursor to the start of the line
```

### Cryptography
&#10;<br>
Or cryptology, is the practice and study of techniques for secure
communication in the presence of third parties called adversaries. [79] More
generally, cryptography is about constructing and analyzing protocols that
prevent third parties or the public from reading private messages; [80]
various aspects in information security such as data confidentiality, data
integrity, authentication, and non-repudiation [81] are central to modern
cryptography. Modern cryptography exists at the intersection of the
disciplines of mathematics, computer science, electrical engineering,
communication science, and physics. Applications of cryptography include
electronic commerce, chip-based payment cards, digital currencies, computer
passwords, and military communications.

### CSV
&#10;<br>
See comma-separated values.

### Cyberbullying
&#10;<br>
A form of bullying or harassment using electronic means.

### Cyberspace
&#10;<br>
Widespread, interconnected digital technology.

## D

### Daemon
&#10;<br>
In multitasking computer operating systems, a daemon (/ˈdiːmən/ or /ˈdeɪmən/)
[82] is a computer program that runs as a background process, rather than
being under the direct control of an interactive user. Traditionally, the
process names of a daemon end with the letter d, for clarification that the
process is in fact a daemon, and for differentiation between a daemon and a
normal computer program. For example, syslogd is a daemon that implements
system logging facility, and sshd is a daemon that serves incoming SSH
connections.

### Data center
&#10;<br>
A dedicated space used to house computer systems and associated components,
such as telecommunications and data storage systems. It generally includes
redundant or backup components and infrastructure for power supply, data
communications connections, environmental controls (e.g. air conditioning and
fire suppression) and various security devices. [83]

### Database
&#10;<br>
An organized collection of data, generally stored and accessed electronically
from a computer system. Where databases are more complex, they are often
developed using formal design and modeling techniques.

### Data mining
&#10;<br>
Is a process of discovering patterns in large data sets involving methods at
the intersection of machine learning, statistics, and database systems. [84]
Data mining is an interdisciplinary subfield of computer science and
statistics with an overall goal to extract information (with intelligent
methods) from a data set and transform the information into a comprehensible
structure for further use. [84] [85] [86] [87] Data mining is the analysis
step of the "knowledge discovery in databases" process, or KDD. [88] Aside
from the raw analysis step, it also involves database and data management
aspects, data pre-processing, model and inference considerations,
interestingness metrics, complexity considerations, post-processing of
discovered structures, visualization, and online updating. [84]

### Data science
&#10;<br>
An interdisciplinary field that uses scientific methods, processes,
algorithms, and systems to extract knowledge and insights from data in various
forms, both structured and unstructured, [89] [90] similar to data mining.
Data science is a "concept to unify statistics, data analysis, machine
learning and their related methods" in order to "understand and analyze actual
phenomena" with data. [91] It employs techniques and theories drawn from many
fields within the context of mathematics, statistics, information science, and
computer science.

### Data structure
&#10;<br>
A data organization, management, and storage format that enables efficient
access and modification. [92] [93] [94] More precisely, a data structure is a
collection of data values, the relationships among them, and the functions or
operations that can be applied to the data. [95]

### Data type
&#10;<br>
An attribute of data which tells the compiler or interpreter how the
programmer intends to use the data. Most programming languages support common
data types of real, integer, and Boolean. A data type constrains the values
that an expression, such as a variable or a function, might take. This data
type defines the operations that can be done on the data, the meaning of the
data, and the way values of that type can be stored. A type of value from
which an expression may take its value. [96] [97]

### Debugging
&#10;<br>
The process of finding and resolving defects or problems within a computer
program that prevent correct operation of computer software or the system as a
whole. Debugging tactics can involve interactive debugging, control flow
analysis, unit testing, integration testing, log file analysis, monitoring at
the application or system level, memory dumps, and profiling.

### Declaration
&#10;<br>
In computer programming, a language construct that specifies properties of an
identifier: it declares what a word (identifier) "means". [98] Declarations
are most commonly used for functions, variables, constants, and classes, but
can also be used for other entities such as enumerations and type definitions.
[98] Beyond the name (the identifier itself) and the kind of entity (function,
variable, etc.), declarations typically specify the data type (for variables
and constants), or the type signature (for functions); types may also include
dimensions, such as for arrays. A declaration is used to announce the
existence of the entity to the compiler; this is important in those strongly
typed languages that require functions, variables, and constants, and their
types, to be specified with a declaration before use, and is used in forward
declaration. [99] The term "declaration" is frequently contrasted with the
term "definition", [98] but meaning and usage varies significantly between
languages.

### Digital data
&#10;<br>
In information theory and information systems, the discrete, discontinuous
representation of information or works. Numbers and letters are commonly used
representations.

### Digital signal processing (DSP)
&#10;<br>
The use of digital processing, such as by computers or more specialized
digital signal processors, to perform a wide variety of signal processing
operations. The signals processed in this manner are a sequence of numbers
that represent samples of a continuous variable in a domain such as time,
space, or frequency.

### Discrete event simulation (DES)
&#10;<br>
A model of the operation of a system as a discrete sequence of events in time.
Each event occurs at a particular instant in time and marks a change of state
in the system. [100] Between consecutive events, no change in the system is
assumed to occur; thus the simulation can directly jump in time from one event
to the next.

### Disk storage
&#10;<br>
(Also sometimes called drive storage) is a general category of storage
mechanisms where data is recorded by various electronic, magnetic, optical, or
mechanical changes to a surface layer of one or more rotating disks. A disk
drive is a device implementing such a storage mechanism. Notable types are the
hard disk drive (HDD) containing a non-removable disk, the floppy disk drive
(FDD) and its removable floppy disk, and various optical disc drives (ODD) and
associated optical disc media.

### Distributed computing
&#10;<br>
A field of computer science that studies distributed systems. A distributed
system is a system whose components are located on different networked
computers, which communicate and coordinate their actions by passing messages
to one another. [101] The components interact with one another in order to
achieve a common goal. Three significant characteristics of distributed
systems are: concurrency of components, lack of a global clock, and
independent failure of components. [101] Examples of distributed systems vary
from SOA-based systems to massively multiplayer online games to peer-to-peer
applications.

### Divide and conquer algorithm
&#10;<br>
An algorithm design paradigm based on multi-branched recursion. A
divide-and-conquer algorithm works by recursively breaking down a problem into
two or more sub-problems of the same or related type, until these become
simple enough to be solved directly. The solutions to the sub-problems are
then combined to give a solution to the original problem.

### DNS
&#10;<br>
See Domain Name System.

### Documentation
&#10;<br>
Written text or illustration that accompanies computer software or is embedded
in the source code. It either explains how it operates or how to use it, and
may mean different things to people in different roles.

### Domain
&#10;<br>
Is the targeted subject area of a computer program. It is a term used in
software engineering. Formally it represents the target subject of a specific
programming project, whether narrowly or broadly defined. [102]

### Domain Name System (DNS)
&#10;<br>
A hierarchical and decentralized naming system for computers, services, or
other resources connected to the Internet or to a private network. It
associates various information with domain names assigned to each of the
participating entities. Most prominently, it translates more readily memorized
domain names to the numerical IP addresses needed for locating and identifying
computer services and devices with the underlying network protocols. By
providing a worldwide, distributed directory service, the Domain Name System
has been an essential component of the functionality of the Internet
since 1985.

### Double-precision floating-point format
&#10;<br>
A computer number format. It represents a wide dynamic range of numerical
values by using a floating radix point.

### Download
&#10;<br>
In computer networks, to receive data from a remote system, typically a server
[103] such as a web server, an FTP server, an email server, or other similar
systems. This contrasts with uploading, where data is sent to a remote server.
A download is a file offered for downloading or that has been downloaded, or
the process of receiving such a file.

## E

### Edge device
&#10;<br>
A device which provides an entry point into enterprise or service provider
core networks. Examples include routers, routing switches, integrated access
devices (IADs), multiplexers, and a variety of metropolitan area network (MAN)
and wide area network (WAN) access devices. Edge devices also provide
connections into carrier and service provider networks. An edge device that
connects a local area network to a high speed switch or backbone (such as an
ATM switch) may be called an edge concentrator.

### Encryption
&#10;<br>
In cryptography, encryption is the process of encoding information. This
process converts the original representation of the information, known as
plaintext, into an alternative form known as ciphertext. Ideally, only
authorized parties can decipher a ciphertext back to plaintext and access the
original information. Encryption does not itself prevent interference but
denies the intelligible content to a would-be interceptor. For technical
reasons, an encryption scheme usually uses a pseudo-random encryption key
generated by an algorithm. It is possible to decrypt the message without
possessing the key, but, for a well-designed encryption scheme, considerable
computational resources and skills are required. An authorized recipient can
easily decrypt the message with the key provided by the originator to
recipients but not to unauthorized users. Historically, various forms of
encryption have been used to aid in cryptography. Early encryption techniques
were often utilized in military messaging. Since then, new techniques have
emerged and become commonplace in all areas of modern computing. [104] Modern
encryption schemes utilize the concepts of public-key and symmetric-key. [104]
Modern encryption techniques ensure security because modern computers are
inefficient at cracking the encryption.

### Event
&#10;<br>
An action or occurrence recognized by software, often originating
asynchronously from the external environment, that may be handled by the
software. Because an event is an entity which encapsulates the action and the
contextual variables triggering the action, the acrostic mnemonic "Execution
Variable Encapsulating Named Trigger" is often used to clarify the concept.

### Event-driven programming
&#10;<br>
A programming paradigm in which the flow of the program is determined by
events such as user actions (mouse clicks, key presses), sensor outputs, or
messages from other programs or threads. Event-driven programming is the
dominant paradigm used in graphical user interfaces and other applications
(e.g. JavaScript web applications) that are centered on performing certain
actions in response to user input. This is also true of programming for device
drivers (e.g. P in USB device driver stacks [105]).

### Evolutionary computing
&#10;<br>
A family of algorithms for global optimization inspired by biological
evolution, and the subfield of artificial intelligence and soft computing
studying these algorithms. In technical terms, they are a family of
population-based trial-and-error problem-solvers with a metaheuristic or
stochastic optimization character.

### Executable
&#10;<br>
Causes a computer "to perform indicated tasks according to encoded
instructions," [106] as opposed to a data file that must be parsed by a
program to be meaningful. The exact interpretation depends upon the use -
while "instructions" is traditionally taken to mean machine code instructions
for a physical CPU, in some contexts a file containing bytecode or scripting
language instructions may also be considered executable.

### Executable module
&#10;<br>
>

### Execution
&#10;<br>
In computer and software engineering is the process by which a computer or
virtual machine executes the instructions of a computer program. Each
instruction of a program is a description of a particular action which to be
carried out in order for a specific problem to be solved; as instructions of a
program and therefore the actions they describe are being carried out by an
executing machine, specific effects are produced in accordance to the
semantics of the instructions being executed.

### Exception handling
&#10;<br>
The process of responding to the occurrence, during computation, of exceptions
– anomalous or exceptional conditions requiring special processing – often
disrupting the normal flow of program execution. It is provided by specialized
programming language constructs, computer hardware mechanisms like interrupts,
or operating system IPC facilities like signals.

### Existence detection
&#10;<br>
An existence check before reading a file can catch and/or prevent a fatal
error.

### Expression
&#10;<br>
In a programming language, a combination of one or more constants, variables,
operators, and functions that the programming language interprets (according
to its particular rules of precedence and of association) and computes to
produce ("to return", in a stateful environment) another value. This process,
as for mathematical expressions, is called evaluation.

### External library
&#10;<br>
>

## F

### Fault-tolerant computer system
&#10;<br>
A system designed around the concept of fault tolerance. In essence, they must
be able to continue working to a level of satisfaction in the presence of
errors or breakdowns.

### Feasibility study
&#10;<br>
An investigation which aims to objectively and rationally uncover the
strengths and weaknesses of an existing business or proposed venture,
opportunities and threats present in the natural environment, the resources
required to carry through, and ultimately the prospects for success. [107]
[108] In its simplest terms, the two criteria to judge feasibility are cost
required and value to be attained. [109]

### Field
&#10;<br>
Data that has several parts, known as a record, can be divided into fields.
Relational databases arrange data as sets of database records, so called rows.
Each record consists of several fields; the fields of all records form the
columns. Examples of fields: name, gender, hair colour.

### Filename extension
&#10;<br>
An identifier specified as a suffix to the name of a computer file. The
extension indicates a characteristic of the file contents or its intended use.

### Filter (software)
&#10;<br>
A computer program or subroutine to process a stream, producing another
stream. While a single filter can be used individually, they are frequently
strung together to form a pipeline.

### Floating point arithmetic
&#10;<br>
In computing, floating-point arithmetic (FP) is arithmetic using formulaic
representation of real numbers as an approximation to support a trade-off
between range and precision. For this reason, floating-point computation is
often found in systems which include very small and very large real numbers,
which require fast processing times. A number is, in general, represented
approximately to a fixed number of significant digits (the significand) and
scaled using an exponent in some fixed base; the base for the scaling is
normally two, ten, or sixteen. A number that can be represented exactly is of
the following form:

$$\text{significand} \times \text{base}^\text{exponent},$$

where significand is an integer, base is an integer greater than or equal to
two, and exponent is also an integer. For example:

$$1.2345 = \underbrace{12345}_\text{significand} \times \underbrace{10}_\text{base}\!\!\!\!\!\!^{\overbrace{-4}^\text{exponent}}.$$

### For loop
&#10;<br>
A control flow statement for specifying iteration, which allows code to be
executed repeatedly. Various keywords are used to specify this statement:
descendants of ALGOL use "for", while descendants of Fortran use "do". There
are also other possibilities, e.g. COBOL uses "PERFORM VARYING".

### Formal methods
&#10;<br>
A set of mathematically based techniques for the specification, development,
and verification of software and hardware systems. [110] The use of formal
methods for software and hardware design is motivated by the expectation that,
as in other engineering disciplines, performing appropriate mathematical
analysis can contribute to the reliability and robustness of a design. [111]

### Formal verification
&#10;<br>
The act of proving or disproving the correctness of intended algorithms
underlying a system with respect to a certain formal specification or
property, using formal methods of mathematics. [112]

### Functional programming
&#10;<br>
A programming paradigm—a style of building the structure and elements of
computer programs–that treats computation as the evaluation of mathematical
functions and avoids changing-state and mutable data. It is a declarative
programming paradigm in that programming is done with expressions or
declarations [113] instead of statements.

## G

### Game theory
&#10;<br>
The study of mathematical models of strategic interaction between rational
decision-makers. [114] It has applications in all fields of social science, as
well as in logic and computer science. Originally, it addressed zero-sum
games, in which each participant's gains or losses are exactly balanced by
those of the other participants. Today, game theory applies to a wide range of
behavioral relations, and is now an umbrella term for the science of logical
decision making in humans, animals, and computers.

### Garbage in, garbage out (GIGO)
&#10;<br>
A term used to describe the concept that flawed or nonsense input data
produces nonsense output or "garbage". It can also refer to the unforgiving
nature of programming, in which a poorly written program might produce
nonsensical behavior.

### Graphics Interchange Format (GIF)
&#10;<br>
>

### Gigabyte
&#10;<br>
A multiple of the unit byte for digital information. The prefix giga means 109
in the International System of Units (SI). Therefore, one gigabyte is
1000000000bytes. The unit symbol for the gigabyte is GB.

### Global variable
&#10;<br>
In computer programming, a variable with global scope, meaning that it is
visible (hence accessible) throughout the program, unless shadowed. The set of
all global variables is known as the global environment or global state. In
compiled languages, global variables are generally static variables, whose
extent (lifetime) is the entire runtime of the program, though in interpreted
languages (including command-line interpreters), global variables are
generally dynamically allocated when declared, since they are not known ahead
of time.

### Graph theory
&#10;<br>
In mathematics, the study of graphs, which are mathematical structures used to
model pairwise relations between objects. A graph in this context is made up
of vertices (also called nodes or points) which are connected by edges (also
called links or lines). A distinction is made between undirected graphs, where
edges link two vertices symmetrically, and directed graphs, where edges link
two vertices asymmetrically.

### Handle
&#10;<br>
In computer programming, a handle is an abstract reference to a resource that
is used when application software references blocks of memory or objects that
are managed by another system like a database or an operating system.

### Hard problem
&#10;<br>
Computational complexity theory focuses on classifying computational problems
according to their inherent difficulty, and relating these classes to each
other. A computational problem is a task solved by a computer. A computation
problem is solvable by mechanical application of mathematical steps, such as
an algorithm.

### Hash function
&#10;<br>
Any function that can be used to map data of arbitrary size to data of a fixed
size. The values returned by a hash function are called hash values, hash
codes, digests, or simply hashes. Hash functions are often used in combination
with a hash table, a common data structure used in computer software for rapid
data lookup. Hash functions accelerate table or database lookup by detecting
duplicated records in a large file.

### Hash table
&#10;<br>
In computing, a hash table (hash map) is a data structure that implements an
associative array abstract data type, a structure that can map keys to values.
A hash table uses a hash function to compute an index into an array of buckets
or slots, from which the desired value can be found.

### Heap
&#10;<br>
A specialized tree-based data structure which is essentially an almost
complete [115] tree that satisfies the heap property: if P is a parent node of
C, then the key (the value) of P is either greater than or equal to (in a max
heap) or less than or equal to (in a min heap) the key of C. [116] The node at
the "top" of the heap (with no parents) is called the root node.

### Heapsort
&#10;<br>
A comparison-based sorting algorithm. Heapsort can be thought of as an
improved selection sort: like that algorithm, it divides its input into a
sorted and an unsorted region, and it iteratively shrinks the unsorted region
by extracting the largest element and moving that to the sorted region. The
improvement consists of the use of a heap data structure rather than a
linear-time search to find the maximum. [117]

### Human-computer interaction (HCI)
&#10;<br>
Researches the design and use of computer technology, focused on the
interfaces between people (users) and computers. Researchers in the field of
HCI both observe the ways in which humans interact with computers and design
technologies that let humans interact with computers in novel ways. As a field
of research, human–computer interaction is situated at the intersection of
computer science, behavioral sciences, design, media studies, and several
other fields of study.

### Identifier
&#10;<br>
In computer languages, identifiers are tokens (also called symbols) which name
language entities. Some of the kinds of entities an identifier might denote
include variables, types, labels, subroutines, and packages.

### IDE
&#10;<br>
Integrated development environment.

### Image processing
&#10;<br>
>

### Imperative programming
&#10;<br>
A programming paradigm that uses statements that change a program's state. In
much the same way that the imperative mood in natural languages expresses
commands, an imperative program consists of commands for the computer to
perform. Imperative programming focuses on describing how a program operates.

### Incremental build model
&#10;<br>
A method of software development where the product is designed, implemented
and tested incrementally (a little more is added each time) until the product
is finished. It involves both development and maintenance. The product is
defined as finished when it satisfies all of its requirements. This model
combines the elements of the waterfall model with the iterative philosophy of
prototyping.

### Information space analysis
&#10;<br>
A deterministic method, enhanced by machine intelligence, for locating and
assessing resources for team-centric efforts.

### Information visualization
&#10;<br>
>

### Inheritance
&#10;<br>
In object-oriented programming, the mechanism of basing an object or class
upon another object (prototype-based inheritance) or class (class-based
inheritance), retaining similar implementation. Also defined as deriving new
classes (sub classes) from existing ones (super class or base class) and
forming them into a hierarchy of classes.

### Input/output (I/O)
&#10;<br>
The communication between an information processing system, such as a
computer, and the outside world, possibly a human or another information
processing system. Inputs are the signals or data received by the system and
outputs are the signals or data sent from it. The term can also be used as
part of an action; to "perform I/O" is to perform an input or output
operation.

### Insertion sort
&#10;<br>
A simple sorting algorithm that builds the final sorted array (or list) one
item at a time.

### Instance
&#10;<br>
In computer science, an instance is an occurrence of a software element that is
based on a type definition. When created, an occurrence is said to have been
instantiated, and both the creation process and the result of creation are
called instantiation.

### Instruction cycle
&#10;<br>
The cycle which the central processing unit (CPU) follows from boot-up until
the computer has shut down in order to process instructions. It is composed of
three main stages: the fetch stage, the decode stage, and the execute stage.

### Integer
&#10;<br>
A datum of integral data type, a data type that represents some range of
mathematical integers. Integral data types may be of different sizes and may
or may not be allowed to contain negative values. Integers are commonly
represented in a computer as a group of binary digits (bits). The size of the
grouping varies so the set of integer sizes available varies between different
types of computers. Computer hardware, including virtual machines, nearly
always provide a way to represent a processor register or memory address as an
integer.

### Integrated development environment (IDE)
&#10;<br>
A software application that provides comprehensive facilities to computer
programmers for software development. An IDE normally consists of at least a
source code editor, build automation tools, and a debugger.

### Integration testing
&#10;<br>
(sometimes called integration and testing, abbreviated I&T) is the phase in
software testing in which individual software modules are combined and tested
as a group. Integration testing is conducted to evaluate the compliance of a
system or component with specified functional requirements. [118] It occurs
after unit testing and before validation testing. Integration testing takes as
its input modules that have been unit tested, groups them in larger
aggregates, applies tests defined in an integration test plan to those
aggregates, and delivers as its output the integrated system ready for system
testing. [119]

### Intellectual property (IP)
&#10;<br>
A category of legal property that includes intangible creations of the human
intellect. [120] [121] There are many types of intellectual property, and some
countries recognize more than others. [122] [123] [124] [125] [126] The most
well-known types are copyrights, patents, trademarks, and trade secrets.

### Intelligent agent
&#10;<br>
In artificial intelligence, an intelligent agent (IA) refers to an autonomous
entity which acts, directing its activity towards achieving goals (i.e. it is
an agent), upon an environment using observation through sensors and
consequent actuators (i.e. it is intelligent). [127] Intelligent agents may
also learn or use knowledge to achieve their goals. They may be very simple or
very complex. A reflex machine, such as a thermostat, is considered an example
of an intelligent agent. [128]

### Interface
&#10;<br>
A shared boundary across which two or more separate components of a computer
system exchange information. The exchange can be between software, computer
hardware, peripheral devices, humans, and combinations of these. [129] Some
computer hardware devices, such as a touchscreen, can both send and receive
data through the interface, while others such as a mouse or microphone may
only provide an interface to send data to a given system. [130]

### Internal documentation
&#10;<br>
Computer software is said to have Internal Documentation if the notes on how
and why various parts of code operate is included within the source code as
comments. It is often combined with meaningful variable names with the
intention of providing potential future programmers a means of understanding
the workings of the code. This contrasts with external documentation, where
programmers keep their notes and explanations in a separate document.

### Internet
&#10;<br>
The global system of interconnected computer networks that use the Internet
protocol suite (TCP/IP) to link devices worldwide. It is a network of networks
that consists of private, public, academic, business, and government networks
of local to global scope, linked by a broad array of electronic, wireless, and
optical networking technologies.

### Internet bot
&#10;<br>
A software application that runs automated tasks (scripts) over the Internet.
[131] Typically, bots perform tasks that are both simple and structurally
repetitive, at a much higher rate than would be possible for a human alone.
The largest use of bots is in web spidering (web crawler), in which an
automated script fetches, analyzes and files information from web servers at
many times the speed of a human.

### Interpreter
&#10;<br>
A computer program that directly executes instructions written in a
programming or scripting language, without requiring them to have been
previously compiled into a machine language program.

### Invariant
&#10;<br>
One can encounter invariants that can be relied upon to be true during the
execution of a program, or during some portion of it. It is a logical
assertion that is always held to be true during a certain phase of execution.
For example, a loop invariant is a condition that is true at the beginning and
the end of every execution of a loop.

### Iteration
&#10;<br>
Is the repetition of a process in order to generate an outcome. The sequence
will approach some end point or end value. Each repetition of the process is a
single iteration, and the outcome of each iteration is then the starting point
of the next iteration. In mathematics and computer science, iteration (along
with the related technique of recursion) is a standard element of algorithms.

### Java
&#10;<br>
A general-purpose programming language that is class-based, object-oriented
[132](although not a pure OO language [133]), and designed to have as few
implementation dependencies as possible. It is intended to let application
developers "write once, run anywhere" (WORA), [134] meaning that compiled Java
code can run on all platforms that support Java without the need for
recompilation. [135]

### Kernel
&#10;<br>
The first section of an operating system to load into memory. As the center of
the operating system, the kernel needs to be small, efficient, and loaded into
a protected area in the memory so that it cannot be overwritten. It may be
responsible for such essential tasks as disk drive management, file
management, memory management, process management, etc.

### Library (computing)
&#10;<br>
A collection of non-volatile resources used by computer programs, often for
software development. These may include configuration data, documentation,
help data, message templates, pre-written code and subroutines, classes,
values, or type specifications.

### Linear search
&#10;<br>
A method for finding an element within a list. It sequentially checks each
element of the list until a match is found or the whole list has been
searched. [136]

### Linked list
&#10;<br>
A linear collection of data elements, whose order is not given by their
physical placement in memory. Instead, each element points to the next. It is
a data structure consisting of a collection of nodes which together represent
a sequence.

### Linker
&#10;<br>
or link editor, is a computer utility program that takes one or more object
files generated by a compiler or an assembler and combines them into a single
executable file, library file, or another 'object' file. A simpler version
that writes its output directly to memory is called the loader, though loading
is typically considered a separate process. [137]

### List
&#10;<br>
An abstract data type that represents a countable number of ordered values,
where the same value may occur more than once. An instance of a list is a
computer representation of the mathematical concept of a finite sequence; the
(potentially) infinite analog of a list is a stream. [138]: §3.5  Lists are a
basic example of containers, as they contain other values. If the same value
occurs multiple times, each occurrence is considered a distinct item.

### Loader
&#10;<br>
The part of an operating system that is responsible for loading programs and
libraries. It is one of the essential stages in the process of starting a
program, as it places programs into memory and prepares them for execution.
Loading a program involves reading the contents of the executable file
containing the program instructions into memory, and then carrying out other
required preparatory tasks to prepare the executable for running. Once loading
is complete, the operating system starts the program by passing control to the
loaded program code.

### Logic error
&#10;<br>
In computer programming, a bug in a program that causes it to operate
incorrectly, but not to terminate abnormally (or crash). A logic error
produces unintended or undesired output or other behaviour, although it may
not immediately be recognized as such.

### Logic programming
&#10;<br>
A type of programming paradigm which is largely based on formal logic. Any
program written in a logic programming language is a set of sentences in
logical form, expressing facts and rules about some problem domain. Major
logic programming language families include Prolog, answer set programming
(ASP), and Datalog.

### Machine learning (ML)
&#10;<br>
The scientific study of algorithms and statistical models that computer
systems use to perform a specific task without using explicit instructions,
relying on patterns and inference instead. It is seen as a subset of
artificial intelligence. Machine learning algorithms build a mathematical
model based on sample data, known as "training data", in order to make
predictions or decisions without being explicitly programmed to perform the
task. [139] [140]

### Machine vision (MV)
&#10;<br>
The technology and methods used to provide imaging-based automatic inspection
and analysis for such applications as automatic inspection, process control,
and robot guidance, usually in industry. Machine vision refers to many
technologies, software and hardware products, integrated systems, actions,
methods and expertise. Machine vision as a systems engineering discipline can
be considered distinct from computer vision, a form of computer science. It
attempts to integrate existing technologies in new ways and apply them to
solve real world problems. The term is the prevalent one for these functions
in industrial automation environments but is also used for these functions in
other environments such as security and vehicle guidance.

### Mathematical logic
&#10;<br>
A subfield of mathematics exploring the applications of formal logic to
mathematics. It bears close connections to metamathematics, the foundations of
mathematics, and theoretical computer science. [141] The unifying themes in
mathematical logic include the study of the expressive power of formal systems
and the deductive power of formal proof systems.

### Matrix
&#10;<br>
In mathematics, a matrix, (plural matrices), is a rectangular array [142] (see
irregular matrix) of numbers, symbols, or expressions, arranged in rows and
columns. [143] [144]

### Memory
&#10;<br>
Computer data storage, often called storage, is a technology consisting of
computer components and recording media that are used to retain digital data.
It is a core function and fundamental component of computers. [63]: 15–16

### Merge sort
&#10;<br>
An efficient, general-purpose, comparison-based sorting algorithm. Most
implementations produce a stable sort, which means that the order of equal
elements is the same in the input and output. Merge sort is a divide and
conquer algorithm that was invented by John von Neumann in 1945. [145] A
detailed description and analysis of bottom-up mergesort appeared in a report
by Goldstine and von Neumann as early as 1948. [146]

### Method
&#10;<br>
In object-oriented programming (OOP), a procedure associated with a message
and an object. An object consists of data and behavior. The data and behavior
comprise an interface, which specifies how the object may be utilized by any
of various consumers [147] of the object.

### Methodology
&#10;<br>
In software engineering, a software development process is the process of
dividing software development work into distinct phases to improve design,
product management, and project management. It is also known as a software
development life cycle (SDLC). The methodology may include the pre-definition
of specific deliverables and artifacts that are created and completed by a
project team to develop or maintain an application. [148]

### Modem
&#10;<br>
A hardware device that converts data into a format suitable for a transmission
medium so that it can be transmitted from one computer to another
(historically along telephone wires). A modem modulates one or more carrier
wave signals to encode digital information for transmission and demodulates
signals to decode the transmitted information. The goal is to produce a signal
that can be transmitted easily and decoded reliably to reproduce the original
digital data. Modems can be used with almost any means of transmitting analog
signals from light-emitting diodes to radio. A common type of modem is one
that turns the digital data of a computer into modulated electrical signal for
transmission over telephone lines and demodulated by another modem at the
receiver side to recover the digital data.

### Natural language processing (NLP)
&#10;<br>
A subfield of linguistics, computer science, information engineering, and
artificial intelligence concerned with the interactions between computers and
human (natural) languages, in particular how to program computers to process
and analyze large amounts of natural language data. Challenges in natural
language processing frequently involve speech recognition, natural language
understanding, and natural language generation.

### Node
&#10;<br>
Is a basic unit of a data structure, such as a linked list or tree data
structure. Nodes contain data and also may link to other nodes. Links between
nodes are often implemented by pointers.

### Number theory
&#10;<br>
A branch of pure mathematics devoted primarily to the study of the integers
and integer-valued functions.

### Numerical analysis
&#10;<br>
The study of algorithms that use numerical approximation (as opposed to
symbolic manipulations) for the problems of mathematical analysis (as
distinguished from discrete mathematics).

### Numerical method
&#10;<br>
In numerical analysis, a numerical method is a mathematical tool designed to
solve numerical problems. The implementation of a numerical method with an
appropriate convergence check in a programming language is called a numerical
algorithm.

### Object
&#10;<br>
An object can be a variable, a data structure, a function, or a method, and as
such, is a value in memory referenced by an identifier. In the class-based
object-oriented programming paradigm, object refers to a particular instance
of a class, where the object can be a combination of variables, functions, and
data structures. In relational database management, an object can be a table
or column, or an association between data and a database entity (such as
relating a person's age to a specific person). [149]

### Object code
&#10;<br>
The product of a compiler. [150] In a general sense object code is a sequence
of statements or instructions in a computer language, [151] usually a machine
code language (i.e., binary) or an intermediate language such as register
transfer language (RTL). The term indicates that the code is the goal or
result of the compiling process, with some early sources referring to source
code as a "subject program."

### Object-oriented analysis and design (OOAD)
&#10;<br>
A technical approach for analyzing and designing an application, system, or
business by applying object-oriented programming, as well as using visual
modeling throughout the software development process to guide stakeholder
communication and product quality.

### Object-oriented programming (OOP)
&#10;<br>
A programming paradigm based on the concept of "objects", which can contain
data, in the form of fields (often known as attributes or properties), and
code, in the form of procedures (often known as methods). A feature of objects
is an object's procedures that can access and often modify the data fields of
the object with which they are associated (objects have a notion of "this" or
"self"). In OOP, computer programs are designed by making them out of objects
that interact with one another. [152] [153] OOP languages are diverse, but the
most popular ones are class-based, meaning that objects are instances of
classes, which also determine their types.

### Open-source software (OSS)
&#10;<br>
A type of computer software in which source code is released under a license
in which the copyright holder grants users the rights to study, change, and
distribute the software to anyone and for any purpose. [154] Open-source
software may be developed in a collaborative public manner. Open-source
software is a prominent example of open collaboration. [155]

### Operating system (OS)
&#10;<br>
System software that manages computer hardware, software resources, and
provides common services for computer programs.

### Optical fiber
&#10;<br>
A flexible, transparent fiber made by drawing glass (silica) or plastic to a
diameter slightly thicker than that of a human hair. [156] Optical fibers are
used most often as a means to transmit light between the two ends of the fiber
and find wide usage in fiber-optic communications, where they permit
transmission over longer distances and at higher bandwidths (data rates) than
electrical cables. Fibers are used instead of metal wires because signals
travel along them with less loss; in addition, fibers are immune to
electromagnetic interference, a problem from which metal wires suffer. [157]

### Pair programming
&#10;<br>
An agile software development technique in which two programmers work together
at one workstation. One, the driver, writes code while the other, the observer
or navigator, [158] reviews each line of code as it is typed in. The two
programmers switch roles frequently.

### Parallel computing
&#10;<br>
A type of computation in which many calculations or the execution of processes
are carried out simultaneously. [159] Large problems can often be divided into
smaller ones, which can then be solved at the same time. There are several
different forms of parallel computing: bit-level, instruction-level, data, and
task parallelism.

### Parameter
&#10;<br>
In computer programming, a special kind of variable, used in a subroutine to
refer to one of the pieces of data provided as input to the subroutine. [b]
These pieces of data are the values [160] [161] [162] of the arguments (often
called actual arguments or actual parameters) with which the subroutine is
going to be called/invoked. An ordered list of parameters is usually included
in the definition of a subroutine, so that, each time the subroutine is
called, its arguments for that call are evaluated, and the resulting values
can be assigned to the corresponding parameters.

### Peripheral
&#10;<br>
Any auxiliary or ancillary device connected to or integrated within a computer
system and used to send information to or retrieve information from the
computer. An input device sends data or instructions to the computer; an
output device provides output from the computer to the user; and an
input/output device performs both functions.

### Pointer
&#10;<br>
Is an object in many programming languages that stores a memory address. This
can be that of another value located in computer memory, or in some cases,
that of memory-mapped computer hardware. A pointer references a location in
memory, and obtaining the value stored at that location is known as
dereferencing the pointer. As an analogy, a page number in a book's index
could be considered a pointer to the corresponding page; dereferencing such a
pointer would be done by flipping to the page with the given page number and
reading the text found on that page. The actual format and content of a
pointer variable is dependent on the underlying computer architecture.

### Postcondition
&#10;<br>
In computer programming, a condition or predicate that must always be true
just after the execution of some section of code or after an operation in a
formal specification. Postconditions are sometimes tested using assertions
within the code itself. Often, postconditions are simply included in the
documentation of the affected section of code.

### Precondition
&#10;<br>
In computer programming, a condition or predicate that must always be true
just prior to the execution of some section of code or before an operation in
a formal specification. If a precondition is violated, the effect of the
section of code becomes undefined and thus may or may not carry out its
intended work. Security problems can arise due to incorrect preconditions.

### Primary storage
&#10;<br>
(Also known as main memory, internal memory or prime memory), often referred
to simply as memory, is the only one directly accessible to the CPU. The CPU
continuously reads instructions stored there and executes them as required.
Any data actively operated on is also stored there in uniform manner.

### Primitive data type
&#10;<br>
>

### Priority queue
&#10;<br>
An abstract data type which is like a regular queue or stack data structure,
but where additionally each element has a "priority" associated with it. In a
priority queue, an element with high priority is served before an element with
low priority. In some implementations, if two elements have the same priority,
they are served according to the order in which they were enqueued, while in
other implementations, ordering of elements with the same priority is
undefined.

### Procedural programming
&#10;<br>
>

### Procedure
&#10;<br>
In computer programming, a subroutine is a sequence of program instructions
that performs a specific task, packaged as a unit. This unit can then be used
in programs wherever that particular task should be performed. Subroutines may
be defined within programs, or separately in libraries that can be used by
many programs. In different programming languages, a subroutine may be called
a routine, subprogram, function, method, or procedure. Technically, these
terms all have different definitions. The generic, umbrella term callable unit
is sometimes used. [163]

### Program lifecycle phase
&#10;<br>
Program lifecycle phases are the stages a computer program undergoes, from
initial creation to deployment and execution. The phases are edit time,
compile time, link time, distribution time, installation time, load time, and
run time.

### Programming language
&#10;<br>
A formal language, which comprises a set of instructions that produce various
kinds of output. Programming languages are used in computer programming to
implement algorithms.

### Programming language implementation
&#10;<br>
Is a system for executing computer programs. There are two general approaches
to programming language implementation: interpretation and compilation. [164]

### Programming language theory
&#10;<br>
(PLT) is a branch of computer science that deals with the design,
implementation, analysis, characterization, and classification of programming
languages and of their individual features. It falls within the discipline of
computer science, both depending on and affecting mathematics, software
engineering, linguistics and even cognitive science. It has become a
well-recognized branch of computer science, and an active research area, with
results published in numerous journals dedicated to PLT, as well as in general
computer science and engineering publications.

### Prolog
&#10;<br>
Is a logic programming language associated with artificial intelligence and
computational linguistics. [165] [166] [167] Prolog has its roots in
first-order logic, a formal logic, and unlike many other programming
languages, Prolog is intended primarily as a declarative programming language:
the program logic is expressed in terms of relations, represented as facts and
rules. A computation is initiated by running a query over these relations.
[168]

### Python
&#10;<br>
Is an interpreted, high-level and general-purpose programming language.
Created by Guido van Rossum and first released in 1991, Python's design
philosophy emphasizes code readability with its notable use of significant
whitespace. Its language constructs and object-oriented approach aim to help
programmers write clear, logical code for small and large-scale projects.
[169]

### Quantum computing
&#10;<br>
The use of quantum-mechanical phenomena such as superposition and entanglement
to perform computation. A quantum computer is used to perform such
computation, which can be implemented theoretically or physically. [170]: I-5

### Queue
&#10;<br>
A collection in which the entities in the collection are kept in order and the
principal (or only) operations on the collection are the addition of entities
to the rear terminal position, known as enqueue, and removal of entities from
the front terminal position, known as dequeue.

### Quicksort
&#10;<br>
An efficient sorting algorithm which serves as a systematic method for placing
the elements of a random access file or an array in order.

### R programming language
&#10;<br>
R is a programming language and free software environment for statistical
computing and graphics supported by the R Foundation for Statistical
Computing. [171] The R language is widely used among statisticians and data
miners for developing statistical software [172] and data analysis. [173]

### Radix
&#10;<br>
In digital numeral systems, the number of unique digits, including the digit
zero, used to represent numbers in a positional numeral system. For example,
in the decimal/denary system (the most common system in use today) the radix
(base number) is ten, because it uses the ten digits from 0 through 9, and all
other numbers are uniquely specified by positional combinations of these ten
base digits; in the binary system that is the standard in computing, the radix
is two, because it uses only two digits, 0 and 1, to uniquely specify each
number.

### Record
&#10;<br>
A record (also called a structure, struct, or compound data) is a basic data
structure. Records in a database or spreadsheet are usually called "rows".
[174] [175] [176] [177]

### Recursion
&#10;<br>
Occurs when a thing is defined in terms of itself or of its type. Recursion is
used in a variety of disciplines ranging from linguistics to logic. The most
common application of recursion is in mathematics and computer science, where
a function being defined is applied within its own definition. While this
apparently defines an infinite number of instances (function values), it is
often done in such a way that no infinite loop or infinite chain of references
can occur.

### Reference
&#10;<br>
Is a value that enables a program to indirectly access a particular datum,
such as a variable's value or a record, in the computer's memory or in some
other storage device. The reference is said to refer to the datum, and
accessing the datum is called dereferencing the reference.

### Reference counting
&#10;<br>
A programming technique of storing the number of references, pointers, or
handles to a resource, such as an object, a block of memory, disk space, and
others. In garbage collection algorithms, reference counts may be used to
deallocate objects which are no longer needed.

### Relational database
&#10;<br>
Is a digital database based on the relational model of data, as proposed by E.
F. Codd in 1970. [178] A software system used to maintain relational databases
is a relational database management system (RDBMS). Many relational database
systems have an option of using the SQL (Structured Query Language) for
querying and maintaining the database. [179] [better source needed]

### Reliability engineering
&#10;<br>
A sub-discipline of systems engineering that emphasizes dependability in the
lifecycle management of a product. Reliability describes the ability of a
system or component to function under stated conditions for a specified period
of time. [180] Reliability is closely related to availability, which is
typically described as the ability of a component or system to function at a
specified moment or interval of time.

### Regression testing
&#10;<br>
(rarely non-regression testing [181]) is re-running functional and
non-functional tests to ensure that previously developed and tested software
still performs after a change. [182] If not, that would be called a
regression. Changes that may require regression testing include bug fixes,
software enhancements, configuration changes, and even substitution of
electronic components. [183] As regression test suites tend to grow with each
found defect, test automation is frequently involved. Sometimes a change
impact analysis is performed to determine an appropriate subset of tests
(non-regression analysis [184]).

### Requirements analysis
&#10;<br>
In systems engineering and software engineering, requirements analysis focuses
on the tasks that determine the needs or conditions to meet the new or altered
product or project, taking account of the possibly conflicting requirements of
the various stakeholders, analyzing, documenting, validating and managing
software or system requirements. [185]

### Robotics
&#10;<br>
An interdisciplinary branch of engineering and science that includes
mechanical engineering, electronic engineering, information engineering,
computer science, and others. Robotics involves design, construction,
operation, and use of robots, as well as computer systems for their
perception, control, sensory feedback, and information processing. The goal of
robotics is to design intelligent machines that can help and assist humans in
their day-to-day lives and keep everyone safe.

### Round-off error
&#10;<br>
The difference between the result produced by a given algorithm using exact
arithmetic and the result produced by the same algorithm using
finite-precision, rounded arithmetic. [187] Rounding errors are due to
inexactness in the representation of real numbers and the arithmetic
operations done with them. This is a form of quantization error. [188] When
using approximation equations or algorithms, especially when using finitely
many digits to represent real numbers (which in theory have infinitely many
digits), one of the goals of numerical analysis is to estimate computation
errors. [189] Computation errors, also called numerical errors, include both
truncation errors and roundoff errors. [190]

### Router
&#10;<br>
A networking device that forwards data packets between computer networks.
Routers perform the traffic directing functions on the Internet. Data sent
through the internet, such as a web page or email, is in the form of data
packets. A packet is typically forwarded from one router to another router
through the networks that constitute an internetwork (e.g. the Internet) until
it reaches its destination node. [191]

### Routing table
&#10;<br>
In computer networking a routing table, or routing information base (RIB), is
a data table stored in a router or a network host that lists the routes to
particular network destinations, and in some cases, metrics (distances)
associated with those routes. The routing table contains information about the
topology of the network immediately around it.

### Run time
&#10;<br>
Runtime, run time, or execution time is the final phase of a computer
program's life cycle, in which the code is being executed on the computer's
central processing unit (CPU) as machine code. In other words, "runtime" is
the running phase of a program.

### Run time error
&#10;<br>
A runtime error is detected after or during the execution (running state) of a
program, whereas a compile-time error is detected by the compiler before the
program is ever executed. Type checking, register allocation, code generation,
and code optimization are typically done at compile time, but may be done at
runtime depending on the particular language and compiler. Many other runtime
errors exist and are handled differently by different programming languages,
such as division by zero errors, domain errors, array subscript out of bounds
errors, arithmetic underflow errors, several types of underflow and overflow
errors, and many other runtime errors generally considered as software bugs
which may or may not be caught and handled by any particular computer
language.

### Search algorithm
&#10;<br>
Any algorithm which solves the search problem, namely, to retrieve information
stored within some data structure, or calculated in the search space of a
problem domain, either with discrete or continuous values.

### Secondary storage
&#10;<br>
Also known as external memory or auxiliary storage, differs from primary
storage in that it is not directly accessible by the CPU. The computer usually
uses its input/output channels to access secondary storage and transfer the
desired data to primary storage. Secondary storage is non-volatile (retaining
data when power is shut off). Modern computer systems typically have two
orders of magnitude more secondary storage than primary storage because
secondary storage is less expensive.

### Selection sort
&#10;<br>
Is an in-place comparison sorting algorithm. It has an O(n2) time complexity,
which makes it inefficient on large lists, and generally performs worse than
the similar insertion sort. Selection sort is noted for its simplicity and has
performance advantages over more complicated algorithms in certain situations,
particularly where auxiliary memory is limited.

### Semantics
&#10;<br>
In programming language theory, semantics is the field concerned with the
rigorous mathematical study of the meaning of programming languages. It does
so by evaluating the meaning of syntactically valid strings defined by a
specific programming language, showing the computation involved. In such a
case that the evaluation would be of syntactically invalid strings, the result
would be non-computation. Semantics describes the processes a computer follows
when executing a program in that specific language. This can be shown by
describing the relationship between the input and output of a program, or an
explanation of how the program will be executed on a certain platform, hence
creating a model of computation.

### Sequence
&#10;<br>
In mathematics, a sequence is an enumerated collection of objects in which
repetitions are allowed and order does matter. Like a set, it contains members
(also called elements, or terms). The number of elements (possibly infinite)
is called the length of the sequence. Unlike a set, the same elements can
appear multiple times at different positions in a sequence, and order does
matter. Formally, a sequence can be defined as a function whose domain is
either the set of the natural numbers (for infinite sequences) or the set of
the first n natural numbers (for a sequence of finite length n).

The position of an element in a sequence is its rank or index; it is the natural
number for which the element is the image. The first element has index 0 or 1,
depending on the context or a specific convention. When a symbol is used to
denote a sequence, the nth element of the sequence is denoted by this symbol
with n as subscript; for example, the nth element of the Fibonacci sequence F is
generally denoted Fn.

For example, (M, A, R, Y) is a sequence of letters with the letter 'M' first and
'Y' last. This sequence differs from (A, R, M, Y). Also, the sequence (1, 1, 2,
3, 5, 8), which contains the number 1 at two different positions, is a valid
sequence. Sequences can be finite, as in these examples, or infinite, such as
the sequence of all even positive integers (2, 4, 6, ...). In computing and
computer science, finite sequences are sometimes called strings, words or lists,
the different names commonly corresponding to different ways to represent them
in computer memory; infinite sequences are called streams. The empty
sequence ( ) is included in most notions of sequence, but may be excluded
depending on the context.

### Serializability
&#10;<br>
In concurrency control of databases, [192] [193] transaction processing
(transaction management), and various transactional applications (e.g.,
transactional memory [194] and software transactional memory), both
centralized and distributed, a transaction schedule is serializable if its
outcome (e.g., the resulting database state) is equal to the outcome of its
transactions executed serially, i.e. without overlapping in time. Transactions
are normally executed concurrently (they overlap), since this is the most
efficient way. Serializability is the major correctness criterion for
concurrent transactions' executions [citation needed]. It is considered the
highest level of isolation between transactions, and plays an essential role
in concurrency control. As such it is supported in all general purpose
database systems. Strong strict two-phase locking (SS2PL) is a popular
serializability mechanism utilized in most of the database systems (in various
variants) since their early days in the 1970s.

### Serialization
&#10;<br>
Is the process of translating data structures or object state into a format
that can be stored (for example, in a file or memory buffer) or transmitted
(for example, across a network connection link) and reconstructed later
(possibly in a different computer environment). [195] When the resulting
series of bits is reread according to the serialization format, it can be used
to create a semantically identical clone of the original object. For many
complex objects, such as those that make extensive use of references, this
process is not straightforward. Serialization of object-oriented objects does
not include any of their associated methods with which they were previously
linked.
\
This process of serializing an object is also called marshalling an object in
some situations. [2] [3] The opposite operation, extracting a data structure
from a series of bytes, is deserialization, (also called unserialization or
unmarshalling).

### Service level agreement
&#10;<br>
(SLA), is a commitment between a service provider and a client. Particular
aspects of the service – quality, availability, responsibilities – are agreed
between the service provider and the service user. [196] The most common
component of an SLA is that the services should be provided to the customer as
agreed upon in the contract. As an example, Internet service providers and
telcos will commonly include service level agreements within the terms of
their contracts with customers to define the level(s) of service being sold in
plain language terms. In this case the SLA will typically have a technical
definition in mean time between failures (MTBF), mean time to repair or mean
time to recovery (MTTR); identifying which party is responsible for reporting
faults or paying fees; responsibility for various data rates; throughput;
jitter; or similar measurable details.

### Set
&#10;<br>
Is an abstract data type that can store unique values, without any particular
order. It is a computer implementation of the mathematical concept of a finite
set. Unlike most other collection types, rather than retrieving a specific
element from a set, one typically tests a value for membership in a set.

### Singleton variable
&#10;<br>
A variable that is referenced only once. May be used as a dummy argument in a
function call, or when its address is assigned to another variable which
subsequently accesses its allocated storage. Singleton variables sometimes
occur because a mistake has been made – such as assigning a value to a
variable and forgetting to use it later, or mistyping one instance of the
variable name. Some compilers and lint-like tools flag occurrences of
singleton variables.

### Soft computing
&#10;<br>
>

### Software
&#10;<br>
Computer software, or simply software, is a collection of data or computer
instructions that tell the computer how to work. This is in contrast to
physical hardware, from which the system is built and actually performs the
work. In computer science and software engineering, computer software is all
information processed by computer systems, programs and data. Computer
software includes computer programs, libraries and related non-executable
data, such as online documentation or digital media. Computer hardware and
software require each other and neither can be realistically used on its own.

### Software agent
&#10;<br>
Is a computer program that acts for a user or other program in a relationship
of agency, which derives from the Latin agere (to do): an agreement to act on
one's behalf. Such "action on behalf of" implies the authority to decide
which, if any, action is appropriate. [197] [198] Agents are colloquially
known as bots, from robot. They may be embodied, as when execution is paired
with a robot body, or as software such as a chatbot executing on a phone (e.g.
Siri) or other computing device. Software agents may be autonomous or work
together with other agents or people. Software agents interacting with people
(e.g. chatbots, human-robot interaction environments) may possess human-like
qualities such as natural language understanding and speech, personality or
embody humanoid form (see Asimo).

### Software construction
&#10;<br>
Is a software engineering discipline. It is the detailed creation of working
meaningful software through a combination of coding, verification, unit
testing, integration testing, and debugging. It is linked to all the other
software engineering disciplines, most strongly to software design and
software testing. [199]

### Software deployment
&#10;<br>
Is all of the activities that make a software system available for use. [200]

### Software design
&#10;<br>
Is the process by which an agent creates a specification of a software
artifact, intended to accomplish goals, using a set of primitive components
and subject to constraints. [201] Software design may refer to either "all the
activity involved in conceptualizing, framing, implementing, commissioning,
and ultimately modifying complex systems" or "the activity following
requirements specification and before programming, as ... [in] a stylized
software engineering process." [202]

### Software development
&#10;<br>
Is the process of conceiving, specifying, designing, programming, documenting,
testing, and bug fixing involved in creating and maintaining applications,
frameworks, or other software components. Software development is a process of
writing and maintaining the source code, but in a broader sense, it includes
all that is involved between the conception of the desired software through to
the final manifestation of the software, sometimes in a planned and structured
process. [203] Therefore, software development may include research, new
development, prototyping, modification, reuse, re-engineering, maintenance, or
any other activities that result in software products. [204]

### Software development process
&#10;<br>
In software engineering, a software development process is the process of
dividing software development work into distinct phases to improve design,
product management, and project management. It is also known as a software
development life cycle (SDLC). The methodology may include the pre-definition
of specific deliverables and artifacts that are created and completed by a
project team to develop or maintain an application. [148] Most modern
development processes can be vaguely described as agile. Other methodologies
include waterfall, prototyping, iterative and incremental development, spiral
development, rapid application development, and extreme programming.

### Software engineering
&#10;<br>
Is the systematic application of engineering approaches to the development of
software. [205] [206] [207] Software engineering is a computing discipline.
[208]

### Software maintenance
&#10;<br>
In software engineering is the modification of a software product after
delivery to correct faults, to improve performance or other attributes. [209]

### Software prototyping
&#10;<br>
Is the activity of creating prototypes of software applications, i.e.,
incomplete versions of the software program being developed. It is an activity
that can occur in software development and is comparable to prototyping as
known from other fields, such as mechanical engineering or manufacturing. A
prototype typically simulates only a few aspects of, and may be completely
different from, the final product.

### Software requirements specification
&#10;<br>
(SRS), is a description of a software system to be developed. The software
requirements specification lays out functional and non-functional
requirements, and it may include a set of use cases that describe user
interactions that the software must provide to the user for perfect
interaction.

### Software testing
&#10;<br>
Is an investigation conducted to provide stakeholders with information about
the quality of the software product or service under test. [210] Software
testing can also provide an objective, independent view of the software to
allow the business to appreciate and understand the risks of software
implementation. Test techniques include the process of executing a program or
application with the intent of finding software bugs (errors or other
defects), and verifying that the software product is fit for use.

### Sorting algorithm
&#10;<br>
Is an algorithm that puts elements of a list in a certain order. The most
frequently used orders are numerical order and lexicographical order.
Efficient sorting is important for optimizing the efficiency of other
algorithms (such as search and merge algorithms) that require input data to be
in sorted lists. Sorting is also often useful for canonicalizing data and for
producing human-readable output. More formally, the output of any sorting
algorithm must satisfy two conditions:

The output is in nondecreasing order (each element is no smaller than the
previous element according to the desired total order); The output is a
permutation (a reordering, yet retaining all of the original elements) of the
input.

Further, the input data is often stored in an array, which allows random access,
rather than a list, which only allows sequential access; though many algorithms
can be applied to either type of data after suitable modification.

### Source code
&#10;<br>
In computing, source code is any collection of code, with or without comments,
written using [211] a human-readable programming language, usually as plain
text. The source code of a program is specially designed to facilitate the
work of computer programmers, who specify the actions to be performed by a
computer mostly by writing source code. The source code is often transformed
by an assembler or compiler into binary machine code that can be executed by
the computer. The machine code might then be stored for execution at a later
time. Alternatively, source code may be interpreted and thus immediately
executed.

### Spiral model
&#10;<br>
Is a risk-driven software development process model. Based on the unique risk
patterns of a given project, the spiral model guides a team to adopt elements
of one or more process models, such as incremental, waterfall, or evolutionary
prototyping.

### Stack
&#10;<br>
Is an abstract data type that serves as a collection of elements, with two
main principal operations: push, which adds an element to the collection, and
pop, which removes the most recently added element that was not yet removed.
The order in which elements come off a stack gives rise to its alternative
name, LIFO (last in, first out). Additionally, a peek operation may give
access to the top without modifying the stack. [212] The name "stack" for this
type of structure comes from the analogy to a set of physical items stacked on
top of each other. This structure makes it easy to take an item off the top of
the stack, while getting to an item deeper in the stack may require taking off
multiple other items first. [213]

### State
&#10;<br>
In information technology and computer science, a system is described as
stateful if it is designed to remember preceding events or user interactions;
[214] the remembered information is called the state of the system.

### Statement
&#10;<br>
In computer programming, a statement is a syntactic unit of an imperative
programming language that expresses some action to be carried out. [215] A
program written in such a language is formed by a sequence of one or more
statements. A statement may have internal components (e.g., expressions).

### Storage
&#10;<br>
Computer data storage is a technology consisting of computer components and
recording media that are used to retain digital data. It is a core function
and fundamental component of computers. [63]: 15–16

### Stream
&#10;<br>
Is a sequence of data elements made available over time. A stream can be
thought of as items on a conveyor belt being processed one at a time rather
than in large batches.

### String
&#10;<br>
In computer programming, a string is traditionally a sequence of characters,
either as a literal constant or as some kind of variable. The latter may allow
its elements to be mutated and the length changed, or it may be fixed (after
creation). A string is generally considered as a data type and is often
implemented as an array data structure of bytes (or words) that stores a
sequence of elements, typically characters, using some character encoding.
String may also denote more general arrays or other sequence (or list) data
types and structures.

### Structured storage
&#10;<br>
A NoSQL (originally referring to "non-SQL" or "non-relational") [216] database
provides a mechanism for storage and retrieval of data that is modeled in
means other than the tabular relations used in relational databases. Such
databases have existed since the late 1960s, but the name "NoSQL" was only
coined in the early 21st century, [217] triggered by the needs of Web 2.0
companies. [218] [219] NoSQL databases are increasingly used in big data and
real-time web applications. [220] NoSQL systems are also sometimes called "Not
only SQL" to emphasize that they may support SQL-like query languages or sit
alongside SQL databases in polyglot-persistent architectures. [221] [222]

### Subroutine
&#10;<br>
In computer programming, a subroutine is a sequence of program instructions
that performs a specific task, packaged as a unit. This unit can then be used
in programs wherever that particular task should be performed. Subroutines may
be defined within programs, or separately in libraries that can be used by
many programs. In different programming languages, a subroutine may be called
a routine, subprogram, function, method, or procedure. Technically, these
terms all have different definitions. The generic, umbrella term callable unit
is sometimes used. [163]

### Symbolic computation
&#10;<br>
In mathematics and computer science, [223] computer algebra, also called
symbolic computation or algebraic computation, is a scientific area that
refers to the study and development of algorithms and software for
manipulating mathematical expressions and other mathematical objects. Although
computer algebra could be considered a subfield of scientific computing, they
are generally considered as distinct fields because scientific computing is
usually based on numerical computation with approximate floating point
numbers, while symbolic computation emphasizes exact computation with
expressions containing variables that have no given value and are manipulated
as symbols.

### Syntax
&#10;<br>
The syntax of a computer language is the set of rules that defines the
combinations of symbols that are considered to be correctly structured
statements or expressions in that language. This applies both to programming
languages, where the document represents source code, and to markup languages,
where the document represents data.

### Syntax error
&#10;<br>
Is an error in the syntax of a sequence of characters or tokens that is
intended to be written in compile-time. A program will not compile until all
syntax errors are corrected. For interpreted languages, however, a syntax
error may be detected during program execution, and an interpreter's error
messages might not differentiate syntax errors from errors of other kinds.
There is some disagreement as to just what errors are "syntax errors". For
example, some would say that the use of an uninitialized variable's value in
Java code is a syntax error, but many others would disagree [224] [225] and
would classify this as a (static) semantic error.

### System console
&#10;<br>
The system console, computer console, root console, operator's console, or
simply console is the text entry and display device for system administration
messages, particularly those from the BIOS or boot loader, the kernel, from
the init system and from the system logger. It is a physical device consisting
of a keyboard and a screen, and traditionally is a text terminal, but may also
be a graphical terminal. System consoles are generalized to computer
terminals, which are abstracted respectively by virtual consoles and terminal
emulators. Today communication with system consoles is generally done
abstractly, via the standard streams (stdin, stdout, and stderr), but there
may be system-specific interfaces, for example those used by the system
kernel.

### Technical documentation
&#10;<br>
In engineering, any type of documentation that describes handling,
functionality, and architecture of a technical product or a product under
development or use. [226] [227] [228] The intended recipient for product
technical documentation is both the (proficient) end user as well as the
administrator/service or maintenance technician. In contrast to a mere
"cookbook" manual, technical documentation aims at providing enough
information for a user to understand inner and outer dependencies of the
product at hand.

### Third-generation programming language
&#10;<br>
A third-generation programming language (3GL) is a high-level computer
programming language that tends to be more machine-independent and
programmer-friendly than the machine code of the first-generation and assembly
languages of the second-generation, while having a less specific focus to the
fourth and fifth generations. [229] Examples of common and historical
third-generation programming languages are ALGOL, BASIC, C, COBOL, Fortran,
Java, and Pascal.

### Top-down and bottom-up design
&#10;<br>
>

### Tree
&#10;<br>
A widely used abstract data type (ADT) that simulates a hierarchical tree
structure, with a root value and subtrees of children with a parent node,
represented as a set of linked nodes.

### Type theory
&#10;<br>
In mathematics, logic, and computer science, a type theory is any of a class
of formal systems, some of which can serve as alternatives to set theory as a
foundation for all mathematics. In type theory, every "term" has a "type" and
operations are restricted to terms of a certain type.

### Upload
&#10;<br>
In computer networks, to send data to a remote system such as a server or
another client so that the remote system can store a copy. [230] Contrast
download.

### Uniform Resource Locator (URL)
&#10;<br>
A reference to a web resource that specifies its location on a computer
network and a mechanism for retrieving it. A URL is a specific type of Uniform
Resource Identifier (URI), [232] [233] although many people use the two terms
interchangeably. [234] [c] URLs occur most commonly to reference web pages
(http), but are also used for file transfer (ftp), email (mailto), database
access (JDBC), and many other applications.

### User
&#10;<br>
Is a person who utilizes a computer or network service. Users of computer
systems and software products generally lack the technical expertise required
to fully understand how they work. [237] Power users use advanced features of
programs, though they are not necessarily capable of computer programming and
system administration.

### User agent
&#10;<br>
Software (a software agent) that acts on behalf of a user, such as a web
browser that "retrieves, renders and facilitates end user interaction with Web
content". [238] An email reader is a mail user agent.

### User interface (UI)
&#10;<br>
The space where interactions between humans and machines occur. The goal of
this interaction is to allow effective operation and control of the machine
from the human end, whilst the machine simultaneously feeds back information
that aids the operators' decision-making process. Examples of this broad
concept of user interfaces include the interactive aspects of computer
operating systems, hand tools, heavy machinery operator controls, and process
controls. The design considerations applicable when creating user interfaces
are related to or involve such disciplines as ergonomics and psychology.

### User interface design
&#10;<br>
The design of user interfaces for machines and software, such as computers,
home appliances, mobile devices, and other electronic devices, with the focus
on maximizing usability and the user experience. The goal of user interface
design is to make the user's interaction as simple and efficient as possible,
in terms of accomplishing user goals (user-centered design).

### Variable
&#10;<br>
In computer programming, a variable, or scalar, is a storage location
(identified by a memory address) paired with an associated symbolic name (an
identifier), which contains some known or unknown quantity of information
referred to as a value. The variable name is the usual way to reference the
stored value, in addition to referring to the variable itself, depending on
the context. This separation of name and content allows the name to be used
independently of the exact information it represents. The identifier in
computer source code can be bound to a value during run time, and the value of
the variable may therefore change during the course of program execution.
[239] [240]

### Virtual machine (VM)
&#10;<br>
An emulation of a computer system. Virtual machines are based on computer
architectures and attempt to provide the same functionality as a physical
computer. Their implementations may involve specialized hardware, software, or
a combination of both.

### [Virtual memory ](https://en.wikipedia.org/wiki/Virtual_memory)
&#10;<br>
In computing, virtual memory, or virtual storage, is a memory management
### technique that provides an "idealized **abstraction** of the torage
### resourcesthat are actually available on a given machine" which "creates the
illusion to users of a very large (main) memory".

### V-Model
&#10;<br>&#10;<br>
A software development process that may be considered an extension of the
waterfall model, and is an example of the more general V-model. Instead of
moving down in a linear way, the process steps are bent upwards after the
coding phase, to form the typical V shape. The V-Model demonstrates the
relationships between each phase of the development life cycle and its
associated phase of testing. The horizontal and vertical axes represent time
or project completeness (left-to-right) and level of abstraction
(coarsest-grain abstraction uppermost), respectively. [241]

### Waterfall model
&#10;<br>
A breakdown of project activities into linear sequential phases, where each
phase depends on the deliverables of the previous one and corresponds to a
specialisation of tasks. The approach is typical for certain areas of
engineering design. In software development, it tends to be among the less
iterative and flexible approaches, as progress flows in largely one direction
("downwards" like a waterfall) through the phases of conception, initiation,
analysis, design, construction, testing, deployment and maintenance.

### Waveform Audio File Format
&#10;<br>
An audio file format standard, developed by Microsoft and IBM, for storing an
audio bitstream on PCs. It is an application of the Resource Interchange File
Format (RIFF) bitstream format method for storing data in "chunks", and thus
is also close to the 8SVX and the AIFF format used on Amiga and Macintosh
computers, respectively. It is the main format used on Microsoft Windows
systems for raw and typically uncompressed audio. The usual bitstream encoding
is the linear pulse-code modulation (LPCM) format.

### Web crawler
&#10;<br>
An Internet bot that systematically browses the World Wide Web, typically for
the purpose of Web indexing (web spidering).

### Wi-Fi
&#10;<br>
A family of wireless networking technologies, based on the IEEE 802.11 family
of standards, which are commonly used for local area networking of devices and
Internet access. Wi‑Fi is a trademark of the non-profit Wi-Fi Alliance, which
restricts the use of the term Wi-Fi Certified to products that successfully
complete interoperability certification testing. [242] [243] [244]

### XHTML
&#10;<br>
Part of the family of XML markup languages. It mirrors or extends versions of
the widely used HyperText Markup Language (HTML), the language in which web
pages are formulated.

## References

1. ["Abstract Methods and Classes"](http://docs.oracle.com/javase/tutorial/java/IandI/abstract.html).
   _oracle.com_. Oracle Java Documentation. Retrieved 11 December 2014.
2. Colburn, Timothy; Shute, Gary (2007-06-05). "Abstraction in Computer
   Science". _Minds and Machines_. **17** (2): 169–184.
   [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
   [10.1007/s11023-007-9061-7](https://doi.org/10.1007%2Fs11023-007-9061-7).
   [ISSN](https://en.wikipedia.org/wiki/ISSN_(identifier) "ISSN (identifier)")
   [0924-6495](https://www.worldcat.org/issn/0924-6495).
   [S2CID](https://en.wikipedia.org/wiki/S2CID_(identifier) "S2CID (identifier)")
   [5927969](https://api.semanticscholar.org/CorpusID:5927969).
3. [Jump up to: <sup><i><b>a</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-abstraction_3-0)
   [<sup><i><b>b</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-abstraction_3-1)
   Kramer, Jeff (2007-04-01). "Is abstraction the key to computing?".
   _Communications of the ACM_. **50** (4): 36–42.
   [CiteSeerX](https://en.wikipedia.org/wiki/CiteSeerX_(identifier) "CiteSeerX (identifier)")
   [10.1.1.120.6776](https://citeseerx.ist.psu.edu/viewdoc/summary?doi=10.1.1.120.6776).
   [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
   [10.1145/1232743.1232745](https://doi.org/10.1145%2F1232743.1232745).
   [ISSN](https://en.wikipedia.org/wiki/ISSN_(identifier) "ISSN (identifier)")
   [0001-0782](https://www.worldcat.org/issn/0001-0782).
   [S2CID](https://en.wikipedia.org/wiki/S2CID_(identifier) "S2CID (identifier)")
   [12481509](https://api.semanticscholar.org/CorpusID:12481509).
4. [Comparison of Agent Architectures](http://hri.cogs.indiana.edu/publications/aaai04ws.pdf)
   [Archived](https://web.archive.org/web/20080827222057/http://hri.cogs.indiana.edu/publications/aaai04ws.pdf)
   August 27, 2008, at the
   [Wayback Machine](https://en.wikipedia.org/wiki/Wayback_Machine "Wayback Machine")
5. Collier, Ken W. (2011). _Agile Analytics: A Value-Driven Approach to Business
   Intelligence and Data Warehousing_. Pearson Education. pp. 121 ff.
   [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
   [9780321669544](https://en.wikipedia.org/wiki/Special:BookSources/9780321669544 "Special:BookSources/9780321669544").
   What is a self-organizing team?
6. ["What is Agile Software Development?"](https://www.agilealliance.org/the-alliance/what-is-agile/).
   Agile Alliance. 8 June 2013. Retrieved 4 April 2015.
7. [Goodrich, Michael T.](https://en.wikipedia.org/wiki/Michael_T._Goodrich "Michael T. Goodrich");
   [Tamassia, Roberto](https://en.wikipedia.org/wiki/Roberto_Tamassia "Roberto Tamassia")
   (2002),
   [_Algorithm Design: Foundations, Analysis, and Internet Examples_](http://ww3.algorithmdesign.net/ch00-front.html),
   John Wiley & Sons, Inc.,
   [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
   [978-0-471-38365-9](https://en.wikipedia.org/wiki/Special:BookSources/978-0-471-38365-9 "Special:BookSources/978-0-471-38365-9")
8. ["Application software"](https://www.pcmag.com/encyclopedia/term/37919/application-program).
   _ [PC Magazine](https://en.wikipedia.org/wiki/PC_Magazine "PC Magazine")_.
   [Ziff Davis](https://en.wikipedia.org/wiki/Ziff_Davis "Ziff Davis").
9. Black, Paul E. (13 November 2008).
   ["array"](https://xlinux.nist.gov/dads/HTML/array.html). _
   [Dictionary of Algorithms and Data Structures](https://en.wikipedia.org/wiki/Dictionary_of_Algorithms_and_Data_Structures "Dictionary of Algorithms and Data Structures")_.
   [National Institute of Standards and Technology](https://en.wikipedia.org/wiki/National_Institute_of_Standards_and_Technology "National Institute of Standards and Technology").
   Retrieved 22 August 2010.
10. Bjoern Andres; Ullrich Koethe; Thorben Kroeger; Hamprecht (2010).
    "Runtime-Flexible Multi-dimensional Arrays and Views for C++98 and C++0x".
    [arXiv](https://en.wikipedia.org/wiki/ArXiv_(identifier) "ArXiv (identifier)"):
    [1008.2909](https://arxiv.org/abs/1008.2909) \
    [[Cs.DS](https://arxiv.org/archive/cs.DS)\].
11. Garcia, Ronald; Lumsdaine, Andrew (2005). "MultiArray: a C++ library for
    generic programming with arrays". _Software: Practice and Experience_.
    **35** (2): 159–188.
    [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
    [10.1002/spe.630](https://doi.org/10.1002%2Fspe.630).
    [ISSN](https://en.wikipedia.org/wiki/ISSN_(identifier) "ISSN (identifier)")
    [0038-0644](https://www.worldcat.org/issn/0038-0644).
    [S2CID](https://en.wikipedia.org/wiki/S2CID_(identifier) "S2CID (identifier)")
    [10890293](https://api.semanticscholar.org/CorpusID:10890293).
12. Definition of AI as the study of
    [intelligent agents](https://en.wikipedia.org/wiki/Intelligent_agents "Intelligent agents"):

- [Poole, Mackworth & Goebel 1998](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFPooleMackworthGoebel1998),
  [p. 1](http://people.cs.ubc.ca/~poole/ci/ch1.pdf), which provides the version
  that is used in this article. Note that they use the term "computational
  intelligence" as a synonym for artificial intelligence.
- [Russell & Norvig (2003)](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFRussellNorvig2003)
  (who prefer the term "rational agent") and write "The whole-agent view is now
  widely accepted in the field" (
  [Russell & Norvig 2003](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFRussellNorvig2003),
  p. 55).
- [Nilsson 1998](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFNilsson1998)
- [Legg & Hutter 2007](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFLeggHutter2007).

13. [Russell & Norvig 2009](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFRussellNorvig2009),
    p. 2.
14. [Goodrich, Michael T.](https://en.wikipedia.org/wiki/Michael_T._Goodrich "Michael T. Goodrich");
    [Tamassia, Roberto](https://en.wikipedia.org/wiki/Roberto_Tamassia "Roberto Tamassia")
    (2006), "9.1 The Map Abstract Data Type", _Data Structures & Algorithms in
    Java_ (4th ed.), Wiley, pp. 368–371
15. [Mehlhorn, Kurt](https://en.wikipedia.org/wiki/Kurt_Mehlhorn "Kurt Mehlhorn");
    [Sanders, Peter](https://en.wikipedia.org/wiki/Peter_Sanders_(computer_scientist) "Peter Sanders (computer scientist)")
    (2008), "4 Hash Tables and Associative Arrays",
    [_Algorithms and Data Structures: The Basic Toolbox_](http://people.mpi-inf.mpg.de/~mehlhorn/ftp/Toolbox/HashTables.pdf)
    (PDF), Springer, pp. 81–98
16. [Douglas Comer](https://en.wikipedia.org/wiki/Douglas_Comer "Douglas Comer"),
    [Computer Networks and Internets](https://books.google.com/books?id=tm-evHmOs3oC&dq=%22network+bandwidth%22+%22computer+networks%22&pg=PA99),
    page 99 ff, Prentice Hall 2008.
17. Fred Halsall,
    [to data+communications and computer networks](https://books.google.com/books?id=HrXbAAAAMAAJ&q=%100data+bandwidth%100+Introduction),
    page 108, Addison-Wesley, 1985.
18. [Cisco Networking Academy Program: CCNA 1 and 2 companion guide, Volym 1–2](https://books.google.com/books?id=7gqsZmr5HJcC&q=+0digital+bandwidth+0+%22),
    Cisco Academy 2003
19. Behrouz A. Forouzan, _Data communications and networking_, McGraw-Hill, 2007
20. Fleming, Philip J.; Wallace, John J. (1986-03-01). "How not to lie with
    statistics: the correct way to summarize benchmark results". _Communications
    of the ACM_. **29** (3): 218–221.
    [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
    [10.1145/5666.5673](https://doi.org/10.1145%2F5666.5673).
    [ISSN](https://en.wikipedia.org/wiki/ISSN_(identifier) "ISSN (identifier)")
    [0001-0782](https://www.worldcat.org/issn/0001-0782).
    [S2CID](https://en.wikipedia.org/wiki/S2CID_(identifier) "S2CID (identifier)")
    [1047380](https://api.semanticscholar.org/CorpusID:1047380).
21. Breur, Tom (July 2016).
    ["Statistical Power Analysis and the contemporary "crisis" in social sciences"](https://doi.org/10.1057%2Fs41270-016-0001-3).
    _Journal of Marketing Analytics_. **4** (2–3): 61–65.
    [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
    [10.1057/s41270-016-0001-3](https://doi.org/10.1057%2Fs41270-016-0001-3).
    [ISSN](https://en.wikipedia.org/wiki/ISSN_(identifier) "ISSN (identifier)")
    [2050-3318](https://www.worldcat.org/issn/2050-3318).
22. [Bachmann, Paul](https://en.wikipedia.org/wiki/Paul_Bachmann "Paul Bachmann")
    (1894).
    [_Analytische Zahlentheorie_](https://archive.org/stream/dieanalytischeza00bachuoft#page/402/mode/2up)
    \ [_Analytic Number Theory_\] (in German). Vol. 2. Leipzig: Teubner.
23. [Landau, Edmund](https://en.wikipedia.org/wiki/Edmund_Landau "Edmund Landau")
    (1909).
    [_Handbuch der Lehre von der Verteilung der Primzahlen_](https://archive.org/details/handbuchderlehre01landuoft)
    \ [_Handbook on the theory of the distribution of the primes_\] (in German).
    Leipzig: B. G. Teubner. p. 883.
24. Williams, Jr., Louis F. (22 April 1976).
    [_A modification to the half-interval search (binary search) method_](https://dl.acm.org/citation.cfm?doid=503561.503582).
    Proceedings of the 14th ACM Southeast Conference. ACM. pp. 95–101.
    [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
    [10.1145/503561.503582](https://doi.org/10.1145%2F503561.503582).
    [Archived](https://web.archive.org/web/20170312215255/http://dl.acm.org/citation.cfm?doid=503561.503582)
    from the original on 12 March 2017. Retrieved 29 June 2018.
25. [Knuth 1998](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFKnuth1998),
    §6.2.1 ("Searching an ordered table"), subsection "Binary search".
26. [Butterfield & Ngondi 2016](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFButterfieldNgondi2016),
    p. 46.
27. [Cormen, Thomas H.](https://en.wikipedia.org/wiki/Thomas_H._Cormen "Thomas H. Cormen");
    [Leiserson, Charles E.](https://en.wikipedia.org/wiki/Charles_E._Leiserson "Charles E. Leiserson");
    [Rivest, Ronald L.](https://en.wikipedia.org/wiki/Ron_Rivest "Ron Rivest");
    [Stein, Clifford](https://en.wikipedia.org/wiki/Clifford_Stein "Clifford Stein")
    (2009) \ [1990\].
    [_Introduction to Algorithms_](https://en.wikipedia.org/wiki/Introduction_to_Algorithms "Introduction to Algorithms")
    (3rd ed.). MIT Press and McGraw-Hill. p. 39.
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [0-262-03384-4](https://en.wikipedia.org/wiki/Special:BookSources/0-262-03384-4 "Special:BookSources/0-262-03384-4").
28. Rowan Garnier; John Taylor (2009).
    [_Discrete Mathematics: Proofs, Structures and Applications, Third Edition_](https://books.google.com/books?id=WnkZSSc4IkoC&pg=PA620).
    CRC Press. p. 620.
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [978-1-4398-1280-8](https://en.wikipedia.org/wiki/Special:BookSources/978-1-4398-1280-8 "Special:BookSources/978-1-4398-1280-8").
29. Steven S Skiena (2009).
    [_The Algorithm Design Manual_](https://books.google.com/books?id=7XUSn0IKQEgC&pg=PA77).
    Springer Science & Business Media. p. 77.
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [978-1-84800-070-4](https://en.wikipedia.org/wiki/Special:BookSources/978-1-84800-070-4 "Special:BookSources/978-1-84800-070-4").
30. Mackenzie, Charles E. (1980).
    [_Coded Character Sets, History and Development_](https://books.google.com/books?id=6-tQAAAAMAAJ).
    _The Systems Programming Series_ (1 ed.).
    [Addison-Wesley Publishing Company, Inc.](https://en.wikipedia.org/wiki/Addison-Wesley_Publishing_Company,_Inc. "Addison-Wesley Publishing Company, Inc.")
    p. x.
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [978-0-201-14460-4](https://en.wikipedia.org/wiki/Special:BookSources/978-0-201-14460-4 "Special:BookSources/978-0-201-14460-4").
    [LCCN](https://en.wikipedia.org/wiki/LCCN_(identifier) "LCCN (identifier)")
    [77-90165](https://lccn.loc.gov/77-90165).
    [Archived](https://web.archive.org/web/20161118230039/https://books.google.com/books?id=6-tQAAAAMAAJ)
    from the original on 18 November 2016. Retrieved 22 May 2016. [\
    [1\]](https://web.archive.org/web/20160526172151/https://textfiles.meulie.net/bitsaved/Books/Mackenzie_CodedCharSets.pdf)
31. Gupta, Prakash C (2006).
    [_Data Communications and Computer Networks_](https://books.google.com/books?id=-kNn_p6WA38C&q=bit+%22rate+R%22&pg=PA21).
    PHI Learning.
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [9788120328464](https://en.wikipedia.org/wiki/Special:BookSources/9788120328464 "Special:BookSources/9788120328464").
    Retrieved 10 July 2011.
32. James D. Murray; William vanRyper (April 1996).
    [_Encyclopedia of Graphics File Formats_](https://archive.org/details/mac_Graphics_File_Formats_Second_Edition_1996)
    (Second ed.).
    [O'Reilly](https://en.wikipedia.org/wiki/O%27Reilly_Media "O'Reilly Media").
    bmp.
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [978-1-56592-161-0](https://en.wikipedia.org/wiki/Special:BookSources/978-1-56592-161-0 "Special:BookSources/978-1-56592-161-0").
    Retrieved 2014-03-07.
33. James D. Murray; William vanRyper (April 1996).
    [_Encyclopedia of Graphics File Formats_](https://archive.org/details/mac_Graphics_File_Formats_Second_Edition_1996)
    (Second ed.).
    [O'Reilly](https://en.wikipedia.org/wiki/O%27Reilly_Media "O'Reilly Media").
    os2bmp.
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [978-1-56592-161-0](https://en.wikipedia.org/wiki/Special:BookSources/978-1-56592-161-0 "Special:BookSources/978-1-56592-161-0").
    Retrieved 2014-03-07.
34. [Gries, David](https://en.wikipedia.org/wiki/David_Gries "David Gries");
    [Schneider, Fred B.](https://en.wikipedia.org/wiki/Fred_B._Schneider "Fred B. Schneider")
    (1993), "Chapter 2. Boolean Expressions",
    [_A Logical Approach to Discrete Math_](https://books.google.com/books?id=ZWTDQ6H6gsUC&pg=PA25),
    Monographs in Computer Science, Springer, p. 25ff,
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [9780387941158](https://en.wikipedia.org/wiki/Special:BookSources/9780387941158 "Special:BookSources/9780387941158")
35. [Blaauw, Gerrit Anne](https://en.wikipedia.org/wiki/Gerrit_Anne_Blaauw "Gerrit Anne Blaauw");
    [Brooks, Jr., Frederick Phillips](https://en.wikipedia.org/wiki/Frederick_Phillips_Brooks,_Jr. "Frederick Phillips Brooks, Jr.");
    [Buchholz, Werner](https://en.wikipedia.org/wiki/Werner_Buchholz "Werner Buchholz")
    (1962),
    ["4: Natural Data Units"](http://archive.computerhistory.org/resources/text/IBM/Stretch/pdfs/Buchholz_102636426.pdf)
    (PDF), in
    [Buchholz, Werner](https://en.wikipedia.org/wiki/Werner_Buchholz "Werner Buchholz")
    (ed.), _Planning a Computer System – Project Stretch_,
    [McGraw-Hill Book Company, Inc.](https://en.wikipedia.org/wiki/McGraw-Hill_Book_Company,_Inc. "McGraw-Hill Book Company, Inc.")
    / The Maple Press Company, York, PA., pp. 39–40,
    [LCCN](https://en.wikipedia.org/wiki/LCCN_(identifier) "LCCN (identifier)")
    [61-10466](https://lccn.loc.gov/61-10466),
    [archived](https://web.archive.org/web/20170403014651/http://archive.computerhistory.org/resources/text/IBM/Stretch/pdfs/Buchholz_102636426.pdf)
    (PDF) from the original on 2017-04-03, retrieved 2017-04-03, \ […\] Terms
    used here to describe the structure imposed by the machine design, in
    addition to _ [bit](https://en.wikipedia.org/wiki/Bit "Bit")_, are listed
    below. _Byte_ denotes a group of bits used to encode a character, or the
    number of bits transmitted in parallel to and from input-output units. A
    term other than _
    [character](https://en.wikipedia.org/wiki/Character_(computing) "Character
    (computing)")_ is used here because a given character may be represented in
    different applications by more than one code, and different codes may use
    different numbers of bits (i.e., different byte sizes). In input-output
    transmission the grouping of bits may be completely arbitrary and have no
    relation to actual characters. (The term is coined from _
    [bite](https://en.wikipedia.org/wiki/Bite "Bite")_, but respelled to avoid
    accidental mutation to \_bit_.) A _
    [word](https://en.wikipedia.org/wiki/Word_(unit) "Word (unit)")_ consists of
    the number of data bits transmitted in parallel from or to memory in one
    memory cycle.
    [Word size](https://en.wikipedia.org/wiki/Word_size "Word size") is thus
    defined as a structural property of the memory. (The term _
    [catena](https://en.wikipedia.org/wiki/Catena_(unit) "Catena (unit)")_ was
    coined for this purpose by the designers of the
    [Bull](https://en.wikipedia.org/wiki/Groupe_Bull "Groupe Bull")
    [GAMMA 60](https://en.wikipedia.org/wiki/Bull_Gamma_60 "Bull Gamma 60") \
    [[Fr](https://fr.wikipedia.org/wiki/Gamma_60 "fr:Gamma 60")\] computer.) _
    [Block](https://en.wikipedia.org/wiki/Block_(data_storage) "Block (data storage)")\_
    refers to the number of words transmitted to or from an input-output unit in
    response to a single input-output instruction. Block size is a structural
    property of an input-output unit; it may have been fixed by the design or
    left to be varied by the program. \ […\]
36. [Bemer, Robert William](https://en.wikipedia.org/wiki/Robert_William_Bemer "Robert William Bemer")
    (1959), "A proposal for a generalized card code of 256 characters", _
    [Communications of the ACM](https://en.wikipedia.org/wiki/Communications_of_the_ACM "Communications of the ACM")_,
    **2** (9): 19–23,
    [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
    [10.1145/368424.368435](https://doi.org/10.1145%2F368424.368435),
    [S2CID](https://en.wikipedia.org/wiki/S2CID_(identifier) "S2CID (identifier)")
    [36115735](https://api.semanticscholar.org/CorpusID:36115735)
37. ["What is a callback function?"](https://stackoverflow.com/a/7549753/653708).
    _Stack Overflow_. Retrieved 2018-05-16.
38. Weik, Martin H. (1961).
    [A Third Survey of Domestic Electronic Digital Computing Systems](http://ed-thelen.org/comp-hist/BRL61.html)
    (Report).
    [Ballistic Research Laboratory](https://en.wikipedia.org/wiki/Ballistic_Research_Laboratory "Ballistic Research Laboratory").
39. Kuck, David (1978). _Computers and Computations, Vol 1_. John Wiley & Sons,
    Inc. p. 12.
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [978-0471027164](https://en.wikipedia.org/wiki/Special:BookSources/978-0471027164 "Special:BookSources/978-0471027164").
40. ["Definition of CHARACTER"](http://www.merriam-webster.com/dictionary/character).
    _www.merriam-webster.com_. Retrieved 1 April 2018.
41. [Gamma et al. 1995](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFGammaHelmJohnsonVlissides1995),
    p. 14.
42. ^
    [Jump up to: <sup><i><b>a</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-FOOTNOTEBruce20022.1_Objects,_classes,_and_object_types,_https://books.google.com/books?id=9NGWq3K1RwUC&pg=PA18_42-0)
    [<sup><i><b>b</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-FOOTNOTEBruce20022.1_Objects,_classes,_and_object_types,_https://books.google.com/books?id=9NGWq3K1RwUC&pg=PA18_42-1)
    [Bruce 2002](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFBruce2002),
    2.1 Objects, classes, and object types,
    [https://books.google.com/books?id=9NGWq3K1RwUC&pg=PA18](https://books.google.com/books?id=9NGWq3K1RwUC&pg=PA18).
43. Sadoski, Darleen. _Client/Server Software Architectures – An Overview_,
    Software Technology Roadmap, 1997-08-02. Retrieved on 2008-09-16.
44. [Mills, H.](https://en.wikipedia.org/wiki/Harlan_Mills "Harlan Mills"); M.
    Dyer; R. Linger (September 1987). "Cleanroom Software Engineering". _IEEE
    Software_. **4** (5): 19–25.
    [CiteSeerX](https://en.wikipedia.org/wiki/CiteSeerX_(identifier) "CiteSeerX (identifier)")
    [10.1.1.467.2435](https://citeseerx.ist.psu.edu/viewdoc/summary?doi=10.1.1.467.2435).
    [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
    [10.1109/MS.1987.231413](https://doi.org/10.1109%2FMS.1987.231413).
    [S2CID](https://en.wikipedia.org/wiki/S2CID_(identifier) "S2CID (identifier)")
    [383170](https://api.semanticscholar.org/CorpusID:383170).
45. Sussman and Steele. "Scheme: An interpreter for extended lambda calculus".
    "... a data structure containing a lambda expression, and an environment to
    be used when that lambda expression is applied to arguments." (
    [Wikisource](https://en.wikisource.org/wiki/Page:Scheme_-_An_interpreter_for_extended_lambda_calculus.djvu/22 "s:Page:Scheme - An interpreter for extended lambda calculus.djvu/22"))
46. ^
    [Jump up to: <sup><i><b>a</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-tumblr2014_47-0)
    [<sup><i><b>b</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-tumblr2014_47-1)
    Shaun Bebbington (2014).
    ["What is coding"](https://yearofcodes.tumblr.com/what-is-coding). Retrieved
    2014-03-03.
47. ^
    [Jump up to: <sup><i><b>a</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-tumblr1_48-0)
    [<sup><i><b>b</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-tumblr1_48-1)
    Shaun Bebbington (2014).
    ["What is programming"](https://yearofcodes.tumblr.com/what-is-programming).
    Retrieved 2014-03-03.
48. Cognitive science is an interdisciplinary field of researchers from
    Linguistics, psychology, neuroscience, philosophy, computer science, and
    anthropology that seek to understand the mind.
    [How We Learn: Ask the Cognitive Scientist](http://www.aft.org/newspubs/periodicals/ae/summer2002/willingham.cfm)
49. [Thagard, Paul](https://en.wikipedia.org/wiki/Thagard,_Paul "Thagard, Paul"),
    [Cognitive Science](http://plato.stanford.edu/archives/fall2008/entries/cognitive-science/),
    _
    [The Stanford Encyclopedia of Philosophy](https://en.wikipedia.org/wiki/The_Stanford_Encyclopedia_of_Philosophy "The Stanford Encyclopedia of Philosophy")_
    (Fall 2008 Edition),
    [Edward N. Zalta](https://en.wikipedia.org/wiki/Edward_N._Zalta "Edward N. Zalta")
    (ed.).
50. PC Mag Staff (28 February 2017).
    ["Encyclopedia: Definition of Compiler"](https://www.pcmag.com/encyclopedia/term/40105).
    _PCMag.com_. Retrieved 28
    February 2017.<sup class="noprint Inline-Template"><span style="white-space: nowrap;">
    [<i><a href="https://en.wikipedia.org/wiki/Wikipedia:Link_rot"
    title="Wikipedia:Link rot"><span title="&nbsp;Dead link tagged March
    2022">permanent dead link</span></a></i>]</span></sup>
51. [Computation](http://www.merriam-webster.com/dictionary/computation) from
    the Free Merriam-Webster Dictionary
52. ["Computation: Definition and Synonyms from Answers.com"](https://web.archive.org/web/20090222005439/http://www.answers.com/topic/computation).
    _Answers.com_. Archived from
    [the original](http://www.answers.com/topic/computation) on 22
    February 2009. Retrieved 26 April 2017.
53. "NIH working definition of bioinformatics and computational biology" (PDF).
    Biomedical Information Science and Technology Initiative. 17 July 2000.
    Archived from the original (PDF) on 5 September 2012. Retrieved 18
    August 2012.
54. "About the CCMB". Center for Computational Molecular Biology. Retrieved 18
    August 2012.
55. Melnik, Roderick, ed. (2015). _Mathematical and Computational Modeling: With
    Applications in Natural and Social Sciences, Engineering, and the Arts_.
    Wiley.
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [978-1-118-85398-6](https://en.wikipedia.org/wiki/Special:BookSources/978-1-118-85398-6 "Special:BookSources/978-1-118-85398-6").
56. Trappenberg, Thomas P. (2002).
    [_Fundamentals of Computational Neuroscience_](https://archive.org/details/fundamentalscomp00ttra).
    United States: Oxford University Press Inc. p.
    [1](https://archive.org/details/fundamentalscomp00ttra/page/n16).
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [978-0-19-851582-1](https://en.wikipedia.org/wiki/Special:BookSources/978-0-19-851582-1 "Special:BookSources/978-0-19-851582-1").
57. What is computational neuroscience? Patricia S. Churchland, Christof Koch,
    Terrence J. Sejnowski. in Computational Neuroscience pp.46-55. Edited by
    Eric L. Schwartz. 1993. MIT Press
    ["Computational Neuroscience - the MIT Press"](https://web.archive.org/web/20110604124206/http://mitpress.mit.edu/catalog/item/default.asp?ttype=2&tid=7195).
    Archived from
    [the original](http://mitpress.mit.edu/catalog/item/default.asp?ttype=2&tid=7195)
    on 2011-06-04. Retrieved 2009-06-11.
58. Press, The MIT.
    ["Theoretical Neuroscience"](https://web.archive.org/web/20180531150713/http://mitpress.mit.edu/books/theoretical-neuroscience).
    _The MIT Press_. Archived from
    [the original](https://mitpress.mit.edu/books/theoretical-neuroscience) on
    2018-05-31. Retrieved 2018-05-24.
59. Gerstner, W.; Kistler, W.; Naud, R.; Paninski, L. (2014). _Neuronal
    Dynamics_. Cambridge, UK:
    [Cambridge University Press](https://en.wikipedia.org/wiki/Cambridge_University_Press "Cambridge University Press").
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [9781107447615](https://en.wikipedia.org/wiki/Special:BookSources/9781107447615 "Special:BookSources/9781107447615").
60. Thijssen, Jos (2007). Computational Physics. Cambridge University Press.
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [978-0521833462](https://en.wikipedia.org/wiki/Special:BookSources/978-0521833462 "Special:BookSources/978-0521833462").
61. Clements, Alan. _Principles of Computer Hardware_ (Fourth ed.). p. 1.
    Architecture describes the internal organization of a computer in an
    abstract way; that is, it defines the capabilities of the computer and its
    programming model. You can have two computers that have been constructed in
    different ways with different technologies but with the same architecture.
62. Hennessy, John; Patterson, David. _Computer Architecture: A Quantitative
    Approach_ (Fifth ed.). p. 11. This task has many aspects, including
    instruction set design, functional organization, logic design, and
    implementation.
63. ^
    [Jump up to: <sup><i><b>a</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-Patterson_64-0)
    [<sup><i><b>b</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-Patterson_64-1)
    [<sup><i><b>c</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-Patterson_64-2)
    Patterson, David A.; Hennessy, John L. (2005).
    [_Computer Organization and Design: The Hardware/Software Interface_](https://archive.org/details/isbn_9781558606043)
    (3rd ed.). [Amsterdam](https://en.wikipedia.org/wiki/Amsterdam "Amsterdam"):
    [Morgan Kaufmann Publishers](https://en.wikipedia.org/wiki/Morgan_Kaufmann_Publishers "Morgan Kaufmann Publishers").
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [1-55860-604-1](https://en.wikipedia.org/wiki/Special:BookSources/1-55860-604-1 "Special:BookSources/1-55860-604-1").
    [OCLC](https://en.wikipedia.org/wiki/OCLC_(identifier) "OCLC (identifier)")
    [56213091](https://www.worldcat.org/oclc/56213091).
64. Bynum, Terrell Ward.
    ["A Very Short History of Computer Ethics"](https://web.archive.org/web/20080418122849/http://www.southernct.edu/organizations/rccs/resources/research/introduction/bynum_shrt_hist.html).
    Southern Connecticut Wein University. Archived from
    [the original](http://www.southernct.edu/organizations/rccs/resources/research/introduction/bynum_shrt_hist.html#maner)
    on 2008-04-18. Retrieved 2011-01-05.
65. Rochkind, Marc J. (2004). _Advanced Unix Programming, Second Edition_.
    Addison-Wesley. p. 1.1.2.
66. ["WordNet Search—3.1"](http://wordnetweb.princeton.edu/perl/webwn?s=computer%20scientist).
    Wordnetweb.princeton.edu. Retrieved 14 May 2012.
67. Orsucci, Franco F.; Sala, Nicoletta (2008).
    [_Reflexing Interfaces: The Complex Coevolution of Information Technology Ecosystems, Information Science Reference_](https://archive.org/details/reflexinginterfa00orsu_453).
    p.  [335](https://archive.org/details/reflexinginterfa00orsu_453/page/n359).
68. Schatz, Daniel; Bashroush, Rabih; Wall, Julie (2017).
    ["Towards a More Representative Definition of Cyber Security"](https://commons.erau.edu/jdfsl/vol12/iss2/8/).
    _Journal of Digital Forensics, Security and Law_. **12** (2).
    [ISSN](https://en.wikipedia.org/wiki/ISSN_(identifier) "ISSN (identifier)")
    [1558-7215](https://www.worldcat.org/issn/1558-7215).
69. Dana H. Ballard; Christopher M. Brown (1982). Computer Vision. Prentice
    Hall.
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [0-13-165316-4](https://en.wikipedia.org/wiki/Special:BookSources/0-13-165316-4 "Special:BookSources/0-13-165316-4").
70. Huang, T. (1996-11-19). Vandoni, Carlo, E, ed. Computer Vision : Evolution
    And Promise (PDF). 19th CERN School of Computing. Geneva: CERN. pp. 21–25.
    doi:10.5170/CERN-1996-008.21.
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [978-9290830955](https://en.wikipedia.org/wiki/Special:BookSources/978-9290830955 "Special:BookSources/978-9290830955").
71. Milan Sonka; Vaclav Hlavac; Roger Boyle (2008). Image Processing, Analysis,
    and Machine Vision. Thomson.
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [0-495-08252-X](https://en.wikipedia.org/wiki/Special:BookSources/0-495-08252-X "Special:BookSources/0-495-08252-X").
72. ["Computing Curriculum 2020"](https://cc2020.nsparc.msstate.edu/wp-content/uploads/2020/11/15September2020-CC2020-Report-v43.pdf)
    (PDF).
73. Lamport, Leslie (July 1978).
    ["Time, Clocks, and the Ordering of Events in a Distributed System"](http://research.microsoft.com/en-us/um/people/lamport/pubs/time-clocks.pdf)
    (PDF). _Communications of the ACM_. **21** (7): 558–565.
    [CiteSeerX](https://en.wikipedia.org/wiki/CiteSeerX_(identifier) "CiteSeerX (identifier)")
    [10.1.1.142.3682](https://citeseerx.ist.psu.edu/viewdoc/summary?doi=10.1.1.142.3682).
    [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
    [10.1145/359545.359563](https://doi.org/10.1145%2F359545.359563).
    [S2CID](https://en.wikipedia.org/wiki/S2CID_(identifier) "S2CID (identifier)")
    [215822405](https://api.semanticscholar.org/CorpusID:215822405). Retrieved 4
    February 2016.
74. Paul E. Black (ed.), entry for _data structure_ in _
    [Dictionary of Algorithms and Data Structures](https://en.wikipedia.org/wiki/Dictionary_of_Algorithms_and_Data_Structures "Dictionary of Algorithms and Data Structures").
    US
    [National Institute of Standards and Technology](https://en.wikipedia.org/wiki/National_Institute_of_Standards_and_Technology "National Institute of Standards and Technology").15
    December 2004. Accessed 4 Oct 2011._
75. Entry _data structure_ in the
    [Encyclopædia Britannica](https://en.wikipedia.org/wiki/Encyclop%C3%A6dia_Britannica "Encyclopædia Britannica")
    (2009)
    [Online entry](http://www.britannica.com/EBchecked/topic/152190/data-structure)
    Accessed 4 Oct 2011.
76. [Sussman, Gerald Jay](https://en.wikipedia.org/wiki/Gerald_Jay_Sussman "Gerald Jay Sussman");
    [Steele, Guy L. Jr.](https://en.wikipedia.org/wiki/Guy_L._Steele,_Jr. "Guy L. Steele, Jr.")
    (December 1975).
    ["Scheme: An interpreter for extended lambda calculus"](https://en.wikisource.org/wiki/Scheme:_An_interpreter_for_extended_lambda_calculus)
    . _ [AI Memo](https://en.wikipedia.org/wiki/AI_Memo "AI Memo")_.
    **349**: 19. That is, in this **continuation-passing programming style**, _a
    function always "returns" its result by "sending" it to another function_.
    This is the key idea.
77. [Sussman, Gerald Jay](https://en.wikipedia.org/wiki/Gerald_Jay_Sussman "Gerald Jay Sussman");
    [Steele, Guy L. Jr.](https://en.wikipedia.org/wiki/Guy_L._Steele,_Jr. "Guy L. Steele, Jr.")
    (December 1998).
    ["Scheme: A Interpreter for Extended Lambda Calculus"](http://www.brics.dk/~hosc/local/HOSC-11-4-pp405-439.pdf)
    (reprint). _Higher-Order and Symbolic Computation_. **11** (4): 405–439.
    [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
    [10.1023/A:1010035624696](https://doi.org/10.1023%2FA%3A1010035624696).
    [S2CID](https://en.wikipedia.org/wiki/S2CID_(identifier) "S2CID (identifier)")
    [18040106](https://api.semanticscholar.org/CorpusID:18040106). We believe
    that this was the first occurrence of the term "**continuation-passing
    style**" in the literature. It has turned out to be an important concept in
    source code analysis and transformation for compilers and other
    metaprogramming tools. It has also inspired a set of other "styles" of
    program expression.
78. ["Frequently Asked Questions"](https://creativecommons.org/faq/). Creative
    Commons. 4 August 2016. Retrieved 20 December 2011.
79. [Rivest, Ronald L.](https://en.wikipedia.org/wiki/Ron_Rivest "Ron Rivest")
    (1990). "Cryptography". In J. Van Leeuwen (ed.). _Handbook of Theoretical
    Computer Science_. Vol. 1. Elsevier.
80. Bellare, Mihir; Rogaway, Phillip (21 September 2005). "Introduction".
    _Introduction to Modern Cryptography_. p. 10.
81. Menezes, A.J.; van Oorschot, P.C.; Vanstone, S.A. (1997).
    [_Handbook of Applied Cryptography_](https://archive.org/details/handbookofapplie0000mene).
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [978-0-8493-8523-0](https://en.wikipedia.org/wiki/Special:BookSources/978-0-8493-8523-0 "Special:BookSources/978-0-8493-8523-0").
82. [Eric S. Raymond](https://en.wikipedia.org/wiki/Eric_S._Raymond "Eric S. Raymond").
    ["daemon"](http://catb.org/~esr/jargon/html/D/daemon.html). _
    [The Jargon File](https://en.wikipedia.org/wiki/Jargon_File "Jargon File")_.
    Retrieved 2008-10-22.
83. James Glanz (September 22, 2012).
    ["Power, Pollution and the Internet"](https://www.nytimes.com/2012/09/23/technology/data-centers-waste-vast-amounts-of-energy-belying-industry-image.html).
    _The New York Times_. Retrieved 2012-09-25.
84. ^
    [Jump up to: <sup><i><b>a</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-acm_85-0)
    [<sup><i><b>b</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-acm_85-1)
    [<sup><i><b>c</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-acm_85-2)
    ["Data Mining Curriculum"](http://www.kdd.org/curriculum/index.html).
    [ACM](https://en.wikipedia.org/wiki/Association_for_Computing_Machinery "Association for Computing Machinery")
    [SIGKDD](https://en.wikipedia.org/wiki/SIGKDD "SIGKDD"). 2006-04-30.
    Retrieved 2014-01-27.
85. Clifton, Christopher (2010).
    ["Encyclopædia Britannica: Definition of Data Mining"](http://www.britannica.com/EBchecked/topic/1056150/data-mining).
    Retrieved 2010-12-09.
86. [Hastie, Trevor](https://en.wikipedia.org/wiki/Trevor_Hastie "Trevor Hastie");
    [Tibshirani, Robert](https://en.wikipedia.org/wiki/Robert_Tibshirani "Robert Tibshirani");
    [Friedman, Jerome](https://en.wikipedia.org/wiki/Jerome_H._Friedman "Jerome H. Friedman")
    (2009).
    ["The Elements of Statistical Learning: Data Mining, Inference, and Prediction"](https://web.archive.org/web/20091110212529/http://www-stat.stanford.edu/~tibs/ElemStatLearn/).
    Archived from
    [the original](http://www-stat.stanford.edu/~tibs/ElemStatLearn/) on
    2009-11-10. Retrieved 2012-08-07.
87. Han, Jaiwei; Kamber, Micheline; Pei, Jian (2011). _Data Mining: Concepts and
    Techniques_ (3rd ed.). Morgan Kaufmann.
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [978-0-12-381479-1](https://en.wikipedia.org/wiki/Special:BookSources/978-0-12-381479-1 "Special:BookSources/978-0-12-381479-1").
88. Fayyad, Usama; Piatetsky-Shapiro, Gregory; Smyth, Padhraic (1996). "From
    Data Mining to Knowledge Discovery in Databases" (PDF). Retrieved 17
    December 2008.
89. Dhar, V. (2013).
    ["Data science and prediction"](http://cacm.acm.org/magazines/2013/12/169933-data-science-and-prediction/fulltext).
    _Communications of the ACM_. **56** (12): 64–73.
    [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
    [10.1145/2500499](https://doi.org/10.1145%2F2500499).
    [S2CID](https://en.wikipedia.org/wiki/S2CID_(identifier) "S2CID (identifier)")
    [6107147](https://api.semanticscholar.org/CorpusID:6107147).
90. [Jeff Leek](https://en.wikipedia.org/wiki/Jeffrey_T._Leek "Jeffrey T. Leek")
    (2013-12-12).
    ["The key word in "Data Science" is not Data, it is Science"](https://web.archive.org/web/20140102194117/http://simplystatistics.org/2013/12/12/the-key-word-in-data-science-is-not-data-it-is-science/).
    Simply Statistics. Archived from
    [the original](http://simplystatistics.org/2013/12/12/the-key-word-in-data-science-is-not-data-it-is-science/)
    on 2014-01-02. Retrieved 2018-12-05.
91. Hayashi, Chikio (1998-01-01).
    ["What is Data Science? Fundamental Concepts and a Heuristic Example"](https://www.springer.com/book/9784431702085).
    In Hayashi, Chikio; Yajima, Keiji; Bock, Hans-Hermann; Ohsumi, Noboru;
    Tanaka, Yutaka; Baba, Yasumasa (eds.). _Data Science, Classification, and
    Related Methods_. Studies in Classification, Data Analysis, and Knowledge
    Organization. Springer Japan. pp. 40–51.
    [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
    [10.1007/978-4-431-65950-1_3](https://doi.org/10.1007%2F978-4-431-65950-1_3).
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [9784431702085](https://en.wikipedia.org/wiki/Special:BookSources/9784431702085 "Special:BookSources/9784431702085").
92. [Cormen, Thomas H.](https://en.wikipedia.org/wiki/Thomas_H._Cormen "Thomas H. Cormen");
    [Leiserson, Charles E.](https://en.wikipedia.org/wiki/Charles_E._Leiserson "Charles E. Leiserson");
    [Rivest, Ronald L.](https://en.wikipedia.org/wiki/Ron_Rivest "Ron Rivest");
    [Stein, Clifford](https://en.wikipedia.org/wiki/Clifford_Stein "Clifford Stein")
    (2009) \ [1990\].
    [_Introduction to Algorithms_](https://en.wikipedia.org/wiki/Introduction_to_Algorithms "Introduction to Algorithms")
    (3rd ed.). MIT Press and McGraw-Hill.
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [0-262-03384-4](https://en.wikipedia.org/wiki/Special:BookSources/0-262-03384-4 "Special:BookSources/0-262-03384-4").
93. Black, Paul E. (15 December 2004).
    ["data structure"](https://xlinux.nist.gov/dads/HTML/datastructur.html). In
    Pieterse, Vreda; Black, Paul E. (eds.). _Dictionary of Algorithms and Data
    Structures \ [online\]_.
    [National Institute of Standards and Technology](https://en.wikipedia.org/wiki/National_Institute_of_Standards_and_Technology "National Institute of Standards and Technology").
    Retrieved 2018-11-06.
94. ["Data structure"](https://www.britannica.com/technology/data-structure).
    _Encyclopaedia Britannica_. 17 April 2017. Retrieved 2018-11-06.
95. Wegner, Peter; Reilly, Edwin D. (2003-08-29).
    [_Encyclopedia of Computer Science_](http://dl.acm.org/citation.cfm?id=1074100.1074312).
    Chichester, UK: John Wiley and Sons. pp. 507–512.
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [978-0470864128](https://en.wikipedia.org/wiki/Special:BookSources/978-0470864128 "Special:BookSources/978-0470864128").
96. .mw-parser-output .citation{word-wrap:break-word}.mw-parser-output
    .citation:target{background-color:rgba(0,127,255,0.133)}
    [type](https://foldoc.org/type) at the _
    [Free On-line Dictionary of Computing](https://en.wikipedia.org/wiki/Free_On-line_Dictionary_of_Computing "Free On-line Dictionary of Computing")_
97. Shaffer, C. A. (2011). _Data Structures & Algorithm Analysis in C++_
    (3rd ed.). Mineola, NY: Dover. 1.2.
    [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
    [978-0-486-48582-9](https://en.wikipedia.org/wiki/Special:BookSources/978-0-486-48582-9 "Special:BookSources/978-0-486-48582-9").
98. ^
    [Jump up to: <sup><i><b>a</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-c11_99-0)
    [<sup><i><b>b</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-c11_99-1)
    [<sup><i><b>c</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-c11_99-2)
    "A declaration specifies the interpretation and attributes of a set of
    identifiers. A _definition_ of an identifier is a declaration for that
    identifier that:

- for an object \ [variable or constant\], causes storage to be reserved for
  that object;
- for a function, includes the function body;
- for an enumeration constant, is the (only) declaration of the identifier;
- for a typedef name, is the first (or only) declaration of the identifier."

C11 specification, 6.7: Declarations, paragraph 5.

99. Mike Banahan.
    ["2.5. Declaration of variables"](http://publications.gbdirect.co.uk/c_book/chapter2/variable_declaration.html).
    GBdirect. Retrieved 2011-06-08. \ [A\] declaration \ [...\] introduces just
    the name and type of something but allocates no storage\ [...\].
100. Stewart Robinson (2004). _Simulation – The practice of model development
     and use_. Wiley.
101. ^
     [Jump up to: <sup><i><b>a</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-Coulouris_102-0)
     [<sup><i><b>b</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-Coulouris_102-1)
     Coulouris, George;
     [Jean Dollimore](https://en.wikipedia.org/wiki/Jean_Dollimore "Jean Dollimore");
     Tim Kindberg; Gordon Blair (2011). _Distributed Systems: Concepts and
     Design_ (5th ed.). Boston: Addison-Wesley.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-0-132-14301-1](https://en.wikipedia.org/wiki/Special:BookSources/978-0-132-14301-1 "Special:BookSources/978-0-132-14301-1").
102. Bjørner, Dines (2006). "The Tryptych of Software Engineering".
     [_Software Engineering 3 – Domains, Requirements, and Software Design_](https://www.springer.com/us/book/9783540211518)
     (book). Vol. I. Springer Verlag. p. 9.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-3-540-33653-2](https://en.wikipedia.org/wiki/Special:BookSources/978-3-540-33653-2 "Special:BookSources/978-3-540-33653-2").
     Retrieved 2016-12-19.
103. ["What is downloading? - Definition from WhatIs.com"](https://web.archive.org/web/20190905142601/https://searchnetworking.techtarget.com/definition/downloading).
     _SearchNetworkNexting_. Archived from
     [the original](http://searchnetworking.techtarget.com/definition/downloading)
     on 2019-09-05. Retrieved 2019-03-04.
104. ^
     [Jump up to: <sup><i><b>a</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-:1_105-0)
     [<sup><i><b>b</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-:1_105-1)
     Kessler, Gary (November 17, 2006).
     ["An Overview of Cryptography"](https://www.garykessler.net/library/crypto.html).
     _Princeton University_.
105. Vivek Gupta; Ethan Jackson; Shaz Qadeer; Sriram Rajamani (November 2012).
     ["P: Safe Asynchronous Event-Driven Programming"](https://www.microsoft.com/en-us/research/publication/p-safe-asynchronous-event-driven-programming/).
     _ [Microsoft](https://en.wikipedia.org/wiki/Microsoft "Microsoft")_.
     Retrieved 20 February 2017.
106. ["executable"](http://www.merriam-webster.com/dictionary/executable).
     _Merriam-Webster's Online Dictionary_.
     [Merriam-Webster](https://en.wikipedia.org/wiki/Merriam-Webster "Merriam-Webster").
     Retrieved 2008-07-19.
107. Justis, R. T. & Kreigsmann, B. (1979). The feasibility study as a tool for
     venture analysis. _Business Journal of Small Business Management_ 17 (1)
     35-42.
108. Georgakellos, D. A. & Marcis, A. M. (2009). Application of the semantic
     learning approach in the feasibility studies preparation training process.
     _Information Systems Management_ 26 (3) 231–240.
109. Young, G. I. M. (1970). Feasibility studies. _Appraisal Journal_ 38 (3)
     376-383.
110. R. W. Butler (2001-08-06).
     ["What is Formal Methods?"](http://shemesh.larc.nasa.gov/fm/fm-what.html).
     Retrieved 2006-11-16.
111. C. Michael Holloway.
     [_Why Engineers Should Consider Formal Methods_](https://web.archive.org/web/20061116210448/http://klabs.org/richcontent/verification/holloway/nasa-97-16dasc-cmh.pdf)
     (PDF). 16th Digital Avionics Systems Conference (27–30 October 1997).
     Archived from
     [the original](http://klabs.org/richcontent/verification/holloway/nasa-97-16dasc-cmh.pdf)
     (PDF) on 16 November 2006. Retrieved 2006-11-16.
112. Sanghavi, Alok (May 21, 2010). "What is formal verification?". _EE Times
     Asia_.
113. ["Declaration vs. expression style - HaskellWiki"](https://wiki.haskell.org/Declaration_vs._expression_style#Expression_style).
114. [Myerson, Roger B.](https://en.wikipedia.org/wiki/Roger_B._Myerson "Roger B. Myerson")
     (1991). _Game Theory: Analysis of Conflict,_
     [Harvard University Press](https://en.wikipedia.org/wiki/Harvard_University_Press "Harvard University Press"),
     p.  [1](https://books.google.com/books?id=E8WQFRCsNr0C&pg=PA1).
     Chapter-preview links, pp.
     [vii–xi](https://books.google.com/books?id=E8WQFRCsNr0C&pg=PR7).
115. [Cormen, Thomas H.](https://en.wikipedia.org/wiki/Thomas_H._Cormen "Thomas H. Cormen");
     [Leiserson, Charles E.](https://en.wikipedia.org/wiki/Charles_E._Leiserson "Charles E. Leiserson");
     [Rivest, Ronald L.](https://en.wikipedia.org/wiki/Ron_Rivest "Ron Rivest");
     [Stein, Clifford](https://en.wikipedia.org/wiki/Clifford_Stein "Clifford Stein")
     (2009) \ [1990\].
     [_Introduction to Algorithms_](https://en.wikipedia.org/wiki/Introduction_to_Algorithms "Introduction to Algorithms")
     (3rd ed.). MIT Press and McGraw-Hill. pp. 151–152.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [0-262-03384-4](https://en.wikipedia.org/wiki/Special:BookSources/0-262-03384-4 "Special:BookSources/0-262-03384-4").
116. Black (ed.), Paul E. (2004-12-14). Entry for _heap_ in _
     [Dictionary of Algorithms and Data Structures](https://en.wikipedia.org/wiki/Dictionary_of_Algorithms_and_Data_Structures "Dictionary of Algorithms and Data Structures")_.
     Online version. U.S.
     [National Institute of Standards and Technology](https://en.wikipedia.org/wiki/National_Institute_of_Standards_and_Technology "National Institute of Standards and Technology"),
     14 December 2004. Retrieved on 2017-10-08 from
     [https://xlinux.nist.gov/dads/HTML/heap.html](https://xlinux.nist.gov/dads/HTML/heap.html).
117. [Skiena, Steven](https://en.wikipedia.org/wiki/Steven_Skiena "Steven Skiena")
     (2008). "Searching and Sorting".
     [_The Algorithm Design Manual_](https://archive.org/details/algorithmdesignm00skie_772).
     Springer. p.
     [109](https://archive.org/details/algorithmdesignm00skie_772/page/n120).
     [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
     [10.1007/978-1-84800-070-4_4](https://doi.org/10.1007%2F978-1-84800-070-4_4).
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-1-84800-069-8](https://en.wikipedia.org/wiki/Special:BookSources/978-1-84800-069-8 "Special:BookSources/978-1-84800-069-8").
     \ [H\]eapsort is nothing but an implementation of selection sort using the
     right data structure.
118. _ISO/IEC/IEEE International Standard - Systems and software engineering_.
     ISO/IEC/IEEE 24765:2010(E). 2010. pp. vol., no., pp.1–418, 15 Dec. 2010.
119. [Martyn A Ould & Charles Unwin (ed), _Testing in Software Development_, BCS (1986), p71](https://books.google.com/books?id=utFCImZOTEIC&dq=integration+test&pg=PA73).
     Accessed 31 Oct 2014
120. World Intellectual Property Organization (WIPO) (2016).
     [_Understanding Industrial Property_](https://www.wipo.int/publications/en/details.jsp?id=4080).
     World Intellectual Property Organization.
     [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
     [10.34667/tind.28945](https://doi.org/10.34667%2Ftind.28945).
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [9789280525885](https://en.wikipedia.org/wiki/Special:BookSources/9789280525885 "Special:BookSources/9789280525885").
     Retrieved 2018-12-06.
121. ["Intellectual, industrial and commercial property | Fact Sheets on the European Union"](http://www.europarl.europa.eu/factsheets/en/sheet/36/intellectual-industrial-and-commercial-property).
     European Parliament. Retrieved 2018-12-06.
122. ["What are intellectual property rights?"](https://www.wto.org/english/tratop_e/trips_e/intel1_e.htm).
     _World Trade Organization_. World Trade Organization. Retrieved 2016-05-23.
123. "Intellectual property", _Black's Law Dictionary_, 10th ed. (2014).
124. ["Understanding Copyright and Related Rights"](https://www.wipo.int/edocs/pubdocs/en/wipo_pub_909_2016.pdf)
     (PDF). World Intellectual Property Organization. p. 4. Retrieved
     2018-12-06.
125. ["What is Intellectual Property?"](https://www.wipo.int/edocs/pubdocs/en/intproperty/450/wipo_pub_450.pdf)
     (PDF). World Intellectual Property Organization (WIPO). Retrieved
     2018-12-07.
126. ["Understanding Industrial Property"](https://www.wipo.int/edocs/pubdocs/en/wipo_pub_895_2016.pdf)
     (PDF). World Intellectual Property Organization (WIPO). Retrieved
     2018-12-07.
127. Anderson, Michael; Anderson, Susan Leigh (2007-12-15).
     ["Machine Ethics: Creating an Ethical Intelligent Agent"](https://ojs.aaai.org/index.php/aimagazine/article/view/2065).
     _AI Magazine_. **28** (4): 15.
     [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
     [10.1609/aimag.v28i4.2065](https://doi.org/10.1609%2Faimag.v28i4.2065).
     [ISSN](https://en.wikipedia.org/wiki/ISSN_(identifier) "ISSN (identifier)")
     [2371-9621](https://www.worldcat.org/issn/2371-9621).
     [S2CID](https://en.wikipedia.org/wiki/S2CID_(identifier) "S2CID (identifier)")
     [17033332](https://api.semanticscholar.org/CorpusID:17033332).
128. According to the definition given by
     [Russell & Norvig (2003](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFRussellNorvig2003),
     chpt. 2)
129. Hookway, B. (2014). "Chapter 1: The Subject of the Interface".
     [_Interface_](https://books.google.com/books?id=BQM_AwAAQBAJ). MIT Press.
     pp. 1–58.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [9780262525503](https://en.wikipedia.org/wiki/Special:BookSources/9780262525503 "Special:BookSources/9780262525503").
130. _IEEE 100 - The Authoritative Dictionary Of IEEE Standards Terms_. NYC, NY,
     USA: IEEE Press. 2000. pp. 574–575.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [9780738126012](https://en.wikipedia.org/wiki/Special:BookSources/9780738126012 "Special:BookSources/9780738126012").
131. Dunham, Ken; Melnick, Jim (2008).
     [_Malicious Bots: An Inside Look into the Cyber-Criminal Underground of the Internet_](https://archive.org/details/malicio_dun_2009_00_4004).
     CRC Press.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [9781420069068](https://en.wikipedia.org/wiki/Special:BookSources/9781420069068 "Special:BookSources/9781420069068").
132. [Gosling et al. 2014](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFGoslingJoySteeleBracha2014),
     p. 1.
133. ["Java is pure object oriented or not?"](https://stackoverflow.com/questions/12836522/java-is-pure-object-oriented-or-not).
     _Stack Overflow_. Retrieved 2019-05-24.
134. ["Write once, run anywhere?"](http://www.computerweekly.com/Articles/2002/05/02/186793/write-once-run-anywhere.htm).
     [Computer Weekly](https://en.wikipedia.org/wiki/Computer_Weekly "Computer Weekly").
     May 2, 2002. Retrieved 2009-07-27.
135. ["1.2 Design Goals of the Java™ Programming Language"](https://www.oracle.com/technetwork/java/intro-141325.html).
     Oracle. January 1, 1999.
     [Archived](https://web.archive.org/web/20130123204103/http://www.oracle.com/technetwork/java/intro-141325.html)
     from the original on January 23, 2013. Retrieved January 14, 2013.
136. [Knuth 1998](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFKnuth1998),
     §6.1 ("Sequential search").
137. IBM Corporation (1972).
     [_IBM OS Linkage Editor and Loader_](http://bitsavers.informatik.uni-stuttgart.de/pdf/ibm/360/os/R21.0_Mar72/GC28-6538-9_OS_Linkage_Editor_and_Loader_Release_21_Jan72.pdf)
     (PDF).
138. Abelson, Harold; Sussman, Gerald Jay (1996).
     [_Structure and Interpretation of Computer Programs_](https://en.wikipedia.org/wiki/Structure_and_Interpretation_of_Computer_Programs "Structure and Interpretation of Computer Programs").
     MIT Press.
139. The definition "without being explicitly programmed" is often attributed to
     [Arthur Samuel](https://en.wikipedia.org/wiki/Arthur_Samuel_(computer_scientist) "Arthur Samuel (computer scientist)"),
     who coined the term "machine learning" in 1959, but the phrase is not found
     verbatim in this publication, and may be a
     [paraphrase](https://en.wikipedia.org/wiki/Paraphrase "Paraphrase") that
     appeared later. Confer "Paraphrasing Arthur Samuel (1959), the question is:
     How can computers learn to solve problems without being explicitly
     programmed?" in Koza, John R.; Bennett, Forrest H.; Andre, David; Keane,
     Martin A. (1996). _Automated Design of Both the Topology and Sizing of
     Analog Electrical Circuits Using Genetic Programming_. Artificial
     Intelligence in Design '96. Springer, Dordrecht. pp. 151–170.
     [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
     [10.1007/978-94-009-0279-4_9](https://doi.org/10.1007%2F978-94-009-0279-4_9).
140. < Bishop, C. M. (2006), Pattern Recognition and Machine Learning, Springer,
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-0-387-31073-2](https://en.wikipedia.org/wiki/Special:BookSources/978-0-387-31073-2 "Special:BookSources/978-0-387-31073-2")
141. Undergraduate texts include Boolos, Burgess, and Jeffrey
     [(2002)](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFBoolosBurgessJeffrey2002),
     [Enderton](https://en.wikipedia.org/wiki/Herbert_Enderton "Herbert Enderton")
     [(2001)](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFEnderton2001),
     and Mendelson
     [(1997)](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFMendelson1997).
     A classic graduate text by Shoenfield
     [(2001)](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFShoenfield2001)
     first appeared in 1967.
142. Equivalently, _
     [table](https://en.wiktionary.org/wiki/table "wikt:table")_.
143. [Anton (1987](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFAnton1987),
     p. 23)
144. [Beauregard & Fraleigh (1973](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFBeauregardFraleigh1973),
     p. 56)
145. [Knuth (1998](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFKnuth1998),
     p. 158)
146. Katajainen, Jyrki; Träff, Jesper Larsson (March 1997).
     ["A meticulous analysis of mergesort programs"](http://hjemmesider.diku.dk/~jyrki/Paper/CIAC97.pdf)
     (PDF). _Proceedings of the 3rd Italian Conference on Algorithms and
     Complexity_. Italian Conference on Algorithms and Complexity. Rome.
     pp. 217–228.
     [CiteSeerX](https://en.wikipedia.org/wiki/CiteSeerX_(identifier) "CiteSeerX (identifier)")
     [10.1.1.86.3154](https://citeseerx.ist.psu.edu/viewdoc/summary?doi=10.1.1.86.3154).
     [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
     [10.1007/3-540-62592-5_74](https://doi.org/10.1007%2F3-540-62592-5_74).
147. Consumers of an object may consist of various kinds of elements, such as
     other programs, remote computer systems, or computer programmers who wish
     to utilize the object as part of their own programs.
148. ^
     [Jump up to: <sup><i><b>a</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-Medicare_2008_149-0)
     [<sup><i><b>b</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-Medicare_2008_149-1)
     Centers for Medicare & Medicaid Services (CMS) Office of Information
     Service (2008). Selecting a development approach. Webarticle. United States
     Department of Health and Human Services (HHS). Re-validated: March
     27, 2008. Retrieved 27 Oct 2008.
149. Oppel, Andy (2005). _SQL Demystified_. McGraw Hill. p. 7.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [0-07-226224-9](https://en.wikipedia.org/wiki/Special:BookSources/0-07-226224-9 "Special:BookSources/0-07-226224-9").
150. ["Compiler"](http://whatis.techtarget.com/definition/0,,sid9_gci211824,00.html).
     TechTarget. Retrieved 1 September 2011. Traditionally, the output of the
     compilation has been called object code or sometimes an object module.
151. [Aho, Alfred V.](https://en.wikipedia.org/wiki/Alfred_Aho "Alfred Aho");
     [Sethi, Ravi](https://en.wikipedia.org/wiki/Ravi_Sethi "Ravi Sethi");
     [Ullman, Jeffrey D.](https://en.wikipedia.org/wiki/Jeffrey_Ullman "Jeffrey Ullman")
     (1986). "10 Code Optimization". _Compilers: principles, techniques, and
     tools_. Computer Science. Mark S. Dalton. p. 704.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [0-201-10194-7](https://en.wikipedia.org/wiki/Special:BookSources/0-201-10194-7 "Special:BookSources/0-201-10194-7").
152. Kindler, E.; Krivy, I. (2011). "Object-Oriented Simulation of systems with
     sophisticated control". _International Journal of General Systems_. **40**
     (3): 313–343.
     [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
     [10.1080/03081079.2010.539975](https://doi.org/10.1080%2F03081079.2010.539975).
     [S2CID](https://en.wikipedia.org/wiki/S2CID_(identifier) "S2CID (identifier)")
     [205549734](https://api.semanticscholar.org/CorpusID:205549734).
153. Lewis, John; Loftus, William (2008). _Java Software Solutions Foundations
     of Programming Design 6th ed_. Pearson Education Inc.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-0-321-53205-3](https://en.wikipedia.org/wiki/Special:BookSources/978-0-321-53205-3 "Special:BookSources/978-0-321-53205-3").,
     section 1.6 "Object-Oriented Programming"
154. St. Laurent, Andrew M. (2008).
     [_Understanding Open Source and Free Software Licensing_](https://books.google.com/books?id=04jG7TTLujoC&pg=PA4).
     O'Reilly Media. p. 4.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [9780596553951](https://en.wikipedia.org/wiki/Special:BookSources/9780596553951 "Special:BookSources/9780596553951").
155. Levine, Sheen S.; Prietula, Michael J. (2013-12-30). "Open Collaboration
     for Innovation: Principles and Performance". _Organization Science_. **25**
     (5): 1414–1433.
     [arXiv](https://en.wikipedia.org/wiki/ArXiv_(identifier) "ArXiv (identifier)"):
     [1406.7541](https://arxiv.org/abs/1406.7541).
     [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
     [10.1287/orsc.2013.0872](https://doi.org/10.1287%2Forsc.2013.0872).
     [ISSN](https://en.wikipedia.org/wiki/ISSN_(identifier) "ISSN (identifier)")
     [1047-7039](https://www.worldcat.org/issn/1047-7039).
     [S2CID](https://en.wikipedia.org/wiki/S2CID_(identifier) "S2CID (identifier)")
     [6583883](https://api.semanticscholar.org/CorpusID:6583883).
156. ["Optical Fiber"](http://www.thefoa.org/tech/ref/basic/fiber.html).
     _www.thefoa.org_.
     [The Fiber Optic Association](https://en.wikipedia.org/wiki/The_Fiber_Optic_Association "The Fiber Optic Association").
     Retrieved 17 April 2015.
157. Senior, John M.; Jamro, M. Yousif (2009). _Optical fiber communications:
     principles and practice_. Pearson Education. pp. 7–9.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-0130326812](https://en.wikipedia.org/wiki/Special:BookSources/978-0130326812 "Special:BookSources/978-0130326812").
158. [Williams, Laurie](https://en.wikipedia.org/wiki/Laurie_Williams_(software_engineer) "Laurie Williams (software engineer)")
     (February 19–20, 2001). _Integrating pair programming into a software
     development process_. 14th Conference on Software Engineering Education and
     Training. Charlotte. pp. 27–36.
     [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
     [10.1109/CSEE.2001.913816](https://doi.org/10.1109%2FCSEE.2001.913816).
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [0-7695-1059-0](https://en.wikipedia.org/wiki/Special:BookSources/0-7695-1059-0 "Special:BookSources/0-7695-1059-0").
     One of the programmers, the driver, has control of the keyboard/mouse and
     actively implements the program. The other programmer, the observer,
     continuously observes the work of the driver to identify tactical
     (syntactic, spelling, etc.) defects, and also thinks strategically about
     the direction of the work.
159. Gottlieb, Allan; Almasi, George S. (1989).
     [_Highly parallel computing_](http://dl.acm.org/citation.cfm?id=160438).
     Redwood City, Calif.: Benjamin/Cummings.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-0-8053-0177-9](https://en.wikipedia.org/wiki/Special:BookSources/978-0-8053-0177-9 "Special:BookSources/978-0-8053-0177-9").
160. Prata, Stephen (2004). _C primer plus_ (5th ed.). Sams. pp. 276–277.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-0-672-32696-7](https://en.wikipedia.org/wiki/Special:BookSources/978-0-672-32696-7 "Special:BookSources/978-0-672-32696-7").
161. ["Working Draft, Standard for Programming Language C++"](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2005/n1905.pdf)
     (PDF). _www.open-std.org_. Retrieved 1 January 2018.
162. Gordon, Aaron.
     ["Subprograms and Parameter Passing"](https://web.archive.org/web/20180101140104/http://rowdysites.msudenver.edu/~gordona/cs3210/lects/lect10.html).
     _rowdysites.msudenver.edu/~gordona_. Archived from
     [the original](http://rowdysites.msudenver.edu/~gordona/cs3210/lects/lect10.html)
     on 1 January 2018. Retrieved 1 January 2018.
163. ^
     [Jump up to: <sup><i><b>a</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-U.S._Election_Assistance_Commission_2007_165-0)
     [<sup><i><b>b</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-U.S._Election_Assistance_Commission_2007_165-1)
     [U.S. Election Assistance Commission](https://en.wikipedia.org/wiki/Election_Assistance_Commission "Election Assistance Commission")
     (2007).
     ["Definitions of Words with Special Meanings"](https://web.archive.org/web/20121208084203/http://www.eac.gov/vvsg/glossary.aspx).
     _
     [Voluntary Voting System Guidelines](https://en.wikipedia.org/wiki/Voluntary_Voting_System_Guidelines "Voluntary Voting System Guidelines")_.
     Archived from [the original](https://www.eac.gov/vvsg/glossary.aspx) on
     2012-12-08. Retrieved 2013-01-14.
164. Ranta, Aarne (9 May 2012).
     [_Implementing Programming Languages_](http://www.cse.chalmers.se/edu/year/2012/course/DAT150/lectures/plt-book.pdf#page=16)
     (PDF). College Publications. pp. 16–18.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [9781848900646](https://en.wikipedia.org/wiki/Special:BookSources/9781848900646 "Special:BookSources/9781848900646").
     Retrieved 22 March 2020.
165. Clocksin, William F.; Mellish, Christopher S. (2003). _Programming in
     Prolog_. Berlin ; New York: Springer-Verlag.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-3-540-00678-7](https://en.wikipedia.org/wiki/Special:BookSources/978-3-540-00678-7 "Special:BookSources/978-3-540-00678-7").
166. Bratko, Ivan (2012). _Prolog programming for artificial intelligence_
     (4th ed.). Harlow, England ; New York: Addison Wesley.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-0-321-41746-6](https://en.wikipedia.org/wiki/Special:BookSources/978-0-321-41746-6 "Special:BookSources/978-0-321-41746-6").
167. Covington, Michael A. (1994). _Natural language processing for Prolog
     programmers_. Englewood Cliffs, N.J.: Prentice Hall.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-0-13-629213-5](https://en.wikipedia.org/wiki/Special:BookSources/978-0-13-629213-5 "Special:BookSources/978-0-13-629213-5").
168. Lloyd, J. W. (1984). Foundations of logic programming. Berlin:
     Springer-Verlag.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-3-540-13299-8](https://en.wikipedia.org/wiki/Special:BookSources/978-3-540-13299-8 "Special:BookSources/978-3-540-13299-8").
169. Kuhlman, Dave. "A Python Book: Beginning Python, Advanced Python, and
     Python Exercises". Section 1.1. Archived from the original (PDF) on 23
     June 2012.
170. The National Academies of Sciences, Engineering, and Medicine (2019).
     Grumbling, Emily; Horowitz, Mark (eds.). _Quantum Computing : Progress and
     Prospects (2018)_. Washington, D.C.: National Academies Press. p. I-5.
     [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
     [10.17226/25196](https://doi.org/10.17226%2F25196).
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-0-309-47969-1](https://en.wikipedia.org/wiki/Special:BookSources/978-0-309-47969-1 "Special:BookSources/978-0-309-47969-1").
     [OCLC](https://en.wikipedia.org/wiki/OCLC_(identifier) "OCLC (identifier)")
     [1081001288](https://www.worldcat.org/oclc/1081001288).
     [S2CID](https://en.wikipedia.org/wiki/S2CID_(identifier) "S2CID (identifier)")
     [125635007](https://api.semanticscholar.org/CorpusID:125635007).
171. R language and environment

- Hornik, Kurt (2017-10-04).
  ["R FAQ"](https://cran.r-project.org/doc/FAQ/R-FAQ.html#What-is-R_003f). _The
  Comprehensive R Archive Network_. 2.1 What is R?. Retrieved 2018-08-06.

R Foundation

- Hornik, Kurt (2017-10-04).
  ["R FAQ"](https://cran.r-project.org/doc/FAQ/R-FAQ.html#What-is-the-R-Foundation_003f).
  _The Comprehensive R Archive Network_. 2.13 What is the R Foundation?.
  Retrieved 2018-08-06.

The R Core Team
[asks authors who use R in their data analysis](https://cran.r-project.org/doc/FAQ/R-FAQ.html#Citing-R)
to cite the software using:

- R Core Team (2016). R: A language and environment for statistical computing. R
  Foundation for Statistical Computing, Vienna, Austria. URL
  [http://www.R-project.org/](http://www.r-project.org/).

172. widely used

- Fox, John & Andersen, Robert (January 2005).
  ["Using the R Statistical Computing Environment to Teach Social Statistics Courses"](https://socialsciences.mcmaster.ca/jfox/Teaching-with-R.pdf)
  (PDF). Department of Sociology, McMaster University. Retrieved 2018-08-06.
- Vance, Ashlee (2009-01-06).
  ["Data Analysts Captivated by R's Power"](https://www.nytimes.com/2009/01/07/technology/business-computing/07program.html).
  _
  [New York Times](https://en.wikipedia.org/wiki/New_York_Times "New York Times")_.
  Retrieved 2018-08-06. R is also the name of a popular programming language
  used by a growing number of data analysts inside corporations and academia. It
  is becoming their lingua franca...

173. Vance, Ashlee (2009-01-06).
     ["Data Analysts Captivated by R's Power"](https://www.nytimes.com/2009/01/07/technology/business-computing/07program.html).
     _
     [New York Times](https://en.wikipedia.org/wiki/New_York_Times "New York Times")_.
     Retrieved 2018-08-06. R is also the name of a popular programming language
     used by a growing number of data analysts inside corporations and academia.
     It is becoming their lingua franca...
174. ["Computer Science Dictionary Definitions"](http://www.computingstudents.com/dictionary/?word=Record).
     _Computing Students_. Retrieved Jan 22, 2018.
175. Radványi, Tibor (2014).
     [_Database Management Systems_](https://www.tankonyvtar.hu/en/tartalom/tamop412A/2011-0038_49_radvanyi_en/index.html).
     Eszterházy Károly College. p. 19. Retrieved 23 September 2018.
176. Kahate, Atul (2006).
     [_Introduction to Database Management Systems_](https://books.google.com/books?id=mxYESolfLfoC).
     Pearson. p. 3.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-81-317-0078-5](https://en.wikipedia.org/wiki/Special:BookSources/978-81-317-0078-5 "Special:BookSources/978-81-317-0078-5").
     Retrieved 23 September 2018.
177. Connolly, Thomas (2004).
     [_Database Solutions: A Step by Step Guide to Building Databases_](https://archive.org/details/databasesolution00conn_535)
     (2nd ed.). Pearson. p.
     [7](https://archive.org/details/databasesolution00conn_535/page/n19).
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-0-321-17350-8](https://en.wikipedia.org/wiki/Special:BookSources/978-0-321-17350-8 "Special:BookSources/978-0-321-17350-8").
178. Codd, E. F. (1970). "A Relational Model of Data for Large Shared Data
     Banks". Communications of the ACM. 13 (6): 377–387.
     doi:10.1145/362384.362685.
179. Ambler, Scott.
     ["Relational Databases 101: Looking at the Whole Picture"](http://www.agiledata.org/essays/relationalDatabases.html).
180. Institute of Electrical and Electronics Engineers (1990) IEEE Standard
     Computer Dictionary: A Compilation of IEEE Standard Computer Glossaries.
     New York, NY
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [1-55937-079-3](https://en.wikipedia.org/wiki/Special:BookSources/1-55937-079-3 "Special:BookSources/1-55937-079-3")
181. Pezzè, Mauro; Young, Michal (2008).
     [_Software testing and analysis: process, principles, and techniques_](https://www.google.com/search?q=Mauro+%22non-regression%22+%22regression+testing%22).
     Wiley. Testing activities that focus on regression problems are called
     (non) regression testing. Usually "non" is omitted
182. Basu, Anirban (2015).
     [_Software Quality Assurance, Testing and Metrics_](https://books.google.com/books?id=aNTiCQAAQBAJ&pg=PA150).
     PHI Learning.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-81-203-5068-7](https://en.wikipedia.org/wiki/Special:BookSources/978-81-203-5068-7 "Special:BookSources/978-81-203-5068-7").
183. [National Research Council](https://en.wikipedia.org/wiki/National_Academies_of_Sciences,_Engineering,_and_Medicine "National Academies of Sciences, Engineering, and Medicine")
     Committee on Aging Avionics in Military Aircraft:
     [_Aging Avionics in Military Aircraft_](https://www.nap.edu/catalog/10108/aging-avionics-in-military-aircraft).
     The National Academies Press, 2001, page 2: ″Each technology-refresh cycle
     requires regression testing.″
184. Boulanger, Jean-Louis (2015).
     [_CENELEC 50128 and IEC 62279 Standards_](https://books.google.com/books?id=IbZNCAAAQBAJ&pg=PA149).
     Wiley.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-1119122487](https://en.wikipedia.org/wiki/Special:BookSources/978-1119122487 "Special:BookSources/978-1119122487").
185. Kotonya, Gerald; Sommerville, Ian (1998).
     [_Requirements Engineering: Processes and Techniques_](https://archive.org/details/requirementsengi1998koto).
     Chichester, UK: John Wiley and Sons.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [9780471972082](https://en.wikipedia.org/wiki/Special:BookSources/9780471972082 "Special:BookSources/9780471972082").
186. Ueberhuber, Christoph W. (1997),
     [_Numerical Computation 1: Methods, Software, and Analysis_](https://books.google.com/books?id=JH9I7EJh3JUC&pg=PA139),
     Springer, pp. 139–146,
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-3-54062058-7](https://en.wikipedia.org/wiki/Special:BookSources/978-3-54062058-7 "Special:BookSources/978-3-54062058-7")
187. Forrester, Dick (2018). _Math/Comp241 Numerical Methods (lecture notes)_.
     [Dickinson College](https://en.wikipedia.org/wiki/Dickinson_College "Dickinson College").
188. Aksoy, Pelin; DeNardis, Laura (2007),
     [_Information Technology in Theory_](https://books.google.com/books?id=KGS5IcixljwC&pg=PA134),
     Cengage Learning, p. 134,
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-1-42390140-2](https://en.wikipedia.org/wiki/Special:BookSources/978-1-42390140-2 "Special:BookSources/978-1-42390140-2")
189. Ralston, Anthony; Rabinowitz, Philip (2012),
     [_A First Course in Numerical Analysis_](https://books.google.com/books?id=TVq8AQAAQBAJ&pg=PA2),
     Dover Books on Mathematics (2nd ed.), Courier Dover Publications, pp. 2–4,
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-0-48614029-2](https://en.wikipedia.org/wiki/Special:BookSources/978-0-48614029-2 "Special:BookSources/978-0-48614029-2")
190. Butt, Rizwan (2009),
     [_Introduction to Numerical Analysis Using MATLAB_](https://books.google.com/books?id=QWub-UVGxqkC&pg=PA11),
     Jones & Bartlett Learning, pp. 11–18,
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-0-76377376-2](https://en.wikipedia.org/wiki/Special:BookSources/978-0-76377376-2 "Special:BookSources/978-0-76377376-2")
191. ["Overview Of Key Routing Protocol Concepts: Architectures, Protocol Types, Algorithms and Metrics"](http://www.tcpipguide.com/free/t_OverviewOfKeyRoutingProtocolConceptsArchitecturesP.htm).
     Tcpipguide.com.
     [Archived](https://web.archive.org/web/20101220111345/http://tcpipguide.com/free/t_OverviewOfKeyRoutingProtocolConceptsArchitecturesP.htm)
     from the original on 20 December 2010. Retrieved 15 January 2011.
192. [Philip A. Bernstein](https://en.wikipedia.org/wiki/Phil_Bernstein "Phil Bernstein"),
     Vassos Hadzilacos, Nathan Goodman (1987):
     [_Concurrency Control and Recovery in Database Systems_](http://research.microsoft.com/en-us/people/philbe/ccontrol.aspx)
     (free PDF download), Addison Wesley Publishing Company,
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [0-201-10715-5](https://en.wikipedia.org/wiki/Special:BookSources/0-201-10715-5 "Special:BookSources/0-201-10715-5")
193. [Gerhard Weikum](https://en.wikipedia.org/wiki/Gerhard_Weikum "Gerhard Weikum"),
     Gottfried Vossen (2001):
     [_Transactional Information Systems_](http://www.elsevier.com/wps/find/bookdescription.cws_home/677937/description#description),
     Elsevier,
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [1-55860-508-8](https://en.wikipedia.org/wiki/Special:BookSources/1-55860-508-8 "Special:BookSources/1-55860-508-8")
194. [Maurice Herlihy](https://en.wikipedia.org/wiki/Maurice_Herlihy "Maurice Herlihy")
     and J. Eliot B. Moss. _Transactional memory: architectural support for
     lock-free data structures._ Proceedings of the 20th annual international
     symposium on Computer architecture (ISCA '93). Volume 21, Issue 2,
     May 1993.
195. Marshall Cline.
     ["C++ FAQ: "What's this "serialization" thing all about?""](https://web.archive.org/web/20150405013606/http://isocpp.org/wiki/faq/serialization).
     Archived from
     [the original](http://www.parashift.com/c++-faq-lite/serialize-overview.html)
     on 2015-04-05. It lets you take an object or group of objects, put them on
     a disk or send them through a wire or wireless transport mechanism, then
     later, perhaps on another computer, reverse the process, resurrecting the
     original object(s). The basic mechanisms are to flatten object(s) into a
     one-dimensional stream of bits, and to turn that stream of bits back into
     the original object(s).
196. Kearney, K.T.; Torelli, F. (2011). "The SLA Model". In Wieder, P.; Butler,
     J.M.; Theilmann, W.; Yahyapour, R. (eds.).
     [_Service Level Agreements for Cloud Computing_](https://books.google.com/books?id=z306GUfFL5gC).
     Springer Science+Business Media, LLC. pp. 43–68.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [9781461416142](https://en.wikipedia.org/wiki/Special:BookSources/9781461416142 "Special:BookSources/9781461416142").
197. Nwana, H. S. (1996). "Software Agents: An Overview". _Knowledge Engineering
     Review_. **21** (3): 205–244.
     [CiteSeerX](https://en.wikipedia.org/wiki/CiteSeerX_(identifier) "CiteSeerX (identifier)")
     [10.1.1.50.660](https://citeseerx.ist.psu.edu/viewdoc/summary?doi=10.1.1.50.660).
     [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
     [10.1017/s026988890000789x](https://doi.org/10.1017%2Fs026988890000789x).
     [S2CID](https://en.wikipedia.org/wiki/S2CID_(identifier) "S2CID (identifier)")
     [7839197](https://api.semanticscholar.org/CorpusID:7839197).
198. Schermer, B. W. (2007).
     [_Software agents, surveillance, and the right to privacy: A legislative framework for agent-enabled surveillance_](https://openaccess.leidenuniv.nl/handle/1887/11951)
     (paperback). Vol. 21.
     [Leiden University Press](https://en.wikipedia.org/wiki/Leiden_University_Press "Leiden University Press").
     pp. 140, 205–244.
     [hdl](https://en.wikipedia.org/wiki/Hdl_(identifier) "Hdl (identifier)"):
     [1887/11951](https://hdl.handle.net/1887%2F11951).
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-0-596-00712-6](https://en.wikipedia.org/wiki/Special:BookSources/978-0-596-00712-6 "Special:BookSources/978-0-596-00712-6").
     Retrieved 2012-10-30.
199. [SWEBOK](https://en.wikipedia.org/wiki/Software_Engineering_Body_of_Knowledge "Software Engineering Body of Knowledge")
     Pierre Bourque; Robert Dupuis; Alain Abran; James W. Moore, eds. (2004).
     "Chapter 4: Software Construction".
     [_Guide to the Software Engineering Body of Knowledge_](https://web.archive.org/web/20140714183208/http://www.computer.org/portal/web/swebok/html/ch4#Ref2).
     [IEEE Computer Society](https://en.wikipedia.org/wiki/IEEE_Computer_Society "IEEE Computer Society").
     pp. 4–1–4–5.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [0-7695-2330-7](https://en.wikipedia.org/wiki/Special:BookSources/0-7695-2330-7 "Special:BookSources/0-7695-2330-7").
     Archived from
     [the original](http://www.computer.org/portal/web/swebok/html/ch4#Ref2) on
     2014-07-14. Retrieved 2020-06-21.
200. [Roger S. Pressman](https://en.wikipedia.org/wiki/Roger_S._Pressman "Roger S. Pressman")
     Software engineering: a practitioner's approach (eighth edition)
201. Ralph, P. and Wand, Y. (2009). A proposal for a formal definition of the
     design concept. In Lyytinen, K., Loucopoulos, P.,
     [Mylopoulos, J.](https://en.wikipedia.org/wiki/John_Mylopoulos "John Mylopoulos"),
     and Robinson, W., editors, Design Requirements Workshop (LNBIP 14), pp.
     103–136. Springer-Verlag, p. 109
     [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
     [10.1007/978-3-540-92966-6_6](https://doi.org/10.1007%2F978-3-540-92966-6_6).
202. Freeman, Peter; David Hart (2004). "A Science of design for
     software-intensive systems". _Communications of the ACM_. **47** (8): 19–21
     \ [20\].
     [doi](https://en.wikipedia.org/wiki/Doi_(identifier) "Doi (identifier)"):
     [10.1145/1012037.1012054](https://doi.org/10.1145%2F1012037.1012054).
     [S2CID](https://en.wikipedia.org/wiki/S2CID_(identifier) "S2CID (identifier)")
     [14331332](https://api.semanticscholar.org/CorpusID:14331332).
203. ["Application Development (AppDev) Defined and Explained"](http://www.bestpricecomputers.co.uk/glossary/application-development.htm).
     Bestpricecomputers.co.uk. 2007-08-13. Retrieved 2012-08-05.
204. DRM Associates (2002).
     ["New Product Development Glossary"](http://www.npd-solutions.com/glossary.html).
     Retrieved 2006-10-29.
205. [Abran et al. 2004](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFAbranMooreBourqueDupuis2004),
     pp. 1–1
206. ACM (2007).
     ["Computing Degrees & Careers"](https://web.archive.org/web/20110617053818/http://computingcareers.acm.org/?page_id=12).
     ACM. Archived from
     [the original](http://computingcareers.acm.org/?page_id=12) on 2011-06-17.
     Retrieved 2010-11-23.
207. Laplante, Phillip (2007).
     [_What Every Engineer Should Know about Software Engineering_](https://books.google.com/books?id=pFHYk0KWAEgC&q=What%20Every%20Engineer%20Should%20Know%20about%20Software%20Engineering.&pg=PA1).
     Boca Raton: CRC.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [978-0-8493-7228-5](https://en.wikipedia.org/wiki/Special:BookSources/978-0-8493-7228-5 "Special:BookSources/978-0-8493-7228-5").
     Retrieved 2011-01-21.
208. ["The Joint Task Force for Computing Curricula 2005"](http://www.acm.org/education/curric_vols/CC2005-March06Final.pdf)
     (PDF). 2014-10-21.
     [Archived](https://web.archive.org/web/20141021153204/http://www.acm.org/education/curric_vols/CC2005-March06Final.pdf)
     (PDF) from the original on 2014-10-21. Retrieved 2020-04-16.
209. ["ISO/IEC 14764:2006 Software Engineering — Software Life Cycle Processes — Maintenance"](http://www.iso.org/iso/iso_catalogue/catalogue_tc/catalogue_detail.htm?csnumber=39064).
     Iso.org. 2011-12-17. Retrieved 2013-12-02.
210. [Kaner, Cem](https://en.wikipedia.org/wiki/Cem_Kaner "Cem Kaner") (November
     17, 2006). [_Exploratory Testing_](http://www.kaner.com/pdfs/ETatQAI.pdf)
     (PDF). Quality Assurance Institute Worldwide Annual Software Testing
     Conference. Orlando, FL. Retrieved November 22, 2014.
211. "Programming in C: A Tutorial" (PDF). Archived from the original(PDF) on 23
     February 2015.
212. By contrast, a simple QUEUE operates FIFO (
     [first in, first out](https://en.wikipedia.org/wiki/FIFO_(computing_and_electronics) "FIFO (computing and electronics)")).
213. [Cormen, Thomas H.](https://en.wikipedia.org/wiki/Thomas_H._Cormen "Thomas H. Cormen");
     [Leiserson, Charles E.](https://en.wikipedia.org/wiki/Charles_E._Leiserson "Charles E. Leiserson");
     [Rivest, Ronald L.](https://en.wikipedia.org/wiki/Ron_Rivest "Ron Rivest");
     [Stein, Clifford](https://en.wikipedia.org/wiki/Clifford_Stein "Clifford Stein")
     (2009) \ [1990\].
     [_Introduction to Algorithms_](https://en.wikipedia.org/wiki/Introduction_to_Algorithms "Introduction to Algorithms")
     (3rd ed.). MIT Press and McGraw-Hill. pp. 232–233.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [0-262-03384-4](https://en.wikipedia.org/wiki/Special:BookSources/0-262-03384-4 "Special:BookSources/0-262-03384-4").
214. ["What is stateless? - Definition from WhatIs.com"](http://whatis.techtarget.com/definition/stateless).
     _techtarget.com_.
215. ["statement"](http://www.webopedia.com/TERM/S/statement.html). webopedia.
     September 1996. Retrieved 2015-03-03.
216. [http://nosql-database.org/](http://nosql-database.org/) "NoSQL DEFINITION:
     Next Generation Databases mostly addressing some of the points : being
     non-relational, distributed, open-source and horizontally scalable".
217. Leavitt, Neal (2010). "Will NoSQL Databases Live Up to Their Promise?"
     (PDF). IEEE Computer. 43 (2): 12–14. doi:10.1109/MC.2010.58.
     S2CID 26876882.
218. Mohan, C. (2013).
     [_History Repeats Itself: Sensible and NonsenSQL Aspects of the NoSQL Hoopla_](http://openproceedings.eu/2013/conf/edbt/Mohan13.pdf)
     (PDF). Proc. 16th Int'l Conf. on Extending Database Technology.
219. ["Amazon Goes Back to the Future With 'NoSQL' Database"](https://www.wired.com/2012/01/amazon-dynamodb/).
     WIRED. 2012-01-19. Retrieved 2017-03-06.
220. ["RDBMS dominate the database market, but NoSQL systems are catching up"](http://db-engines.com/en/blog_post/23).
     DB-Engines.com. 21 Nov 2013. Retrieved 24 Nov 2013.
221. ["NoSQL (Not Only SQL)"](http://searchdatamanagement.techtarget.com/definition/NoSQL-Not-Only-SQL).
     NoSQL database, also called Not Only SQL
222. [Fowler, Martin](https://en.wikipedia.org/wiki/Martin_Fowler_(software_engineer) "Martin Fowler (software engineer)").
     ["NosqlDefinition"](http://martinfowler.com/bliki/NosqlDefinition.html).
     many advocates of NoSQL say that it does not mean a "no" to SQL, rather it
     means Not Only SQL
223. ["ACM Association in computer algebra"](https://www.sigsam.org/cca/).
224. [Issue of syntax or semantics?](https://stackoverflow.com/questions/8803718/issue-of-syntax-or-semantics/8803765#8803765)
225. [John Paul Mueller,Semantic Errors in Java](https://www.dummies.com/programming/java/semantic-errors-in-java/)
226. [What is "technical documentation"?](http://www.transcom.de/transcom/en/technische-dokumentation.htm)
     at Transcom.de. Accessed February 25, 2013.
227. [What is Technical Documentation?](http://www.tetras.sk/en/stranka/what-is-technical-documentation)
     [Archived](https://archive.today/20130418132550/http://www.tetras.sk/en/stranka/what-is-technical-documentation)
     2013-04-18 at
     [archive.today](https://en.wikipedia.org/wiki/Archive.today "Archive.today")
     at Tetras Translations. Accessed February 25, 2013.
228. [Documenting the New System](http://www.igcseict.info/theory/8/docs/index.html)
     at IGCSE ICT. Accessed February 25, 2013.
229. ["Computer Hope, Generation languages"](http://www.computerhope.com/jargon/num/1gl.htm)
230. ["Upload Definition"](https://techterms.com/definition/upload).
     _techterms.com_. Retrieved 2017-03-30.
231. [W3C (2009)](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFW3C2009).
232. ["Forward and Backslashes in URLs"](https://zzz.buzz/2017/09/19/forward-and-backslashes-in-urls/).
     _zzz.buzz_. Retrieved 2018-09-19.
233. [RFC 3986 (2005)](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFRFC_39862005).
234. ^
     [Jump up to: <sup><i><b>a</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-FOOTNOTEJoint_W3C/IETF_URI_Planning_Interest_Group2002_236-0)
     [<sup><i><b>b</b></i></sup>](https://en.wikipedia.org/wiki/Glossary_of_computer_science#cite_ref-FOOTNOTEJoint_W3C/IETF_URI_Planning_Interest_Group2002_236-1)
     [Joint W3C/IETF URI Planning Interest Group (2002)](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFJoint_W3C/IETF_URI_Planning_Interest_Group2002).
235. [RFC 2396 (1998)](https://en.wikipedia.org/wiki/Glossary_of_computer_science#CITEREFRFC_23961998).
236. Miessler, Daniel.
     ["The Difference Between URLs and URIs"](https://danielmiessler.com/study/url-uri/#gs.Hs64zOs).
237. [Jargon File](https://en.wikipedia.org/wiki/Jargon_File "Jargon File")
     entry for ["User"](http://catb.org/jargon/html/U/user.html). Retrieved
     November 7, 2010.
238. ["W3C Definition of User Agent"](https://www.w3.org/WAI/UA/work/wiki/Definition_of_User_Agent).
     www.w3.org. 16 June 2011. Retrieved 2018-10-20.
239. Aho, Alfred V.; Sethi, Ravi; Ullman, Jeffrey D. (1986),
     [_Compilers: Principles, Techniques, and Tools_](https://en.wikipedia.org/wiki/Compilers:_Principles,_Techniques,_and_Tools "Compilers: Principles, Techniques, and Tools"),
     pp. 26–28,
     [Bibcode](https://en.wikipedia.org/wiki/Bibcode_(identifier) "Bibcode (identifier)"):
     [1986cptt.book.....A](https://ui.adsabs.harvard.edu/abs/1986cptt.book.....A)
240. Knuth, Donald (1997). _The Art of Computer Programming_. Vol. 1 (3rd ed.).
     Reading, Massachusetts: Addison-Wesley. pp. 3–4.
     [ISBN](https://en.wikipedia.org/wiki/ISBN_(identifier) "ISBN (identifier)")
     [0-201-89683-4](https://en.wikipedia.org/wiki/Special:BookSources/0-201-89683-4 "Special:BookSources/0-201-89683-4").
241. [Kevin Forsberg](https://en.wikipedia.org/wiki/Kevin_Forsberg "Kevin Forsberg")
     and [Harold Mooz](https://en.wikipedia.org/wiki/Harold_Mooz), "The
     Relationship of System Engineering to the Project Cycle", in Proceedings of
     the First Annual Symposium of National Council on System Engineering,
     October 1991: 57–65.
242. Beal, Vangie (2 May 2001).
     ["What is Wi-Fi (IEEE 802.11x)? A Webopedia Definition"](http://www.webopedia.com/TERM/W/Wi_Fi.html).
     _Webopedia_.
     [Archived](https://web.archive.org/web/20120308123721/http://www.webopedia.com/term/w/wi_fi.html)
     from the original on 2012-03-08.
243. Schofield, Jack (21 May 2007).
     ["The dangers of Wi-Fi radiation (updated)"](https://www.theguardian.com/technology/blog/2007/may/21/thedangersof)
     – via www.theguardian.com.
244. ["Certification | Wi-Fi Alliance"](https://www.wi-fi.org/certification).
     _www.wi-fi.org_.
