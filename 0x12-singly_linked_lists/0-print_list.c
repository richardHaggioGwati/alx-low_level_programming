#include "stddef.h"
#include "lists.h"

/**
 * print_number - prints an integer using _putchar
 * @n: integer to print
 */
void print_number(unsigned int n)
{
    if (n / 10)
        print_number(n / 10);

    _putchar((n % 10) + '0');
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head node of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    const list_t *current = h;
    unsigned int len;
    char *str;
    size_t count = 0;

    while (current != NULL)
    {
        len = current->len;
        str = current->str;

        if (str == NULL)
        {
            _putchar('[');
            print_number(0);
            _putchar(']');
            _putchar(' ');
            _putchar('(');
            _putchar('n');
            _putchar('i');
            _putchar('l');
            _putchar(')');
            _putchar('\n');
        }
        else
        {
            _putchar('[');
            print_number(len);
            _putchar(']');
            _putchar(' ');

            while (*str != '\0')
            {
                _putchar(*str);
                str++;
            }

            _putchar('\n');
        }

        current = current->next;
        count++;
    }

    return count;
}
