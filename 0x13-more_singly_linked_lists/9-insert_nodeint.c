#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to a pointer to the first node of the list
 * @idx: index where the new node should be added (starting at 0)
 * @n: value to be stored in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp_node;
unsigned int i;

if (head == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(*new_node));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
temp_node = *head;
for (i = 0; i < idx - 1 && temp_node != NULL; i++)
{
temp_node = temp_node->next;
}
if (temp_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = temp_node->next;
temp_node->next = new_node;
return (new_node);
}
