#include "main.h"
#include <unistd.h>
/**
 * print_sign - checks if the number is positive, negative or 0.
 * @n: receives number
 * return: 1 if c is alpha : returns 0 otherwise
 */
int print_sign(int n)
{

if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}
