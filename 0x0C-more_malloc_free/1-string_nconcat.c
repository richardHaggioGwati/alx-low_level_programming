#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: unknown number of bytes
 * Return: the new concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *result;
    unsigned int s1_len, s2_len, i, j;

    if (s1 == NULL)
    {
        s1 = "";
    }

    if (s2 == NULL)
    {
        s2 = "";
    }

    s1_len = strlen(s1);
    s2_len = strlen(s2);

    if (n >= s2_len)
    {
        n = s2_len;
    }

    result = malloc(s1_len + n + 1);

    if (result == NULL)
    {
        return NULL;
    }

    for (i = 0; i < s1_len; i++)
    {
        result[i] = s1[i];
    }

    for (j = 0; j < n; j++)
    {
        result[i + j] = s2[j];
    }

    result[i + j] = '\0';

    return result;
}
