#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase character.
 * @c: receives character
 * return: 1 if c is lowercase : Returns 0 otherwise
 */
int _islower(int c)
{

if (islower(c) == 0)
{
    return (0);
}
else
{
    return (1);
}
}
