#include "lists.h"

/**
* reverse_listint - a function that reverses a listint_t linked list
* @head: A pointer to the first node in the list
*
* Return: A pointer to the 1st node in the renew list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;
listint_t *next = NULL;

for (; current; current = next)
{
next = current->next;
current->next = prev;
prev = current;
}

*head = prev;

return (*head);
}
