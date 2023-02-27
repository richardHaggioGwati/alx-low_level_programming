#include "main.h"
#include<string.h>

/**
* rev_string - prints a string, in reverse
* @s: string to be reverse
* Return: void
*/

void rev_string(char *s)
{
int leng, g;

leng = strlen(s);
for(g = leng - 1; g >= 0; g--)
{
_putchar("%c", s[g]);
}
}
