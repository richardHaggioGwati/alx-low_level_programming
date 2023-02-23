#include "main.h"
#include <ctype.h>

/**
* __isdigit -  checks for digits.
* @c: receives values
* Return: 1 if c is digit else return 0
*/

int _isdigit(int c)
{
if (isdigit(c) == 0)
{
return (0);
}
else
{
return (1);
}
}
