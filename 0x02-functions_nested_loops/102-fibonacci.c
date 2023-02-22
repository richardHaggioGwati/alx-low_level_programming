#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0.
 * return: the time table
 */
int main()
{
    int fib1 = 1, fib2 = 2;
    _putchar("%d, %d", fib1, fib2);
    for (int i = 3; i <= 50; i++)
{
    int nextFib = fib1 + fib2;
    _putchar(", %d", nextFib);
    fib1 = fib2;
    fib2 = nextFib;
}
    _putchar("\n");
    return 0;
}
