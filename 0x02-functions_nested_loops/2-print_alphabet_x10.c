#include "main.h"
/**
 * print_alphabet_x10 - prints all the alphabets  10 times in lowercase.
 * The function is using a combination of for and while
 * loops to print the alphabets
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
	_putchar(c);
	c++;
}
	_putchar('\n');
}
}
