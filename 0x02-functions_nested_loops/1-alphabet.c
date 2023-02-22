#include "main.h"
/**
 * print_alphabet - prints all alphabets in lowercase.
 * function will return: On success 1.
 */
void print_alphabet(void)
{
	char c = 'a';
	
	while (c <= 'z')
{
	_putchar(c);
	c++;
}
	_putchar('\n');
}
