#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of addition of a and b
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of subtraction of b from a
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of multiplication of a and b
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of division of a by b
 */
int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a / b);
}

/**
 * op_mod - Finds the remainder of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the modulo operation of a by b
 */
int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a % b);
}