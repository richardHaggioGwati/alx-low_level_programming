#include "main.h"

/**
* more_numbers - function that draws a
* straight line in the terminals
* @size - length of line
* Return: result of the operation
*/

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}
int i, j;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
