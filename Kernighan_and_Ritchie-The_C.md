---
directory: ~/Computer/programming/Kernighan_and_Ritchie-The_C_programming_language
tags:
  - blog
  - work-tool
  - literature
sr-due: 2025-11-29
sr-interval: 674
sr-ease: 236
created: 2025-01-14T11:41+03:00
---

# The C Programming Language

The authors of this book present the complete guide to ANSI standard C language
programming. Written by the developers of C, this new version helps readers keep
up with the finalized ANSI standard for C (not latest one) while showing how to
take advantage of C's rich set of operators, economy of expression, improved
control flow, and data structures.

Questions and answers formatted as flashcards.

## Preface /6

Any popular language changes over the time, and C is not an exception.

Goal of the [[C#ANSI C]] standard
<br class="f">
Produce an unambiguous and machine-independent definition of the language C. In
my words - universal, clear and easy to understand language because it can only
mean one thing. <!--SR:!2025-08-03,2,227-->

Write ==useful== programs probably the best goal to learn any language.

C wears well as one's ==experience== with it grows. <!--SR:!2026-04-27,231,287-->

## Preface to the first edition /8

Is C is a [[general-purpose_programming_language]] language?
<br class="f">
Yes, general-purpose something like universal language, to use it in any domain,
and not have limited functions to specific domain. <!--SR:!2025-09-01,198,287-->

Is C is high-level language?
<br class="f">
Yes, but it not a "very high-level" language, nor a "big" one. But its absence
of restrictions and its generality make it more convenient and effective for
many tasks than supposedly more powerful languages. For example, it's used a lot
in hardware programming, embedded systems, kernel development, etc. <!--SR:!2025-07-23,158,267-->

## Chapter 1 - A Tutorial Introduction /9

Basics of C (as language, like [[variable]] and arithmetic [[expression]]).
<br class="f">
- Declarations, `int x;`
- Variables and constants, `x = 1;`
- Arithmetic expressions, `x = 1 + 2;`
- Operators and operands, `x + y`
- Control flow, `if (x > y) { ... }`
- Loops, `while (x < y) { ... }`
- Functions, `int power(int base, int n) { ... }`
- Input and output, `printf("hello, world\n"); scanf("%d", &n);`
- Pointers, `int *p;`
- Standard library, `#include <stdio.h>`

### 1.1 Getting Started /9

The only way to learn a new programming language is by ==writing programs== in
it. <!--SR:!2026-03-24,235,287-->

Here [[Hello_World_program]], can you in details describe it, each
parts?
```c #include <stdio.h> main() { printf("hello, world\n"); } ```
<br class="f">
```c // include standart input/output library (this is commentary) #include
<stdio.h>

// define a function called main (initiator), () surround arguments
main()
{ // { brace - opens a block of statements
    // main calls library function printf in one function statement,
    // "hello, world\n" is a character string (string constant) argument
    // \n is escape sequence for newline
    printf("hello, world\n"); // function which print string constant
} // } brace - closes a block
```
<!--SR:!2023-05-28,16,248-->

C program, whatever its size, consists of ==functions and variables==.
<!--SR:!2023-08-04,66,287-->

Is this code valid in [[C]]?
```c
printf("hello, world
");
```
<br class="f">
No, C compiler will produce error, missing terminating `"` character.

Steps to compile and run a C program
<br class="f">
1. Create the program text somewhere (file whose name ends in ".c")
2. Compile it successfully (multiple steps), usually with `gcc` command or
   `clang` or `cc`. Nowadays, you usually need to use some build system.
3. Load it & Run it
5. Find out where your output went

Describe this [[escape_sequence]]'s:
- `\n`
- `\t`
- `\b`
- `\\`
- `\"`
- `\'` <br class="f">
- `\n` - newline, it's a single character
- `\t` - tab
- `\b` - backspace
- `\\` - backslash itself
- `\"` - double quote
- `\'` - single quote <!--SR:!2023-11-24,206,268-->

Function contains ==[[statement|statements]] which specify its computing
operations to be done, and [[variable|variables]]== to store values used during
the computation.

Main difference between statement and expression?
<br class="f">
An expression evaluates to a value and expression is part of statement. A
statement does something.
<!--SR:!2023-06-02,3,214-->

The every program must have a function called ==main==.
Your program begins executing at the beginning of this function.
<!--SR:!2023-06-18,37,288-->

One method (simplest) to communicate data between functions is?
<br class="f">
Use arguments between calling function and called function.
<!--SR:!2023-08-05,67,287-->

A function is called by ==naming it==, followed by a parenthesized list of
arguments (or just empty parenthesis).
<!--SR:!2024-07-12,246,267-->

`"hello, world\n"` this is a ==character string== or ==string constant==.
<!--SR:!2024-05-04,177,208!2023-07-27,58,248-->

#### Exercises

- [x] [Exercise 1-1](file:///home/inom/Computer/programming/Kernighan_and_Ritchie-The_C_programming_language/chapter_1/1-1_hello_world.c).
Run the "hello, world" program on your system. Experiment with leaving out parts
of the program, to see what error messages you get.

- [x] [Exercise 1-2](file:///home/inom/Computer/programming/Kernighan_and_Ritchie-The_C_programming_language/chapter_1/1-2_printf_experiments.c).
Experiment to find out what happens when printf's argument string contains '\c,
where c is some character not listed above.

### 1.2 Variables and Arithmetic Expressions /11

Formula to convert Fahrenheit to Celsius is
==$$^\circ C = \frac{5}{9} \times (^\circ F - 32)$$==

How to define single and block comments?
<br class="f">
- `// <text>` - single line comment
- `/* <text> */` - block comment
- Multiline comment from kernel.org code style, [](https://www.kernel.org/doc/Documentation/process/coding-style.rst)
```
/*
 * This is the preferred style for multi-line
 * comments in the Linux kernel source code.
 * Please use it consistently.
 *
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 */
```

Comments may appear anywhere where a ==blank, tab or newline== can appear (whitespace character).

In C you must ==declare all== variables before they are used.
<!--SR:!2023-06-02,3,247-->

A declaration announces ==the properties== of variables.

Declaration consists of a ==[[C_data_types|type]], a list of one or more
variable names, optionally initial value==. Example: `int fahr, celsius = 0`.
<!--SR:!2023-05-23,11,228-->

What this code can output?
```c
##include <stdio.h>
printf("Int size: %d byte sizeof(int)", sizeof(int));
printf("Float size: %d byte sizeof(float)", sizeof(float));
```
<br class="f">
Now days it will output (of course, depends on your system, machine, compiler,
etc.):
```
Int size: 4 byte sizeof(int)
Float size: 4 byte sizeof(float)
```
<!--SR:!2023-05-26,14,248-->

Which [[C_data_types]] you know, for example 7 basic data types?
<br class="f">
- `char` - Character
- `int` - Integer (signed or unsigned, short, long, long long)
- `float` - Floating point number
- `double` - Double precision floating point number
- `array` - Array of values (this values described above)
- `struct` - Structure of values
- `union` - Union of values
- `pointer` - Pointer to a value, universal type
- `functions` that return values of any type

Assignment statement can be described as ==`<variable> = <expression>;`==.

For example, we have while loop, when we break it?
```c
while (c = getchar() != EOF) {
    printf("%d\n", c);
}
```
<br class="f">
When we press `Ctrl+D` (EOF) or `Ctrl+C` (SIGINT).
If we in loop body, we execute all statements, and then check condition, so we
will get `1` or `0` (true or false). If false, we will break loop.
SIGINT - terminate process by signal (Ctrl+C), so we break program itself.
<!--SR:!2023-07-24,83,268-->

The indentation emphasizes the ==logical structure== of the program.

Why in C we need to-use proper indentation, with some style?
<br class="f">
Because it's critical in making programs easy for people to read.

What you receive if execute this code?
```c
printf("%d", 5/9);
```
<br class="f">
```c
// C truncates any fractional part of an integer result.
printf("%d", 5/9); // 0
```
<!--SR:!2023-05-15,3,267-->

Can you describe main sections of this code? For example first line is an
include header...
```c
##include <stdio.h>
/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */
int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
```
<br class="f">
Including header file, main function, variables declaration, assignment
statements, while loop, loop body statements.

`printf("%d\t%d\n", fahr, celsius);` Each % construction in the first argument
of [[printf_format_string|printf]] is paired with the:
corresponding ==second argument==.

Is printf part of C language, does it's unified?
<br class="f">
No it's part of standard library, and the behavior of `printf` is defined in the
ANSI standard, so its properties should be the same with any compiler.
<!--SR:!2024-09-04,300,267-->

`scanf` is like ==`printf`==
<!--SR:!2023-05-15,3,267-->

Print the first number `fahr` in a field three digits wide, and the second
`celsius` in a field six digits wide. Write statement.
<br class="f">
```c
printf("%3d %6d\n", fahr, celsius);
```
<!--SR:!2023-06-15,34,268-->

If an arithmetic operator has only integer operands, an ==integer== operation is
performed.
<!--SR:!2023-06-16,35,268-->

If an arithmetic operator has floating-point operands and integer operands, a
==floating-point operation is performed, integers will be converted==.

If variable has floating-point nature, but can be written using integral values
(C will convert it), better to write it with explicit with
==decimal points for human readers==.
<!--SR:!2023-06-12,31,248-->

[[printf_format_string|printif]] check this note for details how '%'
placeholder in printf work.

### 1.3 The for statement /16

In any context where it is permissible to use the value of some type, you can
use ==a more complicated expression of that type==.
<!--SR:!2023-07-29,60,267-->

Describe each part of for loop control structure.
```c
/* print Fahrenheit-Celsius table */
int fahr;
for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
```
<br class="f">
- `fahr = 0` - **initialization**, done once before loop starts
- `fahr <= 300` - **condition** (test), controls the loop (execute if true),
runs before each iteration
- `fahr = fahr + 20` or `fahr += 20` - **increment** step, after this step
executed condition will be revalidated.

The initialization, condition and increment can be any expressions, is that
true?
<br class="f">
Yes, any **valid** expressions. - [ ] test it.

### 1.4 Symbolic Constants /17

A `#define` line defines a ==`symbolic name` or `symbolic constant`== to be a
particular string of character (token string). Generally speaking `#define`
directive defines a **macro**.
<!--SR:!2023-06-24,25,247-->

How to define symbolic name or symbolic constant?
<br class="f">
Need use `#define name replacement list` statement.

Why we used here `#define` here? Why not just place this definitions in for loop
control structure?
```c
##include <stdio.h>
##define LOWER 0   /* lower limit of table */
##define UPPER 300 /* upper limit */
##define STEP  20  /* step size */
/* print Fahrenheit-Celsius table */
int main() {
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    return 0;
}
```
<br class="f">
Its bad practice to bury **magic numbers** like 300 and 20 in program.

### 1.5 Character Input and Output /18

A text stream is a sequence of ==characters==
<!--SR:!2024-08-28,293,268-->

Each line in text stream is terminated by a special character, called a
==newline==.
<!--SR:!2023-06-20,21,208-->

What output you receive if you run this program?
```c
putchar('H');
printf("ello, world!\n");
putchar('G');
```
<br class="f">
```
Hello, world!
G
```
<!--SR:!2023-08-06,68,288-->

#### 1.5.1 File Copying /18

What does this code do, describe main steps?
```c
int c;
c = getchar();
while (c != EOF) {
    putchar(c);
    c = getchar();
}
```
<br class="f">
```
Read character from input stream
    while (character is not EOF)
        output the character just read
        read next character
```
<!--SR:!2024-07-11,245,267-->

#### 1.5.2 Character Counting /20

Can this program to count characters simplified?
```c
long nc;
nc = 0;
while (getchar() != EOF) {
    ++nc;
}
printf("%ld\n", nc);
```
<br class="f">
Yes, we can use `for` loop instead of `while` loop. And additionally we can use
double to count characters.
```c
double nc;
for (nc = 0; getchar() != EOF; ++nc) {
    ; // grammar requires a statement here, `null statement` is used
}
printf("%.0f\n", nc); // supress floating point, by %.0f
```
<!--SR:!2023-07-23,54,247-->

Programs should act intelligently when given ==zero==-length input.
<!--SR:!2023-08-08,70,287-->

Difference between `++nc` and `nc++`
<br class="f">
`++nc` - increment `nc` before use it, and return incremented value.
`nc++` - return `nc` value and then increment it.
<!--SR:!2023-06-28,29,267-->

`%ld` is ==`long`== integer placeholder

`%.0f` how this placeholder format this value: `3.14159` - ==`3`==

`%6.1f` what this placeholder means?
<br class="f">
`6` - minimum field width, `1` - precision, `f` - floating point number.

#### 1.5.3 Line Counting /21

```c
##include <stdio.h>

/* count lines in input */
int main() {
    int c, nl; // init charcter and line counter

    nl = 0; // init line counter
    while ((c = getchar()) != EOF) { // while not eof
        if (c == '\n') { // comapre character with newline
            ++nl;        // increment line counter
        }
    }
    printf("%d\n", nl); // print line counter
    return 0;
}
```

`'\n'`is a ==newline character==, `0x0A` in hex, `10` in decimal.
<!--SR:!2024-01-12,244,268-->

#### 1.5.4 Word Counting /22

```c
##include <stdio.h>

##define IN  1 /* inside a word */
##define OUT 0 /* outside a word */

/* count lines, words, and characters in input */
int main() {
    int c, nl, nw, nc, state; // declare counters

    state = OUT; // we outside of word by default
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc; // we read at least 1 char
        if (c == '\n')
            ++nl; // new line

        if (c == ' ' || c == '\n' || c == '\t')
            // if condition true, we 100% outside of word
            state = OUT; // word[' '|'\n'|'\t']word
        else if (state == OUT) {
            // we need check OUT state, to count words correctly
            state = IN;
            ++nw;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);
}
```

An assignment is an expression with the value and assignments associated from
(direction) ==right to left, like `nl = (nw = (nc = 0));`==.
<!--SR:!2023-06-07,8,228-->

Expressions connected by && or || are evaluated (direction) ==left to right==.
<!--SR:!2023-07-17,76,248-->

### 1.6 Arrays /23

White space characters are
<br class="f">
-  ` ` Space
- `\t` Tab
- `\n` Newline, or line feed
- `\v` Vertical tab
- `\f` Form feed
- `\r` Carriage return
Because they serve the same purpose as the spaces between words and lines on a
printed page — they make reading easier.
<!--SR:!2023-06-13,32,248-->

```c
##include <stdio.h>

/* count digits, white space, others */
int main() {
    int c, i, nwhite, nother;
    int ndigit[10]; // array of 10 integers, 0-9
                    // in python we can just use something like this:
                    // ndigit = [0] * 10

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0; // we init digits array with zeros

    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9') { // here we compare code, like 53 >= 48 and 53 <= 57
            ++ndigit[c-'0']; // means code X - code 0, like 53 - 48 = 5
                             // then we increment 5th element of array
        }
        else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        }
        else {
            ++nother;
        }

    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n",
           nwhite, nother);
}
```

By definition, `chars` are just small ==integers==
<!--SR:!2023-07-19,78,250-->

```c
##include <stdio.h>
int main() {
    printf("char size in bytes %d\n", sizeof(char));
}
```

### 1.7 Functions /25

Function encapsulate things, so we can reuse it in different places and don't
worry about ==its implementation==.
<!--SR:!2023-06-17,36,288-->

If you have properly designed function, you can ==ignore how job is done and
just know what is done is sufficient==.
<!--SR:!2023-05-29,17,268-->

$2^5$ is ==32==.
<!--SR:!2024-01-04,56,228-->

`pow(x,y)` is equal to?
<br class="f">
$X^y$

Where better to put function comment description?
<br class="f">
Above function declaration.
<!--SR:!2023-05-17,4,274-->

```c
##include <stdio.h>

// function prototype
int power(int m, int n);

/* test power function */
int main() {
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n) {
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}
```

Can you describe form of function definition?
<br class="f">
```
return type function_name (parameter declarations, if any) {
    declarations
    statements
}
```

Where functions arguments (parameters) and local variables available.
<br class="f">
This is functions scope, and it's local to function.
<!--SR:!2023-12-28,49,208-->

Just like local variables, formal arguments are ==destroyed== when the function
ends.
<!--SR:!2023-12-22,224,250-->

Can you write formal and actual parameters for power function?
<br class="f">
```c
int power(int base, int n); // formal parameters
power(1, 2); // actual parameters
```
<!--SR:!2023-07-26,57,248-->

Describe this return values of **main** function: 0, 1
<br class="f">
0 - usually this means normal termination
1 - some signal, unusual or erroneous termination condition
<!--SR:!2023-07-30,61,267-->

How/where declare function prototype?
<br class="f">
You need to write function prototype, before it will be used.
It can be declared like this:
```c
int power(int base, int n); // formal parameters
...
...
some function which use power
...
...
function decalaration
```
<!--SR:!2023-06-11,30,248-->

Well-chosen names are good self-==documenting== code
<!--SR:!2023-08-23,80,267-->

### 1.8 Arguments - Call by Value /28

In C, all function arguments are passed by ==value, unless argument is
pointer/array==.

Passing arguments by value called ==call by value==, while some other languages
use call by reference (FORTRAN as example).
<!--SR:!2023-05-15,3,267-->

Worth to check strategy.

Call by value usually leads to more compact programs with fewer extraneous
variables, because parameters can be treated as conveniently initialized local
variables in the called routine. In other words can be used as ==temporary
variables==.

C allows use call by reference by using ==pointers== to variables.
<!--SR:!2023-06-27,28,267-->

When the name of an array is used as an argument, the value passed to the
function is ==the location or address of the beginning of the array==.
<!--SR:!2023-05-15,3,267-->


### 1.9 Character Arrays /29

The most common type of array in C is the ==array of characters==.
<!--SR:!2023-07-18,49,287-->

Pseudocode to get the longest line from stdin:
```
while (there's another line)
    if (it's longer than the previous longest)
        (save it)
        (save its length)
print longest line
```

C implementation:
```c
/*
 * Program to print the longest input line
 */

##include <stdio.h>
##define MAXLINE 10000 /* maximum input line length */

// Functions prototypes
int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    /* private or local variables to main */
    int len;            /* current line length */
    int max;            /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0; // initialize max line length
    while ((len = getline(line, MAXLINE)) > 0
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) /* there was a line */
        printf("%s", longest);
    return 0;
}

/* getline: read a line into s, return length */
/* lim - limit */
int getline(char s[], int lim) {
    int c, i;

    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
```

If a return type isn't specified, the C compiler assumes a default return type
of ==int==.
<!--SR:!2023-06-08,4,247-->

The return type of ==void== states explicitly that no value is returned.
<!--SR:!2023-05-15,3,267-->

Each string terminates with a ==null character, '\0' equal to 0==.

Null character is not part of normal text.

Each local variable in a function comes into existence only when the function is
called, and disappears when the function is exited. This is why such variables
are usually known as ==automatic variables==.
<!--SR:!2023-05-16,3,254-->

### 1.10 External Variables and Scope /31

To use external variable you need to ==define and declare== it.
<!--SR:!2023-05-23,6,227-->

"Definition" refers to the place where the variable is created or assigned
storage; "declaration" refers to places where the nature of the variable is
stated, but no storage is allocated.

```c
##include <stdio.h>

##define MAXLINE 1000   /* maximum input line size */

// Define external variables
int max;               /* maximum length seen so far */
char line[MAXLINE];    /* current input line */
char longest[MAXLINE]; /* longest line saved here */

int getline(void);
void copy(void);

/* print longest input line; specialized version */
int main() {
    int len;

    // Declare external variables
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = getline()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0) /* there was a line */
        printf("%s", longest);
    return 0;
}

/* getline: specialized version */
int getline(void) {
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE - 1
        && (c = getchar()) != EOF && c != '\n'; ++i)
            line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/* copy: specialized version */
void copy(void) {
    int i;
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}
```

Syntactically, external definitions are just like definitions of local
variables, but since they occur ==outside== of functions, the variables are
external.
<!--SR:!2023-06-03,17,267-->

Keyword `extern` used to?
<br class="f">
Before a function can use an external variable, the name of the variable must be
made known to the function. And write `extern` keyword in declaration is the way
to do that. So it's used to declare external declaration, for global variable,
function, or template declaration.

In fact, common practice is to place definitions of all external variables at
the beginning of the source file to?
<br class="f">
To omit all `extern` declarations. Since definitions of external variables
occurs before any function, the `extern` keyword is not necessary.

The usual practice is to collect `extern` declarations of variables and
functions in a separate file, historically called a ==header==, that is included
by `#include` at the front of each source file. The header can be included in
more than one source file, so the declarations need to be written only once
(since we follow rule to omit `extern` keyword in definition).
<!--SR:!2023-05-15,3,267-->

Does need to heavily use `extern` variables?
<br class="f">
It's complicate things, if you have a lot of `extern` variables, it's hard to
keep track of them (their values can be change unexpectably) and hard to modify
program.
<!--SR:!2023-06-23,24,247-->


## Chapter 2 - Types, Operators and Expressions /35

Which core language parts usually program consists of?
<br class="f">
1. variables and constants
2. declaration lists for those variables and constants (type, size, initial
   values)
3. operators which specify what to do with the variables and constants
4. expressions which combine variables and constants into larger units and
   produce new values
<!--SR:!2023-06-02,3,194-->

The type of object determines (variable, expression...)?
<br class="f">
The set of values it can have and what operations can be performed on it.

### 2.1 Variable Names /35

Which variable names rules you should follow?
<br class="f">
- begin with a letter, `aA-zZ`
- underscore counts as a letter, but don't use it as first character, since
  library routines often use such names
- case-sensitive, so `x` and `X` are different variables
- traditionally used lower case for variable names, upper case for symbolic
  constants
<!--SR:!2023-05-15,3,254-->

At least first ==31== characters of an internal name are significant.
<!--SR:!2023-06-05,4,234-->

For external names, the standard guarantees' uniqueness only for ==6==
characters and single case.
<!--SR:!2023-07-30,61,274-->

Which reserved keywords in C you know, can they be used as variable names?
<br class="f">
`if, else, int, float, char, for, while, do, return, switch`, no they can't be
used as variable names.
<!--SR:!2023-06-26,27,254-->

If you choose variable name, how you choose its name?
<br class="f">
lowercase, `_` as word separator, can be short for local variables (especially
loop indices), for external can be longer, but in limit's range.


### 2.2 Data Types and Sizes /35

Can we omit `int` in `short` and `long` declarations?
<br class="f">
Yes, `int` is assumed if not specified and typically omitted.

Which number bigger `float` or `double`?
<br class="f">
`double` is bigger than `float`.

Can `float` and `double` have `short` and `long` modifiers?
<br class="f">
No, only `int` can have `short` and `long` modifiers.

Can `signed` and `unsigned` be used with `float` and `double`?
<br class="f">
No, only `int` and `char` can have `signed` and `unsigned` modifiers.

Min size of `short` and `int` is ==16== bits. But `int` usually ==32== bits.

What value range have `unsigned char`?
<br class="f">
`0` to `255`.

What value range have `signed char`?
<br class="f">
`-128` to `127`.

Default `char` is `signed` or `unsigned`?
<br class="f">
It's implementation-defined, so it's better to specify explicitly. But printable
characters are always positive.

Plain `int` is equivalent to ==`signed int`==.
<!--SR:!2024-05-21,194,234-->

### 2.3 Constants /36

`1234` as is in code it's?
<br class="f">
`int` constant.

`123456789L` as is in code it's?
<br class="f">
`long` constant.
<!--SR:!2023-05-16,3,254-->

`123456789U` as is in code it's?
<br class="f">
`unsigned int` constant.

`123456789UL` as is in code it's?
<br class="f">
`unsigned long` constant.

`037` as is in code it's?
<br class="f">
`int` constant in octal.

`0xdeadbeef` as is in code it's?
<br class="f">
`int` constant in hexadecimal.

`0XDEADBEEFUL` as is in code it's?
<br class="f">
`unsigned long` constant in hexadecimal.

`'x'` as is in code it's?
<br class="f">
a character constant, integer, written as one character within single quotes.

`'0'` has the value ==48== in the ASCII character set, which is unrelated to the
numeric 0 value.

Can we use numeric operators with `char`?
<br class="f">
Yes, `char` is just small integer. But often `char` used in comparisons with
other characters.

Is escape sequences like `'\n'` represent two characters or one?
<br class="f">
One, it's single character.
<!--SR:!2023-08-03,65,294-->

Is `'\000'` represent one character or three?
<br class="f">
One, it's single character. `000` is one to three octal digits.
ASCII vertical tab is `'\013'`.
ASCII bell character is `'\007'`.

Is `'\xhh'` represent one character or two?
<br class="f">
One, it's single character. `hh` is one or more hexadecimal digits.
ASCII vertical tab is `'\xb'`.
ASCII bell character is `'\x7'`.
<!--SR:!2024-09-15,311,274-->

The character `'\0'` represents the character with ==zero== value, the null
character.

`'\0'` is often written instead of ==`0` (numeric value)== to emphasize the
character nature of some expression.

A `constant expression` is an expression that involves ==only constants==.

Constant expression can be evaluated during compilation rather than run time,
and can be used in any place that a ==constant can==.

Is this constant expression - `int days[31+28+LEAP+31]` where `LEAP` = `#define
LEAP 1`?
<br class="f">
Yes, it's constant expression.

Is `string constant` different from `string literal`?
<br class="f">
No, they are the same. `"hello, world\n"` is a string constant, or string
literal, is a sequence of characters surrounded by double quotes.
<!--SR:!2023-06-22,23,254-->

How concatenation of string literals works?
<br class="f">
Adjacent string literals are concatenated into a single string.

`"hello, " "world"` is equivalent to `"hello, world"`.
String constants can be concatenated at compile time.

Is `array of characters` different from `string`?
<br class="f">
No, they are the same. A string is an array of characters terminated by `\0`.

`strlen` function (from `string.h`) equivalent core logic is?
<br class="f">
You need scan array of characters until `\0` is found, and increment counter
during this scan.
```c
/* strlen: return length of s */
int strlen(char s[])
{
    int i;
    i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}
printf("%d\n", strlen("hello, world")); /* 12 */
```

Is `'x'` is same as `"x"`?
<br class="f">
No, `'x'` is a single character, `"x"` is a string constant (contains 2
entities).
<!--SR:!2023-06-30,31,274-->

**Enumeration constant** is a list of constant ==integer values==, like `enum
boolean { NO, YES };`.

`enum months { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};`, where `JAN` = `1`, `FEB` = ?, ...
<br class="f">
`FEB` = `2`, `MAR` = `3`, ..., `DEC` = `12`.
<!--SR:!2023-05-17,4,274-->

Can we use identical names in different enumerations in same enumeration
constant?
<br class="f">
No, names in different enumerations must be distinct. But values can be same.

Is enumeration usually better than `#define`?
<br class="f">
Yes, enumeration is usually better than `#define` because enumeration offer the
chance of checking and debugger may print enumeration values in their symbolic
form.

### 2.4 Declarations /39


```c
char c, line[1000];
line[0] = 't';
line[1] = 'e';
line[2] = 's';
line[3] = 't';
printf("%s\n", line); /* test */
```
What is `c` and `line`?
<br class="f">
`c` is a `char` variable, `line` is an array of `char`.
<!--SR:!2023-05-16,3,254-->

```c
##define MAXLINE 1000
int limit = MAXLINE + 1;
printf("%d\n", limit); /* 1001 */
```
```
Is this declaration valid?
<br class="f">
Yes, it's valid, you can use expressions in initializers.
```

Difference between automatic and non-automatic variables in terms of
initialization?
<br class="f">
Not-automatic initialized once, before program starts execution. Explicitly
initialized automatic variables are initialized each time the function or block
it is in is entered.
<!--SR:!2023-12-02,23,234-->

External and static variables are initialized to ==zero== by default.

Automatic variables for which there is no explicit initializer have
==undefined or garbage== values.

How to define constant in declaration?
<br class="f">
Use `const` keyword, like `const double e = 2.71828182845905;` or `const char
msg[] = "warning: ";`.

Is here allowed to use `const` keyword `int strlen(const char[]);`, if yes why?
<br class="f">
Yes, it can be used with array arguments to indicate that the function does not
change that array. Result is implementation dependent if an attempt is made to
change a `const` object.
<!--SR:!2023-06-21,22,234-->

### 2.5 Arithmetic Operators /40

Which arithmetic operations you know (5 operations)?
<br class="f">
`+`, `-`, `*`, `/`, `%` (modulus, truncating any fractional part)

What values you get from 100 % 3, 21 % 5, 1 % 3, 20 % 4?
<br class="f">
```c
printf("%f\n", 100.0 % 3); /* 1 */
printf("%f\n", 21.0 % 5); /* 1 */
printf("%f\n", 1.0 % 3); /* 1 */
printf("%f\n", 20 % 4); /* 0 */
```

Can `%` used with `float` or `double`?
<br class="f">
No, `%` can be used only with `int` operands.

Oder of precedence of arithmetic operators (higher first)?
<br class="f">
1. Unary operators: `+`, `-`
2. Multiplicative operators: `*`, `/`, `%`
3. Additive operators: `+`, `-`

### 2.6 Relational and Logical Operators /40

`>`, `>=`, `<`, `<=`, `==`, `!=` are relational and equality operators. Which
precedence they have?
<br class="f">
1. Relational operators: `>`, `>=`, `<`, `<=`
2. Equality operators: `==`, `!=`

Is relational operators has higher precedence than arithmetic operators?
<br class="f">
No, arithmetic operators has higher precedence than relational operators.
`i < lim - 1` is equivalent to `i < (lim - 1)`.

How expression with `&&` and `||` is evaluated?
<br class="f">
`&&` and `||` are evaluated left to right, and evaluation stops as soon as the
truth or falsehood of the result is known.

Which precedence has `&&` and `||`?
<br class="f">
1. Logical AND: `&&`
2. Logical OR: `||`

Is `&&` and `||` has higher precedence than relational or equality
operations?
<br class="f">
No, relational and equality operations has higher precedence than `&&` and `||`.

The numeric value of a relational or logical expression are?
<br class="f">
`0` if ==false==, `1` if ==true==.

Unary negation operator `!` converts non-zero operand and zero operand to?
<br class="f">
`0` and `1` respectively.
```c
printf("%d\n", !0); /* 1 */
printf("%d\n", !1); /* 0 */
printf("%d\n", !""); /* 0 */
printf("%d\n", !"hello"); /* 0 */
printf("%d\n", !'\0'); /* 1 */
```

### 2.7 Type Conversions /41

Which one is operand, operator and operation in `a = b + c;`?
<br class="f">
`b` and `c` are operands, `+` is operator, `b + c` is operation.

```c
/* atoi: convert s to integer */
int atoi(char s[])
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}
printf("%d\n", atoi("123")); /* 123 */
```

```c
/* lower: convert c char to lower case; ASCII only */
int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}
```

Which header file is needed for `tolower` and `isdigit`?
<br class="f">
`ctype.h`

Why need to specify `signed` or `unsigned` if non-character data is to be stored
in `char` variables?
<br class="f">
If you're relaying on `char` numeric value, and you store non-character data,
you need explicitly specify `signed` or `unsigned` to avoid undefined behavior.

Which value `d` have if `c` is a digit or not in `if` test part?
`if d = c >= '0' && c <= '9';`
<br class="f">
`d` is `1` if `c` is a digit, otherwise `0`.
In `if, while, for, etc.`, "true" just means "non-zero".

General rule in implicit conversions?
<br class="f">
"Lower" type is converted to "higher" type. The result is of the "higher" type.
Check section 6 of appendix A for more details.

Can you describe 5 steps of conversion of different types if there are no
unsigned operands (some expression with multiple operands)?
<br class="f">
1. If either operand is `long double`, convert the other to `long double`.
2. Otherwise, if either operand is `double`, convert the other to `double`.
3. Otherwise, if either operand is `float`, convert the other to `float`.
4. Otherwise, convert `char` and `short` to `int`.
5. Then, if either operand is `long`, convert the other to `long`.

Will we convert value of right side to left, on assignment?
<br class="f">
Yes, the value of the right side is converted to the type of the left side.
