#include "lists.h"

/**
* get_nodeint_at_index - Retrieves the node at a specified index linked list.
* @head: Pointer to the first node in the linked list.
* @index: The index of the node to retrieve.
*
* Return: A pointer to the node at the specified index, or NULL if not found.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int new_index = 0;
listint_t *new_node = head;

while (new_node && new_index < index)
{
new_node = new_node->next;
new_index++;
}

return (new_node ? new_node : NULL);
}
