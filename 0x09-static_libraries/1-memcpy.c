/**
* _memcpy - fills memory with a constant byte
* @dest: memory area
* @src: area to copy from
* @n: copied bytes
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
