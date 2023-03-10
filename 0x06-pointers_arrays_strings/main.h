#ifndef MAIN_H
#define MAIN_H

extern int _putchar(char c);
extern char *_strcat(char *dest, char *src);
extern char *_strncat(char *dest, char *src, int n);
extern char *_strncpy(char *dest, char *src, int n);
extern int _strcmp(char *s1, char *s2);
extern void reverse_array(int *a, int n);
extern char *string_toupper(char *);
extern char *cap_string(char *);
extern char *leet(char *str);
extern char *rot13(char *);
extern void print_number(int n);
extern char *infinite_add(char *n1, char *n2, char *r, int size_r);
extern void print_buffer(char *b, int size);

#endif /* MAIN_H */
 