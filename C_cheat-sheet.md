---
created: 2025-02-06T10:24+03:00
tags:
  - blog
  - cheat-sheets
  - now
sr-due: 2025-08-02
sr-interval: 15
sr-ease: 228
---

# C cheat-sheet

In the following sections, I'll describe the basics of [[C]] programming
language with Q/A flashcards based on learnxinyminutes [^1] cheatsheet.

How to use single-line and multi-line comments.
<br class="f">
```c
int main() {
// Single-line comments start with // - only available in C99 and later.

/*
Multi-line comments look like this. They work in C89 as well.
*/
```

Are multi-line comments nestable?
```c
/*
Multi-line comments don't nest /* Be careful */  // comment ends on this line...
*/ // ...not this one!
}
```

How to declare constants, are constants must be being written in all-caps?
<br class="f">
```c
#include <stdio.h>

// Constants: #define <keyword>
// Constants are written in all-caps out of convention, not requirement
#define DAYS_IN_YEAR 365

int main(){
  printf("In year usually %d days\n", DAYS_IN_YEAR);
}
```

How to declare enumeration constants?
<br class="f">
```c
#include <stdio.h>

// Enumeration constants are also ways to declare constants.
// All statements must end with a semicolon
enum days {SUN, MON, TUE, WED, THU, FRI, SAT};
// SUN gets 0, MON gets 1, TUE gets 2, etc.

// Enumeration values can also be specified
enum days_specifed {SUN_S = 1, MON_S, TUE_S, WED_S = 99, THU_S, FRI_S, SAT_S};
// MON gets 2 automatically, TUE gets 3, etc.
// WED get 99, THU gets 100, FRI gets 101, etc.

int main() {
  printf("Today is %d?\n", SUN);
  printf("NO! Today is %d\n", MON);
}
```

How to import C Standard Library header files?
<br class="f">
Need to import headers with `#include`:
```c
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(){}
```

How to use single-line and multi-line comments?
<br class="f">
```c
int main() {
// Single-line comments start with // - only available in C99 and later.

/*
Multi-line comments look like this. They work in C89 as well.
*/
```

Are multi-line comments nestable?
```c
/*
Multi-line comments don't nest /* Be careful */  // comment ends on this line...
*/ // ...not this one!
}
```

How to declare constants, are constants must be being written in all-caps?
<br class="f">
```c
#include <stdio.h>

// Constants: #define <keyword>
// Constants are written in all-caps out of convention, not requirement
#define DAYS_IN_YEAR 365

int main(){
  printf("In year usually %d days\n", DAYS_IN_YEAR);
}
```

How to declare enumeration constants?
```c
#include <stdio.h>

// Enumeration constants are also ways to declare constants.
// All statements must end with a semicolon
enum days {SUN, MON, TUE, WED, THU, FRI, SAT};
// SUN gets 0, MON gets 1, TUE gets 2, etc.

// Enumeration values can also be specified
enum days_specifed {SUN_S = 1, MON_S, TUE_S, WED_S = 99, THU_S, FRI_S, SAT_S};
// MON gets 2 automatically, TUE gets 3, etc.
// WED get 99, THU gets 100, FRI gets 101, etc.

int main() {
  printf("Today is %d?\n", SUN);
  printf("NO! Today is %d\n", MON);
}
```

How to import C Standard Library header files?
<br class="f">
Need to import headers with `#include` and file name in `<angle backets>`:
```c
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(){}
```

How to include header files from local files with relative paths?
<br class="f">
File names between `<angle brackets>` tell the compiler to look in your system
libraries for the headers. For your own headers, use double quotes instead of
angle brackets, and provide the path:
```c
#include "my_header.h" 		// local file
#include "../my_lib/my_lib_header.h" //relative path
```

How/where to declare function **signatures** in advance?
```c
// At a minimum, you must declare a 'function prototype' before its use in any
// function.
int add_two_ints(int x1, int x2); // function prototype
// although `int add_two_ints(int, int);` is also valid (no need to name the
// args), it is recommended to name arguments in the prototype as well for
// easier inspection

// Normally, prototypes are placed at the top of a file before any function
// definition. You can declare them a .h file, or at the top of your .c file.
void function_1();
int function_2(void);
```

<!-- WARN: stopped here -->
<!-- [Learn C in Y Minutes](https://learnxinyminutes.com/c/) -->

When function prototypes are not necessary?
```c
// Function prototypes are not necessary if the function definition comes before
// any other function that calls that function. However, it's standard practice to
// always add the function prototype to a header file (*.h) and then #include that
// file at the top. This prevents any issues where a function might be called
// before the compiler knows of its existence, while also giving the developer a
// clean header file to share with the rest of the project.
```

What is program entry point?
```c
// Your program's entry point is a function called "main". The return type can
// be anything, however most operating systems expect a return type of `int` for
// error code processing.
int main(void) {
  // your program
}
```

How to pass command line arguments to main function?
```c
// The command line arguments used to run your program are also passed to main
// argc being the number of arguments - your program's name counts as 1
// argv is an array of character arrays - containing the arguments themselves
// argv[0] = name of your program, argv[1] = first argument, etc.
int main (int argc, char** argv)
{
  // print output using printf, for "print formatted"
  // %d is an integer, \n is a newline
  printf("%d\n", 0); // => Prints 0

  // take input using scanf
  // '&' is used to define the location
  // where we want to store the input value
  int input;
  scanf("%d", &input);
}
```

How to print output and take input?
```c
  // print output using printf, for "print formatted"
  // %d is an integer, \n is a newline
  printf("%d\n", 0); // => Prints 0

  // take input using scanf
  // '&' is used to define the location
  // where we want to store the input value
  int input;
  scanf("%d", &input);
```

How to declare variables?
```c
  // ints are usually 4 bytes (use the `sizeof` operator to check)
  int x_int = 0;

  // shorts are usually 2 bytes (use the `sizeof` operator to check)
  short x_short = 0;

  // chars are defined as the smallest addressable unit for a processor.
  // This is usually 1 byte, but for some systems it can be more (ex. for TMS320 from TI it's 2 bytes).
  char x_char = 0;
  char y_char = 'y'; // Char literals are quoted with ''

  // longs are often 4 to 8 bytes; long longs are guaranteed to be at least
  // 8 bytes
  long x_long = 0;
  long long x_long_long = 0;

  // floats are usually 32-bit floating point numbers
  float x_float = 0.0f; // 'f' suffix here denotes floating point literal

  // doubles are usually 64-bit floating-point numbers
  double x_double = 0.0; // real numbers without any suffix are doubles

  // integer types may be unsigned (greater than or equal to zero)
  unsigned short ux_short;
  unsigned int ux_int;
  unsigned long long ux_long_long;
```

What is the size of char in ASCII character set?
```c
  // chars inside single quotes are integers in machine's character set.
  '0'; // => 48 in the ASCII character set.
  'A'; // => 65 in the ASCII character set.
```

How to get the size of a variable?
```c
  // sizeof(T) gives you the size of a variable with type T in bytes
  // sizeof(obj) yields the size of the expression (variable, literal, etc.).
  printf("%zu\n", sizeof(int)); // => 4 (on most machines with 4-byte words)
```

Arrays must be initialized with a concrete size?
```c
  // Arrays must be initialized with a concrete size.
  char my_char_array[20]; // This array occupies 1 * 20 = 20 bytes
  int my_int_array[20]; // This array occupies 4 * 20 = 80 bytes
  // (assuming 4-byte words)
```

How to initialize an array of twenty ints that all equal 0?
```c
  // You can initialize an array of twenty ints that all equal 0 thusly:
  int my_array[20] = {0};
  // where the "{0}" part is called an "array initializer".
  // All elements (if any) past the ones in the initializer are initialized to 0:
  int my_array[5] = {1, 2};
  // So my_array now has five elements, all but the first two of which are 0:
  // [1, 2, 0, 0, 0]
```

How to evaluate the size of the array at run-time?
```c
  // To evaluate the size of the array at run-time, divide its byte size by the
  // byte size of its element type:
  size_t my_array_size = sizeof(my_array) / sizeof(my_array[0]);
```

How to declare variable-length arrays (VLAs)?
```c
  // In C99 (and as an optional feature in C11), variable-length arrays (VLAs)
  // can be declared as well. The size of such an array need not be a compile
  // time constant:
  printf("Enter the array size: "); // ask the user for an array size
  int array_size;
  fscanf(stdin, "%d", &array_size);
  int var_length_array[array_size]; // declare the VLA
  printf("sizeof array = %zu\n", sizeof var_length_array);
```

What are strings?
```c
  // Strings are just arrays of chars terminated by a NULL (0x00) byte,
  // represented in strings as the special character '\0'.
  // (We don't have to include the NULL byte in string literals; the compiler
  //  inserts it at the end of the array for us.)
  char a_string[20] = "This is a string";
  printf("%s\n", a_string); // %s formats a string
```

How to declare multi-dimensional arrays?
```c
  // Multi-dimensional arrays:
  int multi_array[2][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 0}
  };
  // access elements:
  int array_int = multi_array[0][2]; // => 3
```

How to do arithmetic operations?
```c
  // Arithmetic is straightforward
  i1 + i2; // => 3
  i2 - i1; // => 1
  i2 * i1; // => 2
  i1 / i2; // => 0 (0.5, but truncated towards 0)

  // You need to cast at least one integer to float to get a floating-point result
  (float)i1 / i2; // => 0.5f
  i1 / (double)i2; // => 0.5 // Same with double
  f1 / f2; // => 0.5, plus or minus epsilon
```

How to do comparison operations?
```c
  // Comparison operators are probably familiar, but
  // there is no Boolean type in C. We use ints instead.
  // (C99 introduced the _Bool type provided in stdbool.h)
  // 0 is false, anything else is true. (The comparison
  // operators always yield 0 or 1.)
  3 == 2; // => 0 (false)
  3 != 2; // => 1 (true)
  3 > 2;  // => 1
  3 < 2;  // => 0
  2 <= 2; // => 1
  2 >= 2; // => 1
```

How to do logical operations?
```c
  // Logic works on ints
  !3; // => 0 (Logical not)
  !0; // => 1
  1 && 1; // => 1 (Logical and)
  0 && 1; // => 0
  0 || 1; // => 1 (Logical or)
  0 || 0; // => 0
```

How to use conditional ternary expression?
```c
  // Conditional ternary expression ( ? : )
  int e = 5;
  int f = 10;
  int z;
  z = (e > f) ? e : f; // => 10 "if e > f return e, else return f."
```

How to use increment and decrement operators?
```c
  // Increment and decrement operators:
  int j = 0;
  int s = j++; // Return j THEN increase j. (s = 0, j = 1)
  s = ++j; // Increase j THEN return j. (s = 2, j = 2)
  // same with j-- and --j
```

How to use bitwise operators?
```c
  // Bitwise operators!
  ~0x0F; // => 0xFFFFFFF0 (bitwise negation, "1's complement", example result for 32-bit int)
  0x0F & 0xF0; // => 0x00 (bitwise AND)
  0x0F | 0xF0; // => 0xFF (bitwise OR)
  0x04 ^ 0x0F; // => 0x0B (bitwise XOR)
  0x01 << 1; // => 0x02 (bitwise left shift (by 1))
  0x02 >> 1; // => 0x01 (bitwise right shift (by 1))
```

How to use if-else statements?
```c
  if (0) {
    printf("I am never run\n");
  } else if (0) {
    printf("I am also never run\n");
  } else {
    printf("I print\n");
  }
```

How to use while loops?
```c
  // While loops exist
  int ii = 0;
  while (ii < 10) { //ANY value less than ten is true.
    printf("%d, ", ii++); // ii++ increments ii AFTER using its current value.
  } // => prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9, "
```

How to use do-while loops?
```c
  int kk = 0;
  do {
    printf("%d, ", kk);
  } while (++kk < 10); // ++kk increments kk BEFORE using its current value.
  // => prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9, "
```

How to use for loops?
```c
  // For loops too
  int jj;
  for (jj=0; jj < 10; jj++) {
    printf("%d, ", jj);
  } // => prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9, "
```

How to use switch statements?
```c
  // branching with multiple choices: switch()
  switch (a) {
  case 0: // labels need to be integral *constant* expressions (such as enums)
    printf("Hey, 'a' equals 0!\n");
    break; // if you don't break, control flow falls over labels
  case 1:
    printf("Huh, 'a' equals 1!\n");
    break;
    // Be careful - without a "break", execution continues until the
    // next "break" is reached.
  case 3:
  case 4:
    printf("Look at that.. 'a' is either 3, or 4\n");
    break;
  default:
    // if `some_integral_expression` didn't match any of the labels
    fputs("Error!\n", stderr);
    exit(-1);
    break;
  }
```

How to use goto statements?
```c
  /*
    Using "goto" in C
  */
  typedef enum { false, true } bool;
  // for C don't have bool as data type before C99 :(
  bool disaster = false;
  int i, j;
  for(i=0; i<100; ++i)
  for(j=0; j<100; ++j)
  {
    if((i + j) >= 150)
        disaster = true;
    if(disaster)
        goto error;  // exit both for loops
  }
  error: // this is a label that you can "jump" to with "goto error;"
  printf("Error occurred at i = %d & j = %d.\n", i, j);
```

How to do typecasting?
```c
  // Every value in C has a type, but you can cast one value into another type
  // if you want (with some constraints).

  int x_hex = 0x01; // You can assign vars with hex literals
                    // binary is not in the standard, but allowed by some
                    // compilers (x_bin = 0b0010010110)

  // Casting between types will attempt to preserve their numeric values
  printf("%d\n", x_hex); // => Prints 1
  printf("%d\n", (short) x_hex); // => Prints 1
  printf("%d\n", (char) x_hex); // => Prints 1
```

What is a pointer?
```c
  // A pointer is a variable declared to store a memory address. Its declaration will
  // also tell you the type of data it points to. You can retrieve the memory address
  // of your variables, then mess with them.

  int x = 0;
  printf("%p\n", (void *)&x); // Use & to retrieve the address of a variable
  // (%p formats an object pointer of type void *)
  // => Prints some address in memory;

  // Pointers start with * in their declaration
  int *px, not_a_pointer; // px is a pointer to an int
  px = &x; // Stores the address of x in px
  printf("%p\n", (void *)px); // => Prints some address in memory
  printf("%zu, %zu\n", sizeof(px), sizeof(not_a_pointer));
  // => Prints "8, 4" on a typical 64-bit system
```

How to retrieve the value at the address a pointer is pointing to?
```c
  // To retrieve the value at the address a pointer is pointing to,
  // put * in front to dereference it.
  // Note: yes, it may be confusing that '*' is used for _both_ declaring a
  // pointer and dereferencing it.
  printf("%d\n", *px); // => Prints 0, the value of x
```

How to dynamically allocate contiguous blocks of memory?
```c
  // You can also dynamically allocate contiguous blocks of memory with the
  // standard library function malloc, which takes one argument of type size_t
  // representing the number of bytes to allocate (usually from the heap, although this
  // may not be true on e.g. embedded systems - the C standard says nothing about it).
  int *my_ptr = malloc(sizeof(*my_ptr) * 20);
  for (xx = 0; xx < 20; xx++) {
    *(my_ptr + xx) = 20 - xx; // my_ptr[xx] = 20-xx
  } // Initialize memory to 20, 19, 18, 17... 2, 1 (as ints)
```

How to free a malloc'd block of memory?
```c
  // When you're done with a malloc'd block of memory, you need to free it,
  // or else no one else can use it until your program terminates
  // (this is called a "memory leak"):
  free(my_ptr);
```

How to define a function?
```c
// Function declaration syntax:
// <return type> <function name>(<args>)

int add_two_ints(int x1, int x2)
{
  return x1 + x2; // Use return to return a value
}
```

How to reverse a string in-place?
```c
// A void function returns no value
void str_reverse(char *str_in)
{
  char tmp;
  size_t ii = 0;
  size_t len = strlen(str_in); // `strlen()` is part of the c standard library
                               // NOTE: length returned by `strlen` DOESN'T
                               //       include the terminating NULL byte ('\0')
  // in C99 and newer versions, you can directly declare loop control variables
  // in the loop's parentheses. e.g., `for (size_t ii = 0; ...`
  for (ii = 0; ii < len / 2; ii++) {
    tmp = str_in[ii];
    str_in[ii] = str_in[len - ii - 1]; // ii-th char from end
    str_in[len - ii - 1] = tmp;
  }
}
//NOTE: string.h header file needs to be included to use strlen()
```

How to swap two numbers?
```c
void swapTwoNumbers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

How to return multiple values from a function?
```c
// Return multiple values.
// C does not allow for returning multiple values with the return statement. If
// you would like to return multiple values, then the caller must pass in the
// variables where they would like the returned values to go. These variables must
// be passed in as pointers such that the function can modify them.
int return_multiple( int *array_of_3, int *ret1, int *ret2, int *ret3)
{
    if(array_of_3 == NULL)
        return 0; //return error code (false)

    //de-reference the pointer so we modify its value
   *ret1 = array_of_3[0];
   *ret2 = array_of_3[1];
   *ret3 = array_of_3[2];

   return 1; //return error code (true)
}
```

How to print an integer array?
```c
// Size must be passed!
// Otherwise, this function has no way of knowing how big the array is.
void printIntArray(int *arr, size_t size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("arr[%d] is: %d\n", i, arr[i]);
    }
}
```

How to use external variables outside function?
```c
// if referring to external variables outside function, you should use the extern keyword.
int i = 0;
void testFunc() {
  extern int i; //i here is now using external variable i
}
```

How to make external variables private to source file?
```c
// make external variables private to source file with static:
static int j = 0; //other files using testFunc2() cannot access variable j
void testFunc2() {
  extern int j;
}
```

How to create type aliases?
```c
// Typedefs can be used to create type aliases
typedef int my_type;
my_type my_type_var = 0;
```

What are structs?
```c
// Structs are just collections of data, the members are allocated sequentially,
// in the order they are written:
struct rectangle {
  int width;
  int height;
};
```

How to access struct members?
```c
void function_1()
{
  struct rectangle my_rec = { 1, 2 }; // Fields can be initialized immediately

  // Access struct members with .
  my_rec.width = 10;
  my_rec.height = 20;

  // You can declare pointers to structs
  struct rectangle *my_rec_ptr = &my_rec;

  // Use dereferencing to set struct pointer members...
  (*my_rec_ptr).width = 30;

  // ... or even better: prefer the -> shorthand for the sake of readability
  my_rec_ptr->height = 10; // Same as (*my_rec_ptr).height = 10;
}
```

How to define a function pointer?
```c
void str_reverse_through_pointer(char *str_in) {
  // Define a function pointer variable, named f.
  void (*f)(char *); // Signature should exactly match the target function.
  f = &str_reverse; // Assign the address for the actual function (determined at run time)
  // f = str_reverse; would work as well - functions decay into pointers, similar to arrays
  (*f)(str_in); // Just calling the function through the pointer
  // f(str_in); // That's an alternative but equally valid syntax for calling it.
}
```

What are header files?
```c
/******************************* Header Files **********************************

Header files are an important part of C as they allow for the connection of C
source files and can simplify code and definitions by separating them into
separate files.

Header files are syntactically similar to C source files but reside in ".h"
files. They can be included in your C source file by using the preprocessor
directive #include "example.h", given that example.h exists in the same directory
as the C file.
*/
```

How to prevent the header from being defined too many times?
```c
/* A safe guard to prevent the header from being defined too many times. This */
/* happens in the case of circle dependency, the contents of the header is    */
/* already defined.                                                           */
#ifndef EXAMPLE_H /* if EXAMPLE_H is not yet defined. */
#define EXAMPLE_H /* Define the macro EXAMPLE_H. */

/* Other headers can be included in headers and therefore transitively */
/* included into files that include this header.                       */
#include <string.h>

/* Like for c source files, macros can be defined in headers */
/* and used in files that include this header file.          */
#define EXAMPLE_NAME "Dennis Ritchie"

/* Function macros can also be defined.  */
#define ADD(a, b) ((a) + (b))

/* Notice the parenthesis surrounding the arguments -- this is important to   */
/* ensure that a and b don't get expanded in an unexpected way (e.g. consider */
/* MUL(x, y) (x * y); MUL(1 + 2, 3) would expand to (1 + 2 * 3), yielding an  */
/* incorrect result)                                                          */

/* Structs and typedefs can be used for consistency between files. */
typedef struct Node
{
    int val;
    struct Node *next;
} Node;

/* So can enumerations. */
enum traffic_light_state {GREEN, YELLOW, RED};

/* Function prototypes can also be defined here for use in multiple files,  */
/* but it is bad practice to define the function in the header. Definitions */
/* should instead be put in a C file.                                       */
Node createLinkedList(int *vals, int len);

/* Beyond the above elements, other definitions should be left

[^1]: [Learn C in Y Minutes](https://learnxinyminutes.com/c/)
