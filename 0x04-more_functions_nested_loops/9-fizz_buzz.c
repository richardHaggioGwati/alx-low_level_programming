#include "main.h"

/**
* main - prints the numbers from 1 to 100
* multiples of three print Fizz instead of the number
* for the multiples of five print Buzz
* for numbers which are multiples of both three and five print FizzBuzz
* Return: result of the operation
*/

int main(void)
{
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
_putchar("FizzBuzz ");
}
else if (i % 3 == 0)
{
_putchar("Fizz ");
}
else if (i % 5 == 0)
{
_putchar("Buzz ");
}
else
{
_putchar("%d ", i);
}
}
_putchar("\n");
return 0;
}