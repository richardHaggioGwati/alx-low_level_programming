#include "main.h"
#include "_putchar.c"

/**
* print_chessboard - print a chessboard
* @haystack:  string to search
* @needle: first occurrence of the substring
* Return: void
*/

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
