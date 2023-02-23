#include <stdio.h>

/**
* main - code that is causing the output to go into an infinite loop.
* @void: function will take no arguments
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");
i = 0;
/**
 * while (i < 10)
 * {
 * putchar(i);
 * }
*/
printf("Infinite loop avoided! \\o/\n");

return (0);
}
