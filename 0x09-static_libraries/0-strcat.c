

/**
* *_strcat -  appends the string.
* @dest: This is pointer to the destination array
* @src: This is the string to be appended
* Return: appended string
*/

char *_strcat(char *dest, char *src)
{
char *p = dest;

while (*p != '\0')
{
p++;
}

while (*src != '\0')
{
*p = *src;
p++;
src++;
}
*p = '\0';
return (dest);
}
