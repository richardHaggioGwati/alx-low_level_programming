#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: unlimited number of parameters
 *
 * Return: Result of operation
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list arg_list;
va_start(arg_list, n);
for (i = 0; i < n; i++)
{
char *str = va_arg(arg_list, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(arg_list);
}
