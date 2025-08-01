---
created: 2023-10-06T00:00+03:00
tags:
  - blog
  - mathematics
sr-due: 2025-07-22
sr-interval: 3
sr-ease: 221
---

# Arithmetic

> Arithmetic (from Ancient Greek ἀριθμός (arithmós) '[[number]]', and τική (tikḗ) '[[art]], craft') is an elementary part of [[mathematics]] that consists of the study of the properties of the traditional operations on numbers — **addition, subtraction, multiplication, division, exponentiation, and extraction of roots**. In the 19th century, Italian mathematician Giuseppe Peano formalized arithmetic with his Peano axioms (disputed), which are highly important to the field of mathematical logic today.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Arithmetic)</cite>

## Addition (+)

- Addition commutative (move) property: $5 + 3 =$<wbr class="f"> $3 + 5$, order doesn't matter. <!--SR:!2025-08-09,10,221-->
- Addition associative Property: $(2 + 3) + 4 =$<wbr class="f"> $2 + (3 + 4)$, grouping doesn't matter, and it's useless in this example. <!--SR:!2025-08-02,2,201-->
- Addition identity element: $x + 0 =$ <wbr class="f"> $x$, zero is like adding nothing. <!--SR:!2025-08-09,9,221-->

## Multiplication (×)

- Multiplication commutative Property: <wbr class="f"> $6 \times 2 = 2 \times 6$ <!--SR:!2025-08-03,3,210-->
- Multiplication associative Property: <wbr class="f"> $(2 \times 3) \times 4 = 2 \times (3 \times 4)$ <!--SR:!2025-08-03,3,211-->
- Multiplication identity Element: <wbr class="f"> $x \times 1 = x$
- Multiplication zero Property: <wbr class="f"> Any number $\times 0 = 0$ <!--SR:!2025-08-11,11,231-->
- Multiplication distributive property: <wbr class="f">$a \times (b + c) = (a \times b) + (a \times c)$
	- Analogy: Like giving the same gift to each person at a party
	- Example: $3 \times (2 + 4) = 3 \times 6 = 18$ OR $(3 \times 2) + (3 \times 4) = 6 + 12 = 18$


## Subtraction (−)

- Subtraction is not commutative: <wbr class="f">$8 - 3 \neq 3 - 8$ (order matters!)
TODO: rewrite <!--SR:!2025-08-04,5,230-->
- Subtraction identity: <wbr class="f">$x - 0 = x$ the same number

## Division (÷)

Division splits quantities into equal parts or finds how many times one number fits into another, like dividing a pizza equally among friends.

- Division is not commutative: <wbr class="f"> $12 \div 3 \neq 3 \div 12$
- Division identity: <wbr class="f"> $x \div 1 =$ the same number
- Division zero rule: <wbr class="f"> "Cannot" divide by zero (undefined)

## Order of Operations, PEMDAS

Think of this as a recipe - you must follow the steps in order, here is the order:
TODO: rewrite
<br class="f">
- Parentheses/(Brackets) - Handle what's in containers first
- Exponents/(Orders) - Handle powers and roots
- MD - Multiplication and Division (left to right) - These are equals
- AS - Addition and Subtraction (left to right) - These are equals
- Memory aid: "Please Excuse My Dear Aunt Sally"

## Modular Arithmetic

Operations performed on remainders when numbers are divided by a fixed modulus.

Simplified: Think of modular arithmetic like a clock. When it's 11 o'clock and you add 3 hours, you get 2 o'clock (not 14 o'clock). The clock "wraps around" at 12.

Example: $17 \equiv 2 \pmod{5}$ means 17 divided by 5 leaves remainder ==2==.

## Exponent Rules

Think of exponents as "how many times you multiply":

- Same base, add exponents when multiplying: $x^3 \times x^2$ =<wbr class="f"> $x^5$ (like stacking building blocks)
- Same base, subtract exponents when dividing: $x^5 \div x^2$ =<wbr class="f"> $x^3$ (like removing blocks)
- Power of a power, multiply exponents: $(x^2)^3$ <wbr class="f">  = $x^6$ (like boxes within boxes)

## Logarithmic Properties

Inverse exponential function manipulation rules.
Logarithms are like "undo buttons" for exponents. If exponents ask "what do you get?", logarithms ask "what ==power== do you need?". $\log_{2} 1024$ = <wbr class="f"> $2$.

Key Rules:

- $\log(a \times b)$ <wbr class="f">= $\log(a) + \log(b)$ (multiplication becomes addition)
- $\log\left(\frac{a}{b}\right)$ <wbr class="f">= $\log(a) - \log(b)$ (division becomes subtraction)

## Complex Number Arithmetic

Operations on numbers containing real and imaginary components.
Think of complex numbers like coordinates on a map - they have two parts: horizontal (real) and vertical ==(imaginary)==. Just like you can add two locations by combining their coordinates.

TODO: verify in wolfram alpha
Example: $(3 + 2i) + (1 + 4i)$ <wbr class="f"> = $(3+1) + (2+4)i = 4 + 6i$

## Factorial Properties

Product sequences of consecutive positive integers.
Factorials are like a multiplication countdown. $5! = 5 \times 4 \times 3 \times 2 \times 1$ = ==$120$==. It's like asking "if you have 5 different books, in how many ways can you arrange them on a shelf?"