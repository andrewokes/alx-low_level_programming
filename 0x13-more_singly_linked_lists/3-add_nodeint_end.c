#include "lists.h"

/**
* add_nodeint_end - a function that adds a new node at the end
* @head: A pointer to the pointer to the first element in the list.
* @n: The data to be inserted into the new element.
*
* Return: A pointer to the new node, or NULL if memory allocation fails.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *current_node = *head;

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

/* Traverse to the end of the linked list using C-style for loop */
for (; current_node->next; current_node = current_node->next)
{
/* Empty loop body, just advancing to the next node in the list */
}

current_node->next = new_node;

return (new_node);
}

