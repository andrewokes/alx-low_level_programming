#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
* looped_listint_len - its counts the number of unique nodes
* in a looped listint_t linked list.
* @head: The pointer to the head of the listint_t to check.
*
* Return: When the list is not looped - 0.
* Otherwise - when number of unique nodes in the list.
*/
size_t looped_listint_len(const listint_t *head)
{
const listint_t *tortoise, *hare;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

tortoise = head->next;
hare = (head->next)->next;

for (; hare; tortoise = tortoise->next, hare = (hare->next)->next)
{
if (tortoise == hare)
{
tortoise = head;
for (; tortoise != hare; nodes++, tortoise = tortoise->next, hare = hare->next)
{
/* The empty loop body, just advancing pointers */
}

for (; tortoise != hare; nodes++, tortoise = tortoise->next)
{
/* The empty loop body, just advancing pointers */
}

return (nodes);
}
}

return (0);
}

/**
* print_listint_safe - To prints a listint_t list safely.
* @head: The pointer to the head of the listint_t list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index;

nodes = looped_listint_len(head);

if (nodes == 0)
{
for (; head != NULL; nodes++, head = head->next)
{
printf("[%p] %d\n", (void *)head, head->n);
}
}
else
{
for (index = 0; index < nodes; index++, head = head->next)
{
printf("[%p] %d\n", (void *)head, head->n);
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nodes);
}
