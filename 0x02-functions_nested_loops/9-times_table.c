#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table starting with 0.
 * return: the time table
 */
void times_table(void)
{
    for (int i = 0; i <= 10; i++)
{
    _putchar("%d,\n", i, 9*i);
}
}
