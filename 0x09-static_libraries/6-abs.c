#include "main.h"
#include <stdlib.h>
/**
 * _abs - checks if the number is positive, negative or 0.
 * @i: receives number
 * Return: 0 for success : returns 1 otherwise
 */
int _abs(int i)
{
int abs_value;

if (i < 0)
{
i = i * (-1);
}
abs_value = i;
return (abs_value);
}
