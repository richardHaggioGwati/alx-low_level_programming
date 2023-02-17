#include <stdio.h>

int main(void)
{
    int letter = 122; /* ASCII code for 'z' */

    while (letter >= 97) /* ASCII code for 'a' */
    {
        putchar(letter);
        letter--;
    }

    putchar('\n');

    return 0;
}
