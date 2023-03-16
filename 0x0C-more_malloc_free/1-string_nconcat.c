#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_len - the length of a string
 * @str: The string to get the length of.
 * Return: The length of the string.
 */
unsigned int string_len(char *str) {
if (str == NULL)
{
return (0);
}
else
{
return strlen(str);
}
}

/**
 * string_copy - Copies a string into a newly allocated memory block, 
 * @str: The string to copy.
 * Return: A pointer to a newly allocated string
 */
char *string_copy(char *str) {
unsigned int len = string_len(str);
char *result = malloc(len + 1);

if (result == NULL) {
return NULL;
}
else
{
strcpy(result, str);
return (result);
}
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: unknown number of bytes
 * Return: the new concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1_len = string_len(s1);
char *result = malloc(s1_len + n + 1);

if (result == NULL)
{
return (NULL);
}
else
{
strcpy(result, s1);
strncat(result, s2, n);
return (result);
}
}
