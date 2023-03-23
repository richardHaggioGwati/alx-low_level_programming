#include <stdarg.h>
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list arg_list;
    va_start(arg_list, n);

    for (i = 0; i < n; i++) {
        char* str = va_arg(arg_list, char*);
        if (str == NULL) {
            printf("(nil)");
        } else {
            printf("%s", str);
        }
        if (i < n - 1 && separator != NULL) {
            printf("%s", separator);
        }
    }
    printf("\n");

    va_end(arg_list);
}