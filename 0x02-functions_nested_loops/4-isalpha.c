#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for alphabets character.
 * @c: receives character
 * return: 1 if c is alpha : returns 0 otherwise
 */
int _isalpha(int c)
{

if (isalpha(c) == 0)
{
    return (0);
}
else
{
    return (1);
}
}