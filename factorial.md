---
created: 2024-03-18T00:00+03:00
tags:
  - blog
  - head-clean
sr-due: 2025-08-28
sr-interval: 49
sr-ease: 210
---

# Factorial

What is factorial?
<br class="f">
Product (multiplication) of all positive integers (including 0) less than or equal to $N$. In other words, multiply all numbers from ${n}$ to 1.

| $${n}$$ | $${n!}$$  |
| ------- | --------- |
| 0       | 1         |
| 1       | 1         |
| 2       | 2 × 1 = 2 |
| 3       | 6         |
| 4       | 24        |
| 5       | 120       |
| 6       | 720       |
| 7       | 5040      |
| 8       | 40320     |
| 9       | 362880    |
| 10      | 3628800   |
| ...     | ...       |

Examples:

- ${4}!$ = 4 × 3 × 2 × 1 = 24
- ${7}!$ 7 × 6 × 5 × 4 × 3 × 2 × 1 = 5040
- ${1}!$ 1
- ${10}!$ 10 × 9 × 8 × 7 × 6 × 5 × 4 × 3 × 2 × 1 = 3628800

10! = 10 × 9!, ... and 125! = 125 × 124!, etc. How this can be described in a formula?
<br class="f">
$$
{n!} = n \times (n-1)!
$$

Where ${n-1}!$ is just part of ${n!}$.

## External links

- [ ] [Factorial Function !](https://www.mathsisfun.com/numbers/factorial.html)
