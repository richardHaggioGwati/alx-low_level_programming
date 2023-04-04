#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 * @head: pointer to pointer to the head node of the list
 * @index: index of the node to delete (starting from 0)
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev_node, *node_to_delete;
unsigned int i;

if (*head == NULL)
{
return (-1);
}
if (index == 0)
{
node_to_delete = *head;
*head = (*head)->next;
free(node_to_delete);
return (1);
}
prev_node = *head;
node_to_delete = (*head)->next;
for (i = 1; node_to_delete != NULL && i < index; i++)
{
prev_node = node_to_delete;
node_to_delete = node_to_delete->next;
}
if (node_to_delete == NULL)
{
return (-1);
}
prev_node->next = node_to_delete->next;
free(node_to_delete);
return (1);
}
