#include "lists.h"

/**
* free_listint2 - a function that frees a listint_t list.
* @head: A pointer to the pointer to the listint_t list to be freed.
*/
void free_listint2(listint_t **head)
{
listint_t *new_node;

if (head == NULL)
return;

for (; *head; *head = new_node)
{
new_node = (*head)->next;
free(*head);
}

*head = (NULL);
}
