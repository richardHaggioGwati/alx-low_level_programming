/**
 * Prototype are placed in here
 */
#include <stdio.h>

void print_alphabet(void) {
    char c = 'a';
    while (c <= 'z') {
        putchar(c);
        c++;
    }
    putchar('\n');
}
