---
date: 2023-10-06
tags:
  - inbox
  - SR_programming
sr-due: 2024-01-29
sr-interval: 2
sr-ease: 228
---

# "Hello, World!" program

> A "Hello, World!" program is generally a
[[Computer_program|computer program]] that ignores any input, and outputs or
> displays a message similar to "Hello, World!". A small piece of code in most
> general-purpose [[Programming_language|programming languages]], this program
> is used to illustrate a language's basic syntax. "Hello, World!" programs are
> often the first a student learns to write in a given language, and they can
> also be used as a **sanity check** to ensure computer software intended to
> compile or run source code is correctly installed, and that its operator
> understands how to use it.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/%22Hello,_World!%22_program)</cite>

Languages which I have experience with (very different levels of experience).

## x86 assembly language

```asm
global _start

section .text

_start:
  mov rax, 1        ; write(
  mov rdi, 1        ;   STDOUT_FILENO,
  mov rsi, msg      ;   "Hello, world!\n",
  mov rdx, msglen   ;   sizeof("Hello, world!\n")
  syscall           ; );
  mov rax, 60       ; exit(
  mov rdi, 0        ;   EXIT_SUCCESS
  syscall           ; );

section .rodata
  msg: db "Hello, world!", 10
  msglen: equ $ - msg
```

## C

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

## Clojure
```clojure
(println "Hello World")
```

## CPP

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

## GDScript
```gdscript
extends Node2D

func _ready():
    print("Hello World")
```

## Go

```go
package main

import "fmt"

func main() {
  fmt.Println("Hello World")
}
```

## Haxe
```haxe
class HelloWorld {
    static function main() {
        trace("Hello World");
    }
}
```

## Java

```java
public class Main {
  public static void main(String[] args) {
    System.out.println("Hello World");
  }
}
```

## JavaScript

```javascript
console.log("Hello, World!");
```

## Lisp

```lisp
; LISP
(DEFUN hello ()
  (PRINT (LIST 'HELLO 'WORLD))
)

(hello)
```

## Pascal

```pascal
program HelloWorld(output);
begin
  writeln('Hello World');
end.
```

## Perl

```perl
#!/usr/bin/env perl
print "Hello World\n";
```

## PHP
```php
<?php
echo 'Hello World';
```

## Python

```python
print("Hello, World!")
```

## R

```r
cat("Hello, World!\n")
```

## Ruby

```ruby
puts "Hello, World!"
```

## Rust

```rust
fn main() {
    println!("Hello, World!");
}
```

## TypeScript

```typescript
console.log("Hello World");
```

## Scala
```scala
object HelloWorld extends App {
  println("Hello World")
}
```

## Shell

```sh
echo "Hello, World!"
```
