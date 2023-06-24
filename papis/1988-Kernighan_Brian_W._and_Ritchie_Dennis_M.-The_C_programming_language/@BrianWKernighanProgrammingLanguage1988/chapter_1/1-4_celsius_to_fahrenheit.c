/*
 * Exercise 1-4. Write a program to print the corresponding Celsius to
 * Fahrenheit table.
 */

#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;

    printf("Celsius | Fahr\n");
    while (fahr <= upper) {
        // TODO: write formula to get fahr instead celsius
        celsius = (5.0 / 9.0) * (fahr - 32); // max value is 148
        printf("%4d | %7d\n", celsius, fahr); // we just swap values
        fahr = fahr + step;
    }
}
