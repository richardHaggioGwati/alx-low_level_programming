#include "main.h"
#include<string.h>

/**
* print_rev - prints a string, in reverse
* @s: string to be reverse
* Return: void
*/

void print_rev(char *s)
{
int leng, g;

leng = strlen(s);
for(g = leng - 1; g >= 0; g--)
{
_putchar("%c", s[g]);
}
_putchar("\n");
}
