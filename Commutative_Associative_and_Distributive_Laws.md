---
date: 2023-05-18
tags:
  - inbox
  - mathematics
external:
  - https://www.mathsisfun.com/associative-commutative-distributive.html
sr-due: 2024-01-28
sr-interval: 1
sr-ease: 227
---

# Commutative, Associative and Distributive Laws

TLDR:

|     |     |
| --- | --- |
| Commutative Laws: | a + b  **=**  b + a  <br>a \* b  **=**  b \* a |
| Associative Laws: | (a + b) + c  **=**  a + (b + c)  <br>(a \* b) \* c  **=**  a \* (b \* c) |
| Distributive Law: | a \* (b + c)  =  a \* b  +  a \* c |

## Commutative law

The "Commutative Laws" say we can ==swap numbers== over and still get the same
answer.

Why "commutative", because the numbers can travel back and forth like a
commuter.

When we add:

```py
a = 10
b = 20
print(a + b == b + a)
```

When we multiply:

```py
a = 3
b = 21.42
print(a * b == b * a)
```

When we do percentages:

```py
# 8% of 50 = 50% of 8 = 4
percent = lambda part, whole:float(whole) / 100 * float(part)
a = 8
b = 50
print(percent(a, b) == percent(b, a))
```

> [!NOTE]
> The Commutative Law does **not** work for subtraction or division:
> $12 / 3 = 4$, but $3 / 12 = \frac{1}{4}$

## Associative Laws

The "Associative Laws" say that it doesn't matter how we ==group the numbers==
(i.e. which we calculate first).

When we add:

```py
a = 1.1
b = 2.1
c = 3.1
print((a + b) + c == a + (b + c))
```

This: $(2 + 4) + 5  =  6 + 5  = 11$, has the same answer as this: $2 + (4 + 5)
=  2 + 9  = 11$

When we multiply:

```py
a = 3.18
b = 5
c = 3.1
print((a * b) * c == a * (b * c))
```

This: $(3 * 4) * 5  =  12 * 5  = 60$, has the same answer as this: $3 * (4 * 5)
=  3 * 20  = 60$

Sometimes it is easier to add or multiply in a different order:

What is 19 + 36 + 4? Try to use associative law.
&#10;<br>
$19 + 36 + 4 = 19 + (36 + 4) = 19 + 40 = 59$

Or to rearrange a little:

What is 2 * 16 * 5? Try to use associative law.
&#10;<br>
$2 * 16 * 5 = (2 * 5) * 16 = 10 * 16 = 160$

> [!NOTE]
> The Associative Law does **not** work for subtraction or division:
> $(9 – 4) – 3 = 5 – 3 = 2$, but 9 – (4 – 3) = 9 – 1 = 8

## Distributive Law

The "Distributive Law" is the BEST one of all, but needs careful attention.

3 lots of (2+4) is the same as 3 lots of ==2== plus 3 lots of 4
So, the 3 can be "distributed" across the 2+4, into 3*2 and 3*4.

And we write it like this:

$a * (b + c)  =  a * b  +  a * c$

Try the calculations yourself:

$3 * (2 + 4) = 3 * 6 = 18$

$3 * 2 + 3 * 4 = 6 + 12 = 18$

With distributive law we get the same answer when we:

- multiply a number by a group of numbers added together, or
- do each multiply separately then add them

What is 6 * 204? Try to use distributive law to simplify.
&#10;<br>
$6 * 204 = 6*200 + 6*4 = 1,200 + 24 = 1,224$

What is 16 * 6 + 16 * 4? Try to use distributive law with combining.
&#10;<br>
$16 * 6 + 16 * 4  =  16 * (6+4) = 16 * 10 =  160$

We can use it in subtraction too:

What is 26*3 - 24*3? Try to use distributive law.
&#10;<br>
$26*3 - 24*3 = **(26 - 24)** * 3 = 2 * 3 = 6$

What is 6*7 + 2*7 + 3*7 + 5*7 + 4*7?
&#10;<br>
$$
6*7 + 2*7 + 3*7 + 5*7 + 4*7
= (6+2+3+5+4) * 7
= 20 * 7
= 140
$$

> [!NOTE]
> The Distributive Law does **not** work for division:
> $24 / (4 + 8) = 24 / 12 = 2$, but $24 / 4 + 24 / 8 = 6 + 3 = 9$
