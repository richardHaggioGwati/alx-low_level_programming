#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...) {
    int i = 0;
    char c;
    char *s;
    float f;
    va_list args;
    va_start(args, format);

    while (format[i]) {
        switch (format[i]) {
            case 'i':
                printf("%d ", va_arg(args, int));
                break;
            case 'c':
                c = va_arg(args, int);
                printf("%c ", c);
                break;
            case 'f':
                f = va_arg(args, double);
                printf("%f ", f);
                break;
            case 's':
                s = va_arg(args, char *);
                if (s == NULL) {
                    printf("(nil)");
                } else {
                    printf("%s ", s);
                }
                break;
        }
        i++;
    }
    printf("\n");
    va_end(args);
}