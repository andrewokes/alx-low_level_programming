#include "lists.h"

/**
* free_listint - a function that frees a linked list.
* @head: A pointer to the listint_t list to be freed.
*/
void free_listint(listint_t *head)
{
listint_t *new_node;

for (; head; head = new_node)
{
new_node = head->next;
free(head);
}
}
