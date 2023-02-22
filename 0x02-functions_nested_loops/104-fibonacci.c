#include "main.h"
/**
 * main - prints the sum of the even-valued terms
 * return: followed by a new line.
 */
int main()
{
    int fib1 = 1, fib2 = 2;
    _putchar("%d, %d", fib1, fib2);
    for (int i = 3; i <= 98; i++)
{
    int nextFib = fib1 + fib2;
    _putchar(", %d", nextFib);
    fib1 = fib2;
    fib2 = nextFib;
}
    _putchar("\n");
    return 0;
}