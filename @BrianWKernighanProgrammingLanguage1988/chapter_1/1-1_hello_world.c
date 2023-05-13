/*
 * Exercise 1-1. Run the ``hello, world'' program on your system. Experiment
 * with leaving out parts of the program, to see what error messages you get.
 */

#include <stdio.h>

int main()
{
    // Normal printf
    printf("Hello, world!\n");

    // Missing terminating " character
    /* printf("hello, world
\n"); */

    // We can't use multiplication here, types mismatch
    // invalid operands to binary * (have ‘char *’ and ‘int’)
    // printf("hello, world" * 25);

    // We need place double quotes, oterwise it will be treated as variable
    // stray ‘\’ in program, 'world' undeclared, expected ‘)' before 'n'
    // printf(hello, world\n);

    return(0);
}
