---
date: 2023-03-18T00:00+03:00
tags:
  - inbox
sr-due: 2024-01-29
sr-interval: 2
sr-ease: 200
---

# Hash table (hash map)

> In [[computing]], a hash table, also known as hash map, is a
> [[data_structure]] that implements an [[array]] or dictionary. It is an
> abstract data type that maps keys to values. A hash table uses a
> [[hash_function]] to compute an index, also called a hash code, into an array
> of buckets or slots, from which the desired value can be found. During lookup,
> the key is hashed and the resulting hash indicates where the corresponding
> value is stored.
>
> Ideally, the hash function will assign each key to a unique bucket, but most
> hash table designs employ an imperfect hash function, which might cause hash
> collisions where the hash function generates the same index for more than one
> key. Such collisions are typically accommodated in some way.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Hash_table)</cite>

| Algorithm | Average | Worst case |
| --------- | ------- | ---------- |
| Space     | Θ(n)    | O(n)       |
| Access    | N/A     | N/A        |
| Search    | Θ(1)    | O(n)       |
| Insert    | Θ(1)    | O(n)       |
| Delete    | Θ(1)    | O(n)       |

Process of taking characters and converting them to numbers is known as hashing.
And the code that is used to convert those letters into particular numbers is
called a ==hash function==. It must convert the same string to the same number
every single time it’s applied.
```text
# Hashing and retriving by hash
###############################

Hashing table:
I = 1
N = 2
O = 3
M = 4

Here 3 entities:
- key - OM
- hash function
- value - value

1. OM <key encryption to hash 3*4> 12

2. 12 <lookup in hash table, jump to 12> value
OR
2. <jump address 12, write> value

In fact we use one-directional lookups
```

Hash table is a list of ==paired values==.

When a message is hashed, the resulting hash value is significantly shorter than
the original message. This means that it's ==impossible to reconstruct== the
original message from the hash value alone.

Looking up a value in a hash table has an efficiency of (big O)
==$\mathcal{O}(1)$==.

![[img/hash_table.excalidraw.md|Hand-drawn phone book as a hash table]]
_A small phone book as a hash table_

Which other names of hash table you knowing?
&#10;<br>
Hash maps, dictionaries and associative arrays.

Trying to add data to a cell that is already filled (when used different keys,
but hash is same) is known as a ==collision==.

One classic approach for handling collisions is known as separate chaining. When
a collision occurs, instead of placing a single value in the cell, it places in
it a reference 👉 to an array. Let's assume initially key was `in` with hash
`1`, value was `nomoz`. We're trying to add `ni` with value `zomon`, but `ni`
hashed also to `1`. How will look value at hash index `1` if we use separate
chaining, how we get correct value?
```
index | value
------|------
0     | None
1[in] | nomoz
2     | None
3     | None
```
&#10;<br>
```
index    | value
---------|------
0        | None
1[in|ni] | [in|nomoz][ni|zomon] # we get correct value by searching by key
2        | None
3        | None
```
Let's assume we want to get value by key `ni`:
- `ni` → hashes to 1
- after lookup we detected we need to use search, since separate chaining used
- we search for key in each `subbarray[0]`
- we found index at second `subbarray[0]` and value is `subbarray[1] = zomon`

Hash table’s efficiency depends on three factors:
&#10;<br>
- How much data we’re storing in the hash table → increase collisions
- How many cells are available in the hash table → increase collisions
- Which hash function we’re using

The number of elements in a hash table divided by the number of slots. Usually
written $\alpha$ (alpha). The higher the load factor, the slower the retrieval.
With open addressing, the load factor cannot exceed 1. With chaining, the load
factor often exceeds 1. Typical load factor for hash table is about ==$0.7$==.
$(\alpha )={\frac {n}{m}},$ where $n$ is the number of entries occupied in the
hash table. $m$ is the number of buckets (slots aviable).

When hash table is useful (some real-world scenarios)?
&#10;<br>
- Attribute-value pairs storing, dictionary, item_name/price pairs, dictionary
app, phone book, anything with $\mathcal{O}(1)$ operations speed.
- Optimizing conditional logic, which can be represented as key/value pairs
- Algorithms optimization, for example two-sum problem can be rewritten with
hash tables from $\mathcal{O}(n^2)$ to $\mathcal{O}(n)$.

Which analogy of hash table you can apply to a book?
&#10;<br>
Book has TOC (we can say index) and in fact it's already hash table, we are able
to jump to required topic (search value) by this TOC. Search index in TOC, get
position and jump to page.
