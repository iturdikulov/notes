/*
 * Exercise 1-2. Experiment to find out what happens when prints's argument
 * string contains \c, where c is some character not listed above.
 */

#include <stdio.h>

int main()
{
    // New line
    // hello, world
    printf("hello, world\n");
    printf("---\n");

    // Print a tab with unicode
    // hello, world	 😀/
    printf("hello, world\t 😀\n");
    printf("---\n");

    // Print backspace with backslash
    // "hello, worl and here backslash \, all in double quotes"
    printf("\"hello, world\b and here backslash \\, all in double quotes\"\n");
    printf("---\n");

    // \y is not a standard escape sequence, so it will be printed as is
    // y what is \y?
    printf("\y what is \\y?\n");
    printf("---\n");
}
