#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to allocate
 * Return: NULL if str = Null else pointer
 */

char *_strdup(char *str)
{
char *duplicate;

if (str == NULL)
{
return (NULL);
}
duplicate = malloc(strlen(str) + 1);
if (duplicate == NULL)
{
return (NULL);
}
strcpy(duplicate, str);
return (duplicate);
}
