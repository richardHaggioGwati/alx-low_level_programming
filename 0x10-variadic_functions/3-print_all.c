#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - sum of all its parameters
 * @format: type of the parameter
 * @...: unlimited number of parameters
 *
 * Return: Result of operation
 */
void print_all(const char *const format, ...)
{
    const char *p = format;
    char c;
    int i;
    float f;
    char *s;
    va_list args;
    va_start(args, format);

    while (*p != '\0')
    {
        if (*p == 'c')
        {
            c = va_arg(args, int);
            printf("%c", c);
        }
        else if (*p == 'i')
        {
            i = va_arg(args, int);
            printf("%d", i);
        }
        else if (*p == 'f')
        {
            f = va_arg(args, double);
            printf("%f", f);
        }
        else if (*p == 's')
        {
            s = va_arg(args, char *);
            if (s == NULL)
            {
                printf("(nil)");
            }
            else
            {
                printf("%s", s);
            }
        }

        p++;
        if (*p)
        {
            printf(", ");
        }
    }

    printf("\n");
    va_end(args);
}
