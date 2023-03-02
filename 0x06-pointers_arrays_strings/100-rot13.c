/**
* leet - encodes a string into 1337
* @str: string to encode
* Return: coded string
*/

char *rot13(char *str)
{
char *p = str;

while (*p)
{
if ((*p >= 'A' && *p <= 'M') || (*p >= 'a' && *p <= 'm'))
{
*p = *p + 13;
} 
else if ((*p >= 'N' && *p <= 'Z') || (*p >= 'n' && *p <= 'z'))
{
*p = *p - 13;
}
p++;
}
return (str);
}
