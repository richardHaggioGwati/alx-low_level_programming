#ifndef MAIN_H
#define MAIN_H

extern int _putchar(char c);
extern char *create_array(unsigned int size, char c);
extern char *str_concat(char *s1, char *s2);
extern int **alloc_grid(int width, int height);
extern void free_grid(int **grid, int height);
extern char **strtow(char *str);
extern char *argstostr(int ac, char **av);


#endif /* MAIN_H */
