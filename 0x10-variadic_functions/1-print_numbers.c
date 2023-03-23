#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print all numbers
 * @separator: string to be printed between the numbers
 * @n: number of strings passed to the function
 * @...: unlimited number of parameters
 *
 * Return: Result of operation
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list arg_list;
va_start(arg_list, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(arg_list, int));
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(arg_list);
}
