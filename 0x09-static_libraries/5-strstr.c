#include <stddef.h>

/**
* _strpbrk - locates a substring
* @haystack:  string to search
* @needle: first occurrence of the substring
* Return: a pointer of substring or NULL
*/

char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++);
if (needle[j] == '\0')
{
return (&haystack[i]);
}
}
return (NULL);
}
