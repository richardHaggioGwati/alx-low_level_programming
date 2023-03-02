

/**
* *_strncat -  concatenates two strings
* @dest: This is pointer to the destination array
* @src: This is the string to be appended
* @n: bytes from src
* Return: appended string
*/

char *_strncat(char *dest, char *src, int n)
{
char *p = dest;

while (*p != '\0')
{
p++;
}
int i = 0;
while (i < n && *src != '\0')
{
*p = *src;
p++;
src++;
i++;
}
*p = '\0';
return (dest);
}
