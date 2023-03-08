#include "main.h"

/**
 * is_prime - power function
 * @n: value to be raise
 * @i: raised by value
 * Return: integer
 */

int is_prime(int n, int i)
{
if (n <= 2)
{
if (n == 2)
{
return (1);
}
else
{
return (0);
}
}
if (n % i == 0)
{
return (0);
}
if (i * i > n)
{
return (1);
}
return (is_prime(n, i + 1));
}

/**
 * is_prime_number - that returns 1 if the input integer is a prime number
 * @n: value to be check
 * Return: integer 0 or 1
 */

int is_prime_number(int n)
{
return (is_prime(n, 2));
}
