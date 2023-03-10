#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument array
 * Return: it's name
 */

int main(int argc, char *argv[])
{
(void) argv;

printf("%i\n", (argc - 1));
return (0);
}
