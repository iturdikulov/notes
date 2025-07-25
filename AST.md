---
created: 2022-12-29T00:00+03:00
tags:
  - blog
  - now
  - computer_science
sr-due: 2025-07-22
sr-interval: 4
sr-ease: 206
---

# Abstract syntax tree

What is an Abstract Syntax Tree?
<br class="f">
> In [[computer_science]], an abstract syntax [[tree]] (AST), or just syntax tree, is a tree representation of the abstract syntactic structure of text (often source code) written in a formal language. Each node of the tree denotes (represent) a construct occurring in the text.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Abstract_syntax_tree)</cite>

TODO: review & confirm flashcards
TODO: review python `ast` module

Why are ASTs used?
<br class="f">
ASTs are used for program analysis and transformation, enabling static analysis, code refactoring, optimization, and generation of documentation.
As example Euclidean algorithm is shown below.
![[img/AST.excalidraw|Abstract syntax tree flowchart diagram for the Euclidean algorithm]]
_An abstract syntax tree for the Euclidean algorithm_

What are the main components of an AST?
<br class="f">
The main components are nodes (representing constructs) and edges (showing relationships between constructs).

How is an AST created?
<br class="f">
An AST is created through lexical analysis, parsing, and sometimes semantic analysis. Lexical analysis breaks code into tokens, parsing constructs the tree based on grammar rules, and semantic analysis adds meaning to nodes.

What are some applications of ASTs?
<br class="f">
Some applications include static analysis, code refactoring, interpretation, and compilation (interpreters use ASTs to execute code), IDE features like syntax highlighting, auto-completion, and error detection.

What is the difference between a Concrete Syntax Tree (CST) and an Abstract Syntax Tree (AST)?
<br class="f">
A CST includes all the syntactic details of the source code, such as punctuation and layout. An AST abstracts away these details, focusing only on the semantic structure of the code.

What are some benefits of using ASTs?
<br class="f">
Benefits include easier manipulation of code for transformations and optimizations, improved error handling, and more precise static analysis.

What tools can be used to work with ASTs?
<br class="f">
Some tools include compilers, interpreters, IDEs (Integrated Development Environments), and specialized libraries or APIs in programming languages
like Python (e.g., `ast` module).