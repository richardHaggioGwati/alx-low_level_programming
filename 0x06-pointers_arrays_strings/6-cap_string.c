#include <ctype.h>
#include <string.h>

/**
* cap_string - capitalizes all words of a string
* @str: string to be capitalized
* Return: capitalized string
*/

char *cap_string(char *str)
{
int capitalize_next = 1;

char *p = str;

while (*p)
{
if (isspace(*p) || ispunct(*p))
{
capitalize_next = 1;
}
else if (capitalize_next)
{
*p = toupper(*p);
capitalize_next = 0;
}
p++;
}
return (str);
}
