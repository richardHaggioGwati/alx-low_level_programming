#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - checks if the number is positive, negative or 0.
 * @num: receives number
 * return: 0 for success 
 */
int print_last_digit(int num)
{
    int last_digit = num % 10;
    _putchar(last_digit);
    return (0);
}