---
created: 2023-06-24T00:00+03:00
tags:
  - blog
  - work-tool-main
sr-due: 2025-07-22
sr-interval: 2
sr-ease: 202
---

# Array in programming languages

Arrays in [[C]]:

```c
int array[4];  // Initialize array with 4 items
array[0] = 1;
array[1] = 18;
array[2] = 5;
array[3] = 33;
for (int i = 0; i < 4; i++) {
    printf("%d ", array[i]);
}
printf("%f", 2.14 + array[0]);  // Error: index out of range
```

Arrays in [[Java]]:

```java
int[] array = new int[5];
array[0] = 1;
array[1] = 18;
array[2] = 5;
array[3] = 33;
array[4] = 50;
```

Arrays in [[Rust]]:

```rust
let mut array: [i32; 3] = [0; 3];

array[1] = 1;
array[2] = 2;

assert_eq!([1, 2], &array[1..]);

// This loop prints: 0 1 2
for x in array {
    print!("{x} ");
}
```

In Python used ==[[list]]== not arrays, and here no restrictions on the type of items stored in the array, and its size is not fixed. <!--SR:!2025-10-03,25,250-->
