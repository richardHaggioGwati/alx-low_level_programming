#include "main.h"

/**
* print_triangle - prints a triangle, followed by a new line
* @size: the size of the triangle
* Return: result of the operation
*/

void print_triangle(int size)
{
f (size <= 0)
{
printf("\n");
return;
}
int i, j;

for (i = 1; i <= size; i++)
{
for (j = 1; j <= i; j++)
{
_putchar("#");
}
_putchar('\n');
}
}