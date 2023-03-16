#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * multiply - multiply two numbers as strings
 * @num1: Pointer to the memory previously allocated with a call to malloc
 * @num2: Size of the allocated space for ptr
 * Return: result of the multiplication
 */
char *multiply(char *num1, char *num2)
{
int len1 = strlen(num1);
int len2 = strlen(num2);
int *result = calloc(len1 + len2, sizeof(int));
char *res = calloc(len1 + len2 + 1, sizeof(char));
int i, j;

for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
int product = (num1[i] - '0') * (num2[j] - '0');
int sum = result[i + j + 1] + product;
result[i + j + 1] = sum % 10;
result[i + j] += sum / 10;
}
}
i = 0;
while (i < len1 + len2 && result[i] == 0)
{
i++;
}
if (i == len1 + len2)
{
res[0] = '0';
res[1] = '\0';
return (res);
}
j = 0;
while (i < len1 + len2)
{
res[j] = result[i] + '0';
i++;
j++;
}
res[j] = '\0';
free(result);
return (res);
}

/**
 * is_digit_string - check if a string
 * @str: string to check
 * Return: result of check
 */
int is_digit_string(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (!isdigit(str[i]))
{
return (0);
}
i++;
}
return (1);
}

/**
 * main - run the program
 * @argc: argument count
 * @argv: argument array
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
    char *num1 = argv[1];
    char *num2 = argv[2];
    char *res = multiply(num1, num2);

    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }
    if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
    {
        printf("Error\n");
        return 98;
    }
    printf("%s\n", res);
    free(res);
    return 0;
}
