#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

extern int _putchar(char c);
extern int sum_them_all(const unsigned int n, ...);
extern void print_numbers(const char *separator, const unsigned int n, ...);
extern void print_strings(const char *separator, const unsigned int n, ...);
extern void print_all(const char * const format, ...);

#endif /* MAIN_H */