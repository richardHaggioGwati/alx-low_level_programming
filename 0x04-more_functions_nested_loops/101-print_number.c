#include "main.h"

/**
* print_number - prints an integer
* @n: passed integer
* Return: result of the operation
*/

void print_number(int n) 
{
if (n < 0) {
_putchar('-');
n = -n;
}
if (n / 10) 
{
print_number(n / 10);
}
_putchar((n % 10) + '0');
}