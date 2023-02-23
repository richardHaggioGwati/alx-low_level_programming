#include "main.h"

/**
* more_numbers - function that draws a
* straight line in the terminals
* @n - length of line
* Return: result of the operation
*/

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
