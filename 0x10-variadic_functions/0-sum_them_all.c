#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: type of the parameter
 * @...: unlimited number of parameters
 *
 * Return: Result of operation
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list argp;
va_start(argp, n);

for (i = 0; i < n; i++)
{
sum += va_arg(argp, int);
}
va_end(argp);
return (sum);
}
