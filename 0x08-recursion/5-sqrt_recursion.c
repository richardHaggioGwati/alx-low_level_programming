#include "main.h"

/**
 * _pow_recursion - power function
 * @x: value to be raise
 * @y: raised by value
 * Return: integer
 */

int helper(int n, int i)
{
if (i * i == n)
{
return (i);
}
else if (i * i > n)
{
return (-1);
}
else
{
return (helper(n, i + 1));
}
}

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (0);
}
else
{
return (helper(n, 1));
}
}
