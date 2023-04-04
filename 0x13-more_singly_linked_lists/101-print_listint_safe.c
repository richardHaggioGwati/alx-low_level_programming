#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *tortoise = head, *hare = head;
size_t count = 0, steps = 0;

while (hare != NULL && hare->next != NULL)
{
count++;
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
tortoise = tortoise->next;
hare = hare->next->next;
if (tortoise == hare)
{
steps = 1;
tortoise = tortoise->next;
while (tortoise != hare)
{
steps++;
tortoise = tortoise->next;
}
printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
break;
}
}
count++;
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
while (steps > 0)
{
count++;
tortoise = tortoise->next;
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
steps--;
}
return (count);
}
