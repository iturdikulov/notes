/*
 * Exercise 1-3. Modify the temperature conversion program to print a heading
 * above the table.
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

    printf("Fahr | Celsius\n");
    // 4_|_7 // header characters length | values characters length
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%4d | %7d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
