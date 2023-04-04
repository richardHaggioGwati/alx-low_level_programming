#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head node of the list
 * @index: index of the node to return, starting at 0
 *
 * Return: pointer to the nth node, or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *current;

if (head == NULL)
{
return (NULL);
}
current = head;
for (i = 0; i < index && current != NULL; i++)
{
current = current->next;
}
return (current == NULL ? NULL : current);
}
