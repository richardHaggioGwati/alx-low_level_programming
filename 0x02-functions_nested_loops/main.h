#include <stdio.h>

void print_alphabet(void) {
    char c = 'a';
    while (c <= 'z') {
        putchar(c);
        c++;
    }
    putchar('\n');
}


void print_alphabet_x10(void) {
    char c;
    int i;

    for (i = 0; i < 10; i++) {
        c = 'a';
        while (c <= 'z') {
            _putchar(c);
            c++;
        }
        _putchar('\n');
    }
}
