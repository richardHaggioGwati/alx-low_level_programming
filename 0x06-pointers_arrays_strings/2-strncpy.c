/**
* _strncpy -  concatenates two strings
* @dest: This is pointer to the destination array
* @src: This is the string to be appended
* @n: bytes from src
* Return: copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
