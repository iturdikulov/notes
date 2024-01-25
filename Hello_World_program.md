---
date: 2023-10-06
tags:
  - inbox
  - SR_programming
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

## Languages

Languages which I have experience with (very different levels of experience).

### [x86 assembly language](./external/hello_world/assembly.asm)

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

### [C](./external/hello_world/c.c)

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

### [Clojure](./external/hello_world/clojure.clj)
```clojure
(println "Hello World")
```

### [CPP](./external/hello_world/c++.cpp)

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

### [GDScript](./external/hello_world/GDScript.gd)
```gdscript
extends Node2D

func _ready():
    print("Hello World")
```

### [Go](./external/hello_world/golang.go)

```go
package main

import "fmt"

func main() {
  fmt.Println("Hello World")
}
```

### [Haxe](./external/hello_world/haxe.hx)
```haxe
class HelloWorld {
    static function main() {
        trace("Hello World");
    }
}
```

### [Java](./external/hello_world/java.java)

```java
public class Main {
  public static void main(String[] args) {
    System.out.println("Hello World");
  }
}
```

### [JavaScript](./external/hello_world/javascript.js)

```javascript
console.log("Hello, World!");
```

### [Lisp](./external/hello_world/lisp.lsp)

```lisp
; LISP
(DEFUN hello ()
  (PRINT (LIST 'HELLO 'WORLD))
)

(hello)
```

### [Pascal](./external/hello_world/pascal.pas)

```pascal
program HelloWorld(output);
begin
  writeln('Hello World');
end.
```

### [Perl](./external/hello_world/perl.pl)

```perl
#!/usr/bin/env perl
print "Hello World\n";
```

### [PHP](./external/hello_world/PHP.php)
```php
<?php
echo 'Hello World';
```

### [Python](./external/hello_world/python.py)

```python
print("Hello, World!")
```

### [R](./external/hello_world/R.r)

```r
cat("Hello, World!\n")
```

### [Ruby](./external/hello_world/ruby.rb)

```ruby
puts "Hello, World!"
```

### [Rust](./external/hello_world/rust.rs)

```rust
fn main() {
    println!("Hello, World!");
}
```

### [TypeScript](./external/hello_world/typescript.ts)

```typescript
console.log("Hello World");
```

### [Scala](./external/hello_world/scala.scala)
```scala
object HelloWorld extends App {
  println("Hello World")
}
```

### [Shell](./external/hello_world/shell.sh)

```sh
echo "Hello, World!"
```
