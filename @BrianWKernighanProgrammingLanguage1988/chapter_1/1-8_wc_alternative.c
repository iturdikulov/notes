/*
 * Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 * Print blanks, tabs, and newlines counts for each FILE, similar to wc, +-
 *
 * Author: Inom Turdikulov
 */

#include <stdio.h>

/* count lines in input */
int main()
{
    // init charcter and line counter, tab counter and blanks counter
    int c;
    int newlines, tabs, blanks = 0;

    while ((c = getchar()) != EOF) { // while not eof
        if (c == '\n') { // compare character with newline
            ++newlines;
        } else if (c == '\t') {
            ++tabs;
        } else if (c == ' ') {
            ++blanks;
        }
    }

    printf("%d\t%d\t%d", blanks, tabs, newlines);
    return 0;
}
