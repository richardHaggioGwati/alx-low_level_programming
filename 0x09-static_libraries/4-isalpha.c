#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for alphabets character.
 * @c: receives character
 * Return: 1 if c is alpha : returns 0 otherwise
 */
int _isalpha(int c)
{

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
