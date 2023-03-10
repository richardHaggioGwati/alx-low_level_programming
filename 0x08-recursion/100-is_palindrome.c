#include "main.h"
#include <string.h>

/**
 * is_palindrome - function checks if a string is a palindrome
 * @s: string to be check
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
int len = strlen(s);

if (len <= 1)
{
return (1);
}
if (s[0] == s[len - 1])
{
s[len-1] = '\0';
return (is_palindrome(s+1));
}
else
{
return (0);
}
}