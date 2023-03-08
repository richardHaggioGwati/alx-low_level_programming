#include "main.h"

/**
 * helper - natural square root of a number
 * @n: receives number from _sqrt_recursion
 * @i: 1
 * Return: natural number
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

/**
 * _sqrt_recursion - natural square root of a number
 * @n: number to check
 * Return: natural numbers
 */

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
