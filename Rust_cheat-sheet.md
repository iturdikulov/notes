---
date: 2025-02-11T21:39+03:00
tags:
  - blog
  - cheat-sheets
sr-due: 2023-01-28
sr-interval: 5
sr-ease: 150
---

# Rust cheat-sheet

In the following sections, I'll describe the basics of [[Rust]] programming
language with Q/A flashcards based on Learn Rust in Y Minutes [^1] cheatsheet.

```rust
// This is a comment. Line comments look like this...
// and extend multiple lines like this.

/* Block comments
  /* can be nested. */ */

/// Documentation comments look like this and support markdown notation.
/// # Examples
///
/// let five = 5
fn main() {}
```

## 1. Basics

```rust
#[allow(dead_code)]
// Functions
// `i32` is the type for 32-bit signed integers
fn add2(x: i32, y: i32) -> i32 {
    // Implicit return (no semicolon)
    x + y
}
fn main() {
  println!("2 + 2 = {}", add2(2, 2));
}
```
What is the output of the above code?
<br class="f">
*Results:* `2 + 2 = 4`

How to set immutable variables?
<br class="f">
```rust
fn main() {
    let x: i32 = 1;
    println!("Immutable binding (variables): {}", x);

    let y: i32 = 13i32;
    let f: f64 = 1.3f64;
    println!("Integer/float numbers suffixes: {} {}", y, f);
}
```

Is there type inference in Rust?
<br class="f">
Yes. Most of the time, the Rust compiler can infer what type a variable is, so
you don’t have to write an explicit type annotation.
```rust
use std::any::type_name;

fn print_type_of<T>(_: &T) {
    println!("{}", type_name::<T>());
}

fn main() {
    let x = 1;
    let y = 1.3;
    println!("Types of 1 and 1.3:");
    print_type_of(&x);
    print_type_of(&y);
}
```
*Results:*
```
Types of 1 and 1.3:
i32
f64
```

How to sum two bindings, 1 and 2?
<br class="f">
Need just to use `+` operator.
```rust
fn main() {
    let x = 1;
    let y = 2;
    let sum = x + y + 13;
    println!("Sum of 1, 2, 13 is {}", sum);  // Sum of 1, 2, 13 is 16
}
```

How to set and change mutable variable?
<br class="f">
```rust
fn main() {
    // Mutable variable
    let mut mutable = 1;
    mutable = 4;
    mutable += 2;
    println!("{}", mutable); // 6
}
```

How to set string literals?
<br class="f">
```rust
fn main(){
    // String literals
    let x: &str = "hello world!";
    let f = 1.3;

    // Printing
    println!("{} {}", f, x);  // 1.3 hello world!
}
```

How to set a heap-allocated string (dynamic string)?
<br class="f">
```rust
fn main() {
    // A `String` – a heap-allocated string
    // Stored as a `Vec<u8>` and always holds a valid UTF-8 sequence,
    // which is not null terminated.
    let s: String = "hello world".to_string();
}
```

A string slice – an immutable view into another string. This is basically an
**immutable pointer and length of a string** – it doesn’t actually contain the
contents of a string, just a pointer to the beginning and a length of a string
buffer, statically allocated or contained in another object (in this case, `s`).
The string slice is like a view `&[u8]` into `Vec<T>`.
```rust
fn main() {
    let s: String = "hello world".to_string();
    let s_slice: &str = &s;

    println!("{} {}", s, s_slice);
}
```
What this code will print?
<br class="f">
*Results:* `hello world hello world`

How to set a fixed-size array and dynamic array (vector)?
<br class="f">
```rust
fn main() {
    // A fixed-size array
    let four_ints: [i32; 4] = [1, 2, 3, 4];

    // A dynamic array (vector)
    let mut vector: Vec<i32> = vec![1, 2, 3, 4];
    vector.push(5);

    println!("Fixed-size array {:?}", four_ints);
    println!("Dynamic array {:?}", vector);
}
```
*Results:*
```
Fixed-size array [1, 2, 3, 4]
Dynamic array [1, 2, 3, 4, 5]
```

A slice – an immutable view into a vector or array. This is much like a string
slice, but for vectors. How to create slice of `vec![1, 2, 3, 4]`?
```rust
fn main() {
    let mut vector: Vec<i32> = vec![1, 2, 3, 4];
    let slice: &[i32] = &vector[0..2];

    // Use `{:?}` to print something debug-style
    println!("{:?} {:?}", vector, slice); // [1, 2, 3, 4, 5] [1, 2, 3, 4, 5]
}
```

A tuple is a fixed-size set of values of possibly different types. How to define
tuple in rust with `1, "hello", 3.4` items, how to get second item?
```rust
fn main() {
    let x: (i32, &str, f64) = (1, "hello", 3.4);

    // Indexing
    println!("{}", x.1); // hello
}
```

How to destructure (unpacking with strict arity) `let x: (i32, &str, f64)` into a, b, c?
<br class="f">
```rust
    // Destructuring `let`
    let (a, b, c) = x;
    println!("{} {} {}", a, b, c); // 1 hello 3.4
```

## 2. Types

How to define a struct with x, y (i32) fields?
<br class="f">
```rust
fn main() {
    // Struct
    struct Point {
        x: i32,
        y: i32,
    }

    let origin: Point = Point { x: 0, y: 0 };
    println!("Origin is at ({}, {})", origin.x, origin.y);
}
```

A struct with unnamed fields, called a ‘tuple struct’, how to define it?
<br class="f">
```rust
fn main() {
    struct Point2(i32, i32);

    let origin2 = Point2(0, 0);
    println!("Origin is at ({}, {})", origin2.0, origin2.1);
}
```

How to define basic C-like enum?
<br class="f">
```rust
fn main() {
    enum Direction {
        Left,
        Right,
        Up,
        Down,
    }

    let up = Direction::Up;
}
```

How to create enum with fields?
<br class="f">
Enum with fields. If you want to make something optional, the standard library
has `Option`.
```rust
fn main() {
    enum OptionalI32 {
        AnI32(i32),
        Nothing,
    }

    let two: OptionalI32 = OptionalI32::AnI32(2);
    let nothing = OptionalI32::Nothing;
}
```

When these generics are useful?
```rust
struct Foo<T> { bar: T }

// This is defined in the standard library as `Option`
// `Option` is used in place of where a null pointer
// would normally be used.
enum Optional<T> {
    SomeVal(T),
    NoVal,
}

fn main() {
    // Using Foo<T> with different types
    let foo_int = Foo { bar: 42 };
    let foo_str = Foo { bar: "Hello, Rust!" };

    println!("Foo with i32: {}", foo_int.bar);
    println!("Foo with &str: {}", foo_str.bar);

    // Using Optional<T> (custom Option<T>)
    let some_value: Optional<i32> = Optional::SomeVal(100);
    let no_value: Optional<i32> = Optional::NoVal;

    // Matching on Optional<T>
    match some_value {
        Optional::SomeVal(v) => println!("We have a value: {}", v),
        Optional::NoVal => println!("No value present"),
    }
    // Foo with i32: 42
    // Foo with &str: Hello, Rust!

    match no_value {
        Optional::SomeVal(v) => println!("We have a value: {}", v),
        Optional::NoVal => println!("No value present"),
    }
    // We have a value: 100
    // No value present
}
```
<br class="f">\
We use generics to create **definitions** for items like function
signatures or structs, which we can then use with **many different** concrete
data types. They also allow us to avod code duplication.

Using methods with generics.
```rust
struct Foo<T> { bar: T }

fn main() {
    impl<T> Foo<T> {
        // Methods take an explicit `self` parameter
        fn bar(&self) -> &T { // self is borrowed (immutable)
            &self.bar
        }
        fn bar_mut(&mut self) -> &mut T { // self is mutably borrowed
            &mut self.bar
        }
        fn into_bar(self) -> T { // here self is consumed
            self.bar
        }
    }

    let a_foo = Foo { bar: 1 };
    let mut b_foo = Foo { bar: 2 };
    let c_foo = Foo { bar: 3 };
    println!("{}", a_foo.bar());
    println!("{}", b_foo.bar_mut());
    println!("{}", c_foo.into_bar());
}
```
What this code will print?
<br class="f">
*Results:*
```
1
2
3
```

Traits, known as interfaces or typeclasses in other languages. Functionality a
particular type has and can share with other types. How to define trait?
<br class="f">
```rust
struct Foo<T> { bar: T }

fn main() {
    trait Frobnicate<T> {
        fn frobnicate(self) -> Option<T>;
    }

    impl<T> Frobnicate<T> for Foo<T> {
        fn frobnicate(self) -> Option<T> {
            Some(self.bar)
        }
    }

    let another_foo = Foo { bar: 1 };
    println!("{:?}", another_foo.frobnicate()); // Some(1)
}
```

How to define function pointer and it's type?
<br class="f">
```rust
fn main() {
    // Some function
    fn fibonacci(n: u32) -> u32 {
        match n {
            0 => 1,
            1 => 1,
            _ => fibonacci(n - 1) + fibonacci(n - 2),
        }
    }

    // Define function pointer type
    type FunctionPointer = fn(u32) -> u32;

    let fib : FunctionPointer = fibonacci;
    println!("Fib: {}", fib(4)); // 5
    println!("Pointer address: {:?}", fib as *const u32);
}
```
*Results:*
```
Fib: 5
Pointer address: 0x55b7c5107c60
```

## 3. Pattern matching


How to match on enum?
<br class="f">
```rust
enum OptionalI32 {
    AnI32(i32),
    Nothing,
}

fn print_nothing() {
    println!("it’s nothing!")
}

fn main() {
    let foo = OptionalI32::AnI32(1);
    match foo {
        OptionalI32::AnI32(n) => println!("it’s an i32: {}", n),
        OptionalI32::Nothing  => print_nothing(),
    }
    // it’s an i32: 1
}
```

What this code will print?
```rust
enum OptionalI32 {
    AnI32(i32),
    Nothing,
}

fn main() {
    struct FooBar { x: i32, y: OptionalI32 }
    let bar = FooBar { x: 15, y: OptionalI32::AnI32(32) };
    match bar {
        FooBar { x: 0, y: OptionalI32::AnI32(0) } =>
            println!("The numbers are zero!"),
        FooBar { x: n, y: OptionalI32::AnI32(m) } if n == m =>
            println!("The numbers are the same"),
        FooBar { x: n, y: OptionalI32::AnI32(m) } =>
            println!("Different numbers: {} {}", n, m),
        FooBar { x: _, y: OptionalI32::Nothing } =>
            println!("The second number is Nothing!"),
    }
}
```
<br class="f">*Results:* `Different numbers: 15 32`

## 4. Control flow


How to use simple control flow?
<br class="f">
```rust
fn main() {
    if 1 == 1 {
        println!("Maths is working!"); // Maths is working!
    } else {
        println!("Oh no...");
    }
}
```

How to use `if` as expression of `let value`?
<br class="f">
```rust
fn main() {
    let value = if true {
        "good"
    } else {
        "bad"
    };

    println!("{}", value); // good
}
```

How to iterate over `[1, 2, 3]`, `0u32..10` and print each item?
<br class="f">
```rust
fn main() {
    // `for` loops/iteration
    let array = [1, 2, 3];
    for i in array {
        println!("{}", i);
    }

    // Ranges
    for i in 0u32..10 {
        print!("{} ", i);
    }
    // prints `0 1 2 3 4 5 6 7 8 9 `
}
```

How to create loop with `while` and `loop` keywords?
<br class="f">
```rust
fn main() {
    while 1 == 1 {
        println!("The universe is operating normally.");
        // break statement gets out of the while loop.
        // It avoids useless iterations.
        break;
    }

    // Infinite loop if `break` is not used
    loop {
        println!("Hello!");
        // break statement gets out of the loop
        break;
    }
}
```

## 5. Memory safety & pointers

What last line of this code will print?
```rust
fn main() {
    // Owned pointer – only one thing can ‘own’ this pointer at a time
    // This means that when the `Box` leaves its scope, it will be automatically deallocated safely.
    let mut mine: Box<i32> = Box::new(3);
    *mine = 5; // dereference

    // Here, `now_its_mine` takes ownership of `mine`. In other words, `mine` is moved.
    let mut now_its_mine = mine;
    *now_its_mine += 2;

    println!("{}", now_its_mine); // 7
    println!("{}", mine); // << ???
}
```
<br class="f">This would not compile (error: borrow of moved value `mine`),
because `now_its_mine` now owns the pointer

```rust
    // Reference – an immutable pointer that refers to other data
    // When a reference is taken to a value, we say that the value has been ‘borrowed’.
    // While a value is borrowed immutably, it cannot be mutated or moved.
    // A borrow is active until the last use of the borrowing variable.
    let mut var = 4;
    var = 3;
    let ref_var: &i32 = &var;

    println!("{}", var); // Unlike `mine`, `var` can still be used
    println!("{}", *ref_var);
    // var = 5; // this would not compile because `var` is borrowed
    // *ref_var = 6; // this would not either, because `ref_var` is an immutable reference
    ref_var; // no-op, but counts as a use and keeps the borrow active
    var = 2; // ref_var is no longer used after the line above, so the borrow has ended
```

```rust
    // Mutable reference
    // While a value is mutably borrowed, it cannot be accessed at all.
    let mut var2 = 4;
    let ref_var2: &mut i32 = &mut var2;
    *ref_var2 += 2;         // '*' is used to point to the mutably borrowed var2

    println!("{}", *ref_var2); // 6 , // var2 would not compile.
    // ref_var2 is of type &mut i32, so stores a reference to an i32, not the value.
    // var2 = 2
```

NEXT: compare with original cheatsheet

[^1]: [Learn Rust in Y Minutes](https://learnxinyminutes.com/rust/)
