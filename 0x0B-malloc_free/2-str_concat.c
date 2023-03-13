#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
char *concatenated;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
concatenated = malloc(strlen(s1) + strlen(s2) + 1);
if (concatenated == NULL)
{
return (NULL);
}
strcpy(concatenated, s1);
strcat(concatenated, s2);

return (concatenated);
}
