---
created: 2025-02-06T10:20+03:00
tags:
  - blog
  - annotation_repo
author: Google
external:
  - https://go.dev/tour/
sr-due: 2025-07-31
sr-interval: 9
sr-ease: 150
---

# A Tour of Go

My notes on A Tour of [[Go]] [^1].

Every Go program is made up of ==packages==.

Programs start running in package ==main==.

By convention, the package name is the same as the last element of the `import`
path. For instance, the `math/rand` package comprises files that begin with the
statement ==`package rand`==.

How to import packages?
<br class="f">
Better to use "factored" import statement (good style):
```go
package main

import (
	"fmt"
	"test"
	"math"
	"math/rand"
)

func main() {
	fmt.Printf("Now you have %g problems.\n", math.Sqrt(7))
	fmt.Println("The time is", time.Now())
	fmt.Println("My favorite number is", rand.Intn(10))
}
```
But you can also write multiple import statements, like:
```go
import "fmt"
import "math"
```

Which names can be exported in Go?
<br class="f">
In Go, a name is exported if it begins with a capital letter. For example,
Pizza is an exported name, as is Pi, which is exported from the math package.
```go
package main

import (
	"fmt"
	"math"
)

func main() {
	fmt.Println(math.Pi)
	// fmt.Println(math.pi) // undefined: math.pi
}
```

Write the simplest Go function which return sum of two arguments (x, y)
<br class="f">
```go
package main

import "fmt"

func add(x int, y int) int {
	return x + y
}

func main() {
	fmt.Println(add(42, 13))
}
```

<!-- TODO: https://go.dev/blog/declaration-syntax -->

How to shorten this declaration `x int, y int`?:<wbr class="f"> `x, y int`

How many results function in Go can return?
<br class="f">
A function can return any number of results.
```go
package main

import "fmt"

func swap(x, y string) (string, string) {
	return y, x
}

func main() {
	a, b := swap("hello", "world")
	fmt.Println(a, b)
}
```

Can we use named return values in Go?
<br class="f">
Yes, if so, they are treated as variables defined at the top of the function.
These names should be used to document the meaning of the return values.
A return statement without arguments returns the named return values. This is
known as a "naked" return.
```go
// Naked return statements should be used only in short functions, as with the
// example shown here. They can harm readability in longer functions.
package main

import "fmt"

func split(sum int) (x, y int) {
	x = sum * 4 / 9
	y = sum - x
	return
}

func main() {
	fmt.Println(split(17))
}
```

How to declare list of variables in Go?
<br class="f">
Need to use the `var` statement (as in function argument lists), the type is
last. A `var` statement can be at package or function level.
```go
package main

import "fmt"

var python, c, java, javascript bool

func main() {
	python = true
	var i int
	fmt.Println(i, python, c, java, javascript)
}
```

Can we initialize variable values and declare them in same time?
<br class="f">
Yes, a var declaration can include initializers, one per variable.
If an initializer is present, the type can be omitted; the variable will take
the type of the initializer.
```go
package main

import "fmt"

var i, j int = 1, 2

func main() {
	var c, python, java = true, false, "no!"
	fmt.Println(i, j, c, python, java)
}
```

What `:=` is used for?
<br class="f">
This is short assignment statement. Can be used in place of a var declaration
with implicit type.
```go
package main

import "fmt"

func main() {
	var i, j int = 1, 2
	k := 3
	c, python, java := true, false, "no!"

	fmt.Println(i, j, k, c, python, java)
}
```

Where every statement begins with a keyword (`var`, `func`, and so on) and so
the `:=` construct is not available?
<br class="f">
Outside a function.

Which basic types are available in Go?
<br class="f">
```
bool
string

// The int, uint, and uintptr types are usually 32 bits wide on 32-bit systems
// and 64 bits wide on 64-bit systems.
int  int8  int16  int32  int64
uint uint8 uint16 uint32 uint64 uintptr

byte // alias for uint8
rune // alias for int32
     // represents a Unicode code point
float32 float64
complex64 complex128
```
```go
package main

import (
	"fmt"
	"math/cmplx"
)

var (
	ToBe   bool       = false
	MaxInt uint64     = 1<<63 - 1 // shift binary 1 left to 63 positions, 2^63 - 1
	z      complex128 = cmplx.Sqrt(-5 + 12i)
)

func main() {
	fmt.Printf("Type: %T Value: %v\n", ToBe, ToBe)
	fmt.Printf("Type: %T Value: %v\n", MaxInt, MaxInt)
	fmt.Printf("Type: %T Value: %v\n", z, z)
}
```

<!-- TODO: https://go.dev/blog/constants -->

When you need an integer value you should use ==`int`== unless you have a
specific reason to use a sized or unsigned integer type.

If variables declared without an explicit initial value, which values they will
have?
<br class="f">
Zero values:
- `0` - for numeric types,
- `false` - for the boolean type, and
- `""` - (the empty string) for strings.
```go
package main

import "fmt"

func main() {
	var i int
	var f float64
	var b bool
	var s string
	fmt.Printf("%v %v %v %q\n", i, f, b, s)
}
```

How to convert values between different types?
<br class="f">
The expression `T(v)` converts the value `v` to the type `T`.
```go
package main

import (
	"fmt"
	"math"
)

func main() {
	var x, y int = 3, 4
	var f float64 = math.Sqrt(float64(x*x + y*y))
	var z uint = uint(f)
	k := uint(1)
	fmt.Println(x, y, z, k)
}
```

Is non-explicit conversion between numeric types in assignments allowed?
<br class="f">
Unlike in C, in Go assignment between items of different type requires an
explicit conversion.

Which type `i`, `j` and `k` will have?
```go
package main

import "fmt"

func main() {
	var i int
	var k = i
	j := k
	fmt.Printf("i is of type %T\n", i)
	fmt.Printf("k is of type %T\n", k)
	fmt.Printf("j is of type %T\n", j)
}
```
<br class="f">
When declaring a variable without specifying an explicit type (either by using
the `:=` syntax or `var = expression` syntax), the variable's type is inferred
from the value on the right-hand side.

When the right-hand side contains an untyped numeric constant, the new variable
may be a which type?
<br class="f">
It can be `int`, `float64`, `complex128`, etc., depending on the precision of the
constant:
```go
package main

import "fmt"

func main() {
	v := 42 // change me!
	fmt.Printf("v is of type %T\n", v)
}
```

## Goroutines

[^1]: [A Tour of Go](https://go.dev/tour/)
