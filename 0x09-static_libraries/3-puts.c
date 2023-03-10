#include "main.h"


/**
* _puts - swaps the values of two integers
* @s: string to check for length
* Return: length of the string
*/

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
