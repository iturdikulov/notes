---
created: 2023-03-17T00:00+03:00
tags:
  - blog
sr-due: 2025-07-17
sr-interval: 1
sr-ease: 164
---

# Pointer (computer programming)

In [[computer_science]] a pointer is an object (or variable) in many
[[programming_language|programming languages]] that stores a ==**memory
address**== to something (specific value first byte/block).

Pointer features:

- Direct Memory Access
- Passing Values by Reference
- Dynamic Memory Allocation
- Working with Arrays and Strings
- Improved Efficiency (don't need to copy large data)

Operators:

- `int* p = &x`, `&` address-of.
- `*p = 5`, `*` dereference, or reading/writing value at address.
- `(pointer variable)->(variable) = value;`, `->` arrrow operator.
  ```c
  #include <stdio.h>

  int main() {
    struct S {int x;};
    struct S *p;
    p->x = 10;
  }
  ```

Simple pointer example:

```c
#include <stdio.h>

int main() {
  int value = 42;  // Value is stored in memory
  int* plink = &value;  // "pointer" now holds the memory address of "value"

  // Change the value of "value" to 43 with dereference & assignment
  // NOTE: Don't update address it points to but value of object it points to.
  *plink = 43;

  printf("%d at %p\n", *plink, plink); // Print value with dereference & address
}
```

Pointers and arrays:

```c
#include <stdio.h>
int main() {
    int array[] = {
        0xA,
        0xBBBB,
        0xCC000000
    };

    int* plink = &array[0];
    printf("array[0] = %d\n", *plink, plink);

    // Change pointer address and print it
    // NOTE: we are NOT getting/setting value with dereference
    plink = &array[1];
    printf("array[1] = %x\n", *plink, plink);

    plink = &array[2];
    printf("array[2] = %x\n", *plink, plink);

    // Change pointer value and print it
    printf("Change %x to ", array[2]);
    *plink = 0xDDDD;
    printf("%x\n", array[2]);

    printf("array[2] = %x\n", *plink, plink);
}
```

_Results:_

```
array[0] = 10
array[1] = bbbb
array[2] = cc000000
Change cc000000 to dddd
array[2] = dddd
```

Direct access vs. indirect access:

Pointers and arrays use different ways to access memory.

```c
#include <stdio.h>

int main(int argc, char *argv[])
{
    int array[] = {
        0xA,
        0xBBBB,
        0xCC000000
    };


    // Direct access
    // 1. Load address of beginning of array into register A
    // 2. Load data at address stored in A into register B
    int n = array[0];

    // Indirect access
    // 1. Load address of pointer into register A
    // 2. Load data at address in register A into register B
    // 3. Load data at address in register B into register C
    int* pointer = &array[0]; // Point to 1st 'array' element.
    int n2 = *pointer;         // Indirect access.
}
```

```c
int main(){
    byte b;     // просто переменная типа byte
    b = 10;     // b теперь 10
    byte* ptr;  // ptr – переменная "указатель на объект типа byte"
}
```

## Null pointer

## Learn pointers

- [ ] [Указатели, ссылки и массивы в C и C++: точки над i / Хабр](https://habr.com/ru/articles/251091/)
- [ ] [Массивы, строки, указатели.](https://www.opennet.ru/docs/RUS/bogatyrev/gl_2.html)
- [ ] [Переменные, адреса и указатели в языке Си. Урок 8 курса "Основы языка C"](https://younglinux.info/c/pointers)

- [ ] [Pointers in C, Part I: Pointers vs. Arrays - Approxion](https://www.approxion.com/pointers-in-c-part-i-pointers-vs-arrays/)
- [ ] [Pointers in C, Part II: CV-Qualifiers - Approxion](https://www.approxion.com/pointers-in-c-part-ii-cv-qualifiers/)
