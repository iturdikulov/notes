---
date: 2022-12-29
tags:
  - inbox
  - C
sr-due: 2024-01-28
sr-interval: 3
sr-ease: 269
---

# Printf format in C

Where the _specifier character_ at the end is the most significant component,
since it defines the type and the interpretation of its corresponding argument:

| _specifier_ | Output | Example |
| --- | --- | --- |
| d _or_ i | Signed decimal integer | 392 |
| u | Unsigned decimal integer | 7235 |
| o | Unsigned octal | 610 |
| x | Unsigned hexadecimal integer | 7fa |
| X | Unsigned hexadecimal integer (uppercase) | 7FA |
| f | Decimal floating point, lowercase | 392.65 |
| F | Decimal floating point, uppercase | 392.65 |
| e | Scientific notation (mantissa/exponent), lowercase | 3.9265e+2 |
| E | Scientific notation (mantissa/exponent), uppercase | 3.9265E+2 |
| g | Use the shortest representation: %e or %f | 392.65 |
| G | Use the shortest representation: %E or %F | 392.65 |
| a | Hexadecimal floating point, lowercase | -0xc.90fep-2 |
| A | Hexadecimal floating point, uppercase | -0XC.90FEP-2 |
| c | Character | a |
| s | String of characters | sample |
| p | Pointer address | b8000000 |
| n | Nothing printed.
The corresponding argument must be a pointer to a signed int.
The number of characters written so far is stored in the pointed location. |  |
| % | A % followed by another % character will write a single % to the stream. | % |

## External links

- [printf](https://www.cplusplus.com/reference/cstdio/printf/)

