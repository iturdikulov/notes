---
date: 2022-12-29
draft: true
sr-due: 2024-01-10
sr-ease: 270
sr-interval: 238
tags:
- inbox
---

# Bytecode (portable code or p-code)

> Form of instruction set designed for efficient execution by a software
> interpreter. Unlike human-readable source [[Code]], bytecodes are compact
> numeric codes, constants, and references (normally numeric addresses) that
> encode the result of compiler parsing and performing semantic analysis of
> things like type, scope, and nesting depths of program objects.
>
> The name bytecode stems from instruction sets that have one-byte opcodes
> followed by optional parameters. Intermediate representations such as bytecode
> may be output by [[Programming_language]] implementations to ease
> interpretation, or it may be used to reduce hardware and operating system
> dependence by allowing the same code to run cross-platform, on different
> devices. Bytecode may often be either directly executed on a
> [[Virtual_machine]] (a p-code machine, i.e., interpreter), or it may be
> further compiled into machine code for better performance.
>
> Since bytecode instructions are processed by software, they may be arbitrarily
> complex, but are nonetheless often akin to traditional hardware instructions:
> virtual stack machines are the most common, but virtual register machines have
> been built also. Different parts may often be stored in separate files,
> similar to object modules, but dynamically loaded during execution.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Bytecode)</cite>