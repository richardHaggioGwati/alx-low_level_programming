#ifndef MAIN_H
#define MAIN_H

extern int _putchar(char c);
extern unsigned int binary_to_uint(const char *b);
extern void print_binary(unsigned long int n);
extern int get_bit(unsigned long int n, unsigned int index);
extern int set_bit(unsigned long int *n, unsigned int index);
extern int clear_bit(unsigned long int *n, unsigned int index);
extern unsigned int flip_bits(unsigned long int n, unsigned long int m);
extern int get_endianness(void);

#endif /* MAIN_H */