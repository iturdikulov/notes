/*
 * Exercise 1-12. Write a program that prints its input one word per line.
 */

#include <stdio.h>

/* count lines, words, and characters in input */
int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            putchar(' ');
        }
        else {
            putchar(c);
        }
    }
}


