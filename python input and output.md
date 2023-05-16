---
date: 2022-12-29
draft: true
sr-due: 2023-03-16
sr-ease: 250
sr-interval: 3
tags:
- inbox
- definition
sr-due: 2023-12-21
sr-interval: 218
sr-ease: 270
---

# Python Input/output

Syntax: "{" [field_name] ["!" conversion] [":" format_spec] "}"

# let's understand what each field means...

    field_name        ::=  arg_name ("." attribute_name | "[" element_index "]")*
    arg_name          ::=  [identifier | digit+]
    attribute_name    ::=  identifier
    element_index     ::=  digit+ | index_string
    index_string      ::=  <any source character except "]"> +
    conversion        ::=  "r" | "s" | "a"
    format_spec       ::=  [[fill]align][sign][#][0][width][grouping_option][.precision][type]

            # Looking at the underlying fields under format_spec...
            fill            ::=  <any character>
            align           ::=  "<" | ">" | "=" | "^"
            sign            ::=  "+" | "-" | " "
            width           ::=  digit+
            grouping_option ::=  "_" | ","
            precision       ::=  digit+
            type            ::=  "b" | "c" | "d" | "e" | "E" | "f" | "F" | "g" | "G" | "n" | "o" | "s" | "x" | "X" | "%"