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
    char c_val;
    const char *f = format;
    int i_val;
    float f_val;
    char *s_val;
    va_list arg_list;
    va_start(arg_list, format);


    while (*f)
    {
        if (*f == 'c')
        {
            c_val = (char)va_arg(arg_list, int);
            printf("%c", c_val);
        }
        else if (*f == 'i')
        {
            i_val = va_arg(arg_list, int);
            printf("%d", i_val);
        }
        else if (*f == 'f')
        {
            f_val = (float)va_arg(arg_list, double);
            printf("%f", f_val);
        }
        else if (*f == 's')
        {
            s_val = va_arg(arg_list, char *);
            if (s_val == NULL)
            {
                printf("(nil)");
            }
            else
            {
                printf("%s", s_val);
            }
        }

        f++;
        if (*format)
        {
            printf(", ");
        }
    }

    va_end(arg_list);
    printf("\n");
}
