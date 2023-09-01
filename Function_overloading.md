---
date: 2023-04-01
draft: true
sr-due: 2023-05-21
sr-ease: 272
sr-interval: 4
tags:
- inbox
---

# Function overloading (method overloading)

> Ability to create multiple [[Function|functions]] of
> the same name with different implementations. Calls to an overloaded function
> will run a specific implementation of that function appropriate to the context
> of the call, allowing one function call to perform different tasks depending
> on context.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Function_overloading)</cite>

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