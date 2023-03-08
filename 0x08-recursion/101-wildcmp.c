#include "main.h"

/**
 * wildcmp - compares two strings
 * @s: string to be check
 * @s2: can contain the special character
 * Return:  returns 1 if the strings can be considered identical, otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s2 == '*')
{
if (*s1 == '\0')
{
return (wildcmp(s1, s2 + 1));
}
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}
if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}