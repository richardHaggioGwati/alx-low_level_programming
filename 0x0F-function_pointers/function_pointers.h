#ifndef MAIN_H
#define MAIN_H

extern int _putchar(char c);
extern void print_name(char *name, void (*f)(char *));
extern void array_iterator(int *array, size_t size, void (*action)(int));
extern int int_index(int *array, int size, int (*cmp)(int));

#endif /* MAIN_H */
 