#include <ctype.h>
#include <string.h>

/**
* string_toupper - reverses the content of an array of integers
* @str: string to uppercase
* Return: string with uppercase
*/

char *string_toupper(char *str)
{
size_t i;

for (i = 0; i < strlen(str); i++)
{
str[i] = toupper(str[i]);
}
return (str);
}
