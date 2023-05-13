#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What is your x? ");
    int y = get_int("What is your y? ");

    if ( x < y )
    {
        printf("x is less than y!\n");
    }
    else if (x > y)
    {
        printf("x is greater than or equal to y!\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}
