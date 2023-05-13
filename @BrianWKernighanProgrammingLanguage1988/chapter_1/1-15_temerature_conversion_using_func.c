/* Exercise 1.15. Rewrite the temperature conversion program of Section
 * 1.2 to use a function for conversion
 */
#include <stdio.h>

int fahr_to_celsius(int fahr)
{
	return (5.0 / 9.0) * (fahr - 32);
}

/* print Fahrenheit-Celsius table */
int main()
{
	int fahr;
	float celsius;

	for(fahr = 0; fahr <= 300; fahr = fahr + 20)
	{
		celsius = fahr_to_celsius(fahr);
		printf("%3d %6.1f\n", fahr, celsius);
	}
}
