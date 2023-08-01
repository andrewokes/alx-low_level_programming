#include "lists.h"

/**
* pop_listint - a function that deletes the head node of a linked list.
* @head: Pointer to the pointer to the first element in the linked list.
*
* Return: The data inside the removed element, or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
listint_t *new_node;
int data;

if (!head || !*head)
return (0);

data = (*head)->n;
new_node = (*head)->next;
free(*head);
*head = new_node;

return (data);
}
