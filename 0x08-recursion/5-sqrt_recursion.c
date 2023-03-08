#include "main.h"

/**
 * _pow_recursion - power function
 * @x: value to be raise
 * @y: raised by value
 * Return: integer
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return -1;
}
else if (n == 0 || n == 1)
{
return n;
}
else
{
int i;
for (i = 1; i * i <= n; i++)
{
if (i * i == n)
{
return i;
}
}
return -1;
}
}
