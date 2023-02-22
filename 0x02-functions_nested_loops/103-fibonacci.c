#include "main.h"
/**
 * main - prints the sum of the even-valued terms
 * return: followed by a new line.
 */
int main()
{
    int fib1 = 1, fib2 = 2, nextFib = 3, sum = 2;
    while (nextFib <= 4000000) 
{
    if (nextFib % 2 == 0)
{
    sum += nextFib;
}
    fib1 = fib2;
    fib2 = nextFib;
    nextFib = fib1 + fib2;
}
    _putchar("%d\n", sum);
    return 0;
}
