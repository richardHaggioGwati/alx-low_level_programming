#include <stddef.h>

/**
* _strchr - locates a character in a string.
* @s: string to search
* @c: character
* Return: pointer to the first occurrence
*/

char *_strchr(char *s, char c)
{
while (*s != '\0') {
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return s;
}
return NULL;
}
