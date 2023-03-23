#include <stdarg.h>
#include <stdio.h>

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