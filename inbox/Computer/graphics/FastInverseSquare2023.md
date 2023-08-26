---
canonicalUrl: https://en.wikipedia.org/w/index.php?title=Fast_inverse_square_root&oldid=1168589082
date: '2023-08-15'
tags:
- research
- inbox
---

# Fast inverse square root

Fast inverse square root, sometimes referred to as Fast InvSqrt() or by the hexadecimal constant 0x5F3759DF, is an algorithm that estimates





            1

              x





    {\textstyle {\frac {1}{\sqrt {x}}}}
  , the reciprocal (or multiplicative inverse) of the square root of a 32-bit floating-point number



        x


    {\displaystyle x}
   in IEEE 754 floating-point format. The algorithm is best known for its implementation in 1999 in Quake III Arena, a first-person shooter video game heavily based on 3D graphics. With subsequent hardware advancements, especially the x86 SSE instruction rsqrtss, this algorithm is not generally the best choice for modern computers, though it remains an interesting historical example.The algorithm accepts a 32-bit floating-point number as the input and stores a halved value for later use. Then, treating the bits representing the floating-point number as a 32-bit integer, a logical shift right by one bit is performed and the result subtracted from the number 0x5F3759DF, which is a floating-point representation of an approximation of






              2

                127






    {\textstyle {\sqrt {2^{127}}}}
  . This results in the first approximation of the inverse square root of the input. Treating the bits again as a floating-point number, it runs one iteration of Newton's method, yielding a more precise approximation.