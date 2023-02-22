#include "main.h"
/**
 * print_alphabet - prints all the alphabets  10 times in lowercase.
 * function will return: On success 1.
 */
void print_alphabet_x10(void) 
{
	char c;

	int i;

	for (i = 0; i < 10; i++) 
{
	c = 'a';
	while (c <= 'z')
{
	putchar(c);
	c++;
}
	putchar('\n');
}
}