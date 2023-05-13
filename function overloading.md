---
title: Function overloading (method overloading)
date: 2023-04-01
tags:
  - inbox
  - definition
draft: true
---

> Ability to create multiple
> [[function (computer programming)|functions]] of the same name
> with different implementations. Calls to an overloaded function will run a
> specific implementation of that function appropriate to the context of the
> call, allowing one function call to perform different tasks depending on
> context.
>
> -- [Wikipedia](https://en.wikipedia.org/wiki/Function_overloading)

## Example in C++

```cpp
#include <iostream>

int Volume(int s) {  // Volume of a cube.
  return s * s * s;
}

double Volume(double r, int h) {  // Volume of a cylinder.
  return 3.1415926 * r * r * static_cast<double>(h);
}

long Volume(long l, int b, int h) {  // Volume of a cuboid.
  return l * b * h;
}

int main() {
  std::cout << Volume(10);
  std::cout << Volume(2.5, 8);
  std::cout << Volume(100l, 75, 15);
}
```
