#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - add's 2 intergers
 * return: the result of the operation
 */
void print_to_98(int n)
{
    if (n <= 98)
{
    for (int i = n; i < 98; i++)
{
    _putchar("%d, ", i);
}
}
else
{
    for (int i = n; i > 98; i--)
{
    _putchar("%d, ", i);
}
}
    _putchar("98\n");
}
