#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the number between 0 and 15
 * return: If n is greater than 15 or less than 0 the function should not print anything
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
{
    return;
}

    for (int i = 0; i <= n; i++)
{
    for (int j = 0; j <= n; j++)
{
    _putchar("%3d", i * j);
}
    _putchar('\n');
}

}
