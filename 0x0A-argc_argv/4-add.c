#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument array
 * Return: it's name
 */

int main(int argc, char *argv[])
{
int sum = 0;

int i, j;

for (i = 1; i < argc; i++)
{
char *arg = argv[i];

for (j = 0; arg[j] != '\0'; j++)
{
if (!isdigit(arg[j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(arg);
}
printf("%d\n", sum);
return (0);
}
