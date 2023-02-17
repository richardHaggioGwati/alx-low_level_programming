#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
    int i, j;

    for (i = 0; i <= 99; i++)
    {
        for (j = i + 1; j <= 99; j++)
        {
            if (i != j)
            {
                printf("%02d %02d", i, j);
                if (i != 98 || j != 99)
                {
                    printf(", ");
                }
            }
        }
    }
    printf("\n");

    return (0);
}
