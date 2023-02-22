#include "main.h"
#include <stdio.h>
/**
 * nature_made_of_natural_numbers - list all the natural numbers.
 * return: multiples of 3 or 5 below 1024
 */
void nature_made_of_natural_numbers(void)
{
    int total = 0;

    for (int i = 1; i < 1024; i++)
{
    if (i % 3 == 0 || i % 5 == 0)
{
     total += i;
}
    _putchar("%d\n", total);
    return 0;
}
}
