#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase character.
 * @c: receives character
 * return: 1 if c is lowercase : Returns 0 otherwise
 */
int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
    return (1);
}
else
{
    return (2);
}
}
