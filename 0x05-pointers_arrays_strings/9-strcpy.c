#include "main.h"
#include <string.h>

/**
* *_strcpy - copies the string pointed to by src
* @src:  string pointed
* @dest: buffer pointer
* Return: charter string
*/

char *_strcpy(char *dest, char *src)
{
char *temp = dest;

while (*src != '\0')
{
*dest++ = *src++;
}
*dest = '\0';
return temp;
}
