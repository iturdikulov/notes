/*
 * Exercise 1-9. Write a program to copy its input to its output, replacing each
 * string of one or more blanks by a single blank.
 *
 * TODO: this propably can be optimized
 */

#include <stdio.h>

int main() {
  int c;
  int blanks_number = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      // if it's first blank or last char wasn't blank print it
      if (blanks_number == 0) {
        putchar(c);
      }

      ++blanks_number;
    } else {
      putchar(c);
      blanks_number = 0;
    }
  }
}
