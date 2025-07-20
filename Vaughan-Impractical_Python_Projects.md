---
author: Lee Vaughan
date: 2025-06-25T22:52:30+03:00
tags:
  - blog
  - Python
  - annotation_book
file: ~/Wiki/books/Vaughan-Impractical_Python_Projects.pdf
directory: ~/Desktop/CS/Vaughan-Impractical_Python_Projects
---

# Impractical Python Projects

You'll have fun with this book. As you work through the projects, you'll
increase your knowledge of Python.

Every line of code is recommended to enter by hand, "learn through our hands",
this increase your attention maximally.

## Chapter 1: Silly Name Generator

In this warm-up project, you'll write a simple Python program that generates
nutty names by randomly combining first names and surnames.

Key to correct estimates and design process is asking a lot questions:

- What are you trying to do?
- Why are you doing it?
- Why are you doing it this way?
- How much time do you have?
- How much money?

The strategy:

- [ ] two lists of funny names
- [ ] relative short, not dynamic
- [ ] use tuple as container
- [ ] use `sys` module to redirect output into `sys.stderr`

The pseudocode:

High-level, informal way to describe computer programs using structured English
or any human language.

    - [x] Load a list of first names
    - [x] Load a list of surnames
    - [ ] Chose a first name at random
    - [ ] Assign the name to a variable
    - [ ] Choose a surname at random
    - [ ] Assign the surname to a variable
    - [ ] Print then names to the screen in order and in red font
    - [ ] Ask the user to quit or play again
    - [ ] If user plays again:
    - [ ]     repeat
    - [ ] If user quits:
        end and exit

[pseudonyms](./Chapter_1/pseudonyms.py)

`pylint` tool to check your code, it's providing useful messages like:
- R - refactor for a "good practice" metric violation
- C - convention for coding standard violation
- W - warning for stylistic problems or minor programming issues
- E - error for important programming issues (i.e, most probably a bug)
- F - fatal for errors that prevent further processing

`pylint` assumes (which is good) all variables in global scope should be
uppercase, refer to constants.

`__name__` variable use to verify is program run in stand-alone module (equal to
"__main__") or as an imported module (equal to module name).

According to PEP 257 a docstring is a string literal that occurs as the first
statement in a module, function, class, or method definition.

[pseudonyms](./Chapter_1/pseudonyms_fixed.py)

Good reasons for adding comments;

- Clarifying intent.
- Heading off potential user errors, such as when specific measurement units or
  input formats are required/expected.
- Think what you would want to see if you had to pick up your own code after
  five-year hiatus!

Find and keep good comment examples.

### Further Reading:

- [ ] Pseudocode: http://users.csc.calpoly.edu/~jdalbey/SWE/pdl_std.html and http://www.slideshare​
.net/sabiksabz/pseudo-code-basics/.
