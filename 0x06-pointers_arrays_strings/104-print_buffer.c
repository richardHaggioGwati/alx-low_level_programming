#include <stdio.h>
#include <string.h>

/**
* print_buffer - prints a buffer
* @b: pointer to a buffer 
* @size: contents
* Return: return value
*/

void print_buffer(char *b, int size)
{
int i, j;

unsigned char c;

if (size <= 0)
{
printf("\n");
return;
}

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = i; j < i + 10; j++)
{
if (j < size) {
printf("%02x ", b[j]);
}
else
{
printf("   ");
}
}
printf(" ");
for (j = i; j < i + 10; j++)
{
if (j < size)
{
c = b[j];
if (c < 32 || c > 126)
{
c = '.';
}
printf("%c", c);
}
else
{
printf(" ");
}
}
printf("\n");
}
}
