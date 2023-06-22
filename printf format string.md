---
date: 2022-12-29
draft: true
sr-due: 2023-03-15
sr-ease: 248
sr-interval: 2
tags:
- inbox
- definition
sr-due: 2023-12-29
sr-interval: 226
sr-ease: 268
---

# Printf format in C

TODO: add link to python section?

```{=org}
#+filetags: C, programming, printf
```

<https://www.cplusplus.com/reference/cstdio/printf/>

https://www.cplusplus.com/reference/cstdio/printf/

specifier Output Example **d or i Signed decimal integer 392** u Unsigned
decimal integer 7235 o Unsigned octal 610 x Unsigned hexadecimal integer 7fa X
Unsigned hexadecimal integer (uppercase) 7FA **f Decimal floating point,
lowercase 392.65** F Decimal floating point, uppercase 392.65 e Scientific
notation (mantissa/exponent), lowercase 3.9265e+2 E Scientific notation
(mantissa/exponent), uppercase 3.9265E+2 g Use the shortest representation: %e
or %f 392.65 G Use the shortest representation: %E or %F 392.65 a Hexadecimal
floating point, lowercase -0xc.90fep-2 A Hexadecimal floating point, uppercase
-0XC.90FEP-2 c Character a **s String of characters sample** p Pointer address
b8000000 n Nothing printed. The corresponding argument must be a pointer to a
signed int. The number of characters written so far is stored in the pointed
location. % A % followed by another % character will write a single % to the
stream. % Unsigned decimal integer 7235 o Unsigned octal 610 x Unsigned
hexadecimal integer 7fa X Unsigned hexadecimal integer (uppercase) 7FA \***\*f
Decimal floating point, lowercase 392.65\*\*** F Decimal floating point,
uppercase 392.65 e Scientific notation (mantissa/exponent), lowercase 3.9265e+2
E Scientific notation (mantissa/exponent), uppercase 3.9265E+2 g Use the
shortest representation: %e or %f 392.65 G Use the shortest representation: %E
or %F 392.65 a Hexadecimal floating point, lowercase -0xc.90fep-2 A Hexadecimal
floating point, uppercase -0XC.90FEP-2 c Character a \***\*s String of
characters sample\*\*** p Pointer address b8000000 n Nothing printed. The
corresponding argument must be a pointer to a signed int. The number of
characters written so far is stored in the pointed location. % A % followed by
another % character will write a single % to the stream. %
