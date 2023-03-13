#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: previously allocated grid
 * @av: height of the grid
 * Return: NULL if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
int i, j, len = 0, index;
char *str;

if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
len++;
}
len++;
}
str = (char *)malloc(sizeof(char) * (len + 1));
if (str == NULL)
{
return (NULL);
}
index = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[index] = av[i][j];
index++;
}
str[index] = '\n';
index++;
}
str[len] = '\0';
return (str);
}
