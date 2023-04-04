#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *next;
size_t count = 0;

if (h == NULL)
{
return (0);
}
current = *h;
while (current != NULL)
{
next = current->next;
if (next >= current)
{
break;
}
free(current);
count++;
current = next;
}
*h = NULL;
return (count);
}
