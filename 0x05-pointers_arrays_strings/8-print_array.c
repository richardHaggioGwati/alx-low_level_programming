#include "main.h"
#include <string.h>

/**
* puts2 - prints half of a string
* @str: string to print
* Return: void
*/

void print_array(int *a, int n)
{
for (int i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n-1)
{
printf(", ");
}
}
printf("\n");
}
