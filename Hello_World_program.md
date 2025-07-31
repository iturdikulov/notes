---
created: 2023-10-06T00:00+03:00
tags:
  - blog
  - computer_programming
sr-due: 2025-07-22
sr-interval: 2
sr-ease: 228
---

# "Hello, World!" program

> A "Hello, World!" program is generally a [[computer_program]] that ignores any input, and outputs or displays a message similar to "Hello, World!". A small piece of code in most general-purpose [[programming_language|programming languages]], this program is used to illustrate a language's basic syntax. "Hello, World!" programs are often the first a student learns to write in a given language, and they can also be used as a **sanity check** to ensure computer software intended to compile or run source code is correctly installed, and that its operator understands how to use it.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/%22Hello,_World!%22_program)</cite>

Languages which I have experience with (very different levels of experience).

## Python

[[Python]] is programming language that lets you work quickly and integrate systems more effectively.

```python
print("Hello, World!")
```

## Go

Build simple, secure, scalable systems with [[Go]].

```go
package main

import "fmt"

func main() {
	fmt.Println("Hello World")
}
```

## Lua

[[Lua]] is a powerful, efficient, lightweight, embeddable scripting language.

```lua
print("Hello, World!")
```

## JavaScript

[[JavaScript]] is core technology of the Web, alongside HTML and CSS.

```javascript
console.log("Hello, World!");
```

## C

[[C]] designed to be compiled to provide low-level access to memory and language constructs that map efficiently to machine instructions, all with minimal runtime support.

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

## C++

[[CPP|C++]] designed with systems programming and embedded, resource-constrained software and large systems in mind, with performance, efficiency, and flexibility of use as its design highlights.

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

## Rust

[[Rust]] is a general-purpose programming language emphasizing performance, type safety, and concurrency.

```rust
fn main() {
    println!("Hello, World!");
}
```

## Pascal

[[Pascal]] is small, efficient language intended to encourage good programming practices using structured programming and data structuring.

```pascal
program HelloWorld(output);
begin
  writeln('Hello World');
end.
```

## Java

```java
public class Main {
  public static void main(String[] args) {
    System.out.println("Hello World");
  }
}
```

## GDScript

[[GDScript]] langugage is optimized for and tightly integrated with [[Godot]] allowing great flexibility for content creation and integration.

```gdscript
extends Node2D

func _ready():
    print("Hello World")
```

## Perl

Perl borrows features from other programming languages including C, sh, AWK, and sed. It provides text processing facilities without the arbitrary data-length limits of many contemporary Unix command line tools.

```perl
#!/usr/bin/env perl
print "Hello World\n";
```

## PHP

[[PHP]] is general-purpose scripting language that is especially suited to web development.

```php
<?php
echo 'Hello World';
```

## Ruby

[[Ruby]] is dynamic, programming language with a focus on simplicity and productivity.

```ruby
puts "Hello, World!"
```

## Z-Shell

The Z shell ([[Zsh]]) is a Unix shell that can be used as an interactive login shell and as a **command interpreter** for shell scripting.

```zsh
echo "Hello, World!"
```

## Nix

The [[Nix]] language is designed for conveniently creating and composing derivations – precise descriptions of how contents of existing files are used to derive new files. It is a domain-specific, purely functional, lazily evaluated, dynamically typed programming language.

```nix
# nix-instantiate --eval --expr '"Hello world"'
"Hello world"
```

## x86 assembly language

Regarded as a programming language, [[assembly_language]] is machine-specific and low-level. Like all assembly languages, x86 assembly uses mnemonics to represent fundamental CPU instructions, or machine code.

```asm
; This code can be compiled with the NASM assembler
; =================================================
;
; Define variables in the data section
SECTION .DATA
	hello:     db 'Hello world!',10
	helloLen:  equ $-hello

; Code goes in the text section
SECTION .TEXT
	GLOBAL _start

_start:
	mov eax,4            ; 'write' system call = 4
	mov ebx,1            ; file descriptor 1 = STDOUT
	mov ecx,hello        ; string to write
	mov edx,helloLen     ; length of string to write
	int 80h              ; call the kernel

	; Terminate program
	mov eax,1            ; 'exit' system call
	mov ebx,0            ; exit with error code 0
	int 80h              ; call the kernel
```
