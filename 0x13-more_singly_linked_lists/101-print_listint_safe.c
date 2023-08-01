#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
* looped_listint_len - it counts the number of unique nodes
* in a looped listint_t linked list.
* @head: Pointer to the head of the listint_t to check.
*
* Return: If the list is not looped - 0.
* Otherwise - number of unique nodes in the list.
*/
size_t looped_listint_len(const listint_t *head)
{
const listint_t *tortoise, *hare;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

tortoise = head->next;
hare = (head->next)->next;

for (; hare; hare = hare->next)
{
if (tortoise == hare)
{
tortoise = head;
for (; tortoise != hare; tortoise = tortoise->next, hare = hare->next)
{
nodes++;
}

tortoise = tortoise->next;
for (; tortoise != hare; tortoise = tortoise->next)
{
nodes++;
}

return (nodes);
}

tortoise = tortoise->next;
if (hare->next)
hare = hare->next;
else
break;
}

return (0);
}
/**
* print_listint_safe - a function prints a listint_t list safely.
* @head: Pointer to the head of the listint_t list.
*
* Return: Number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;

nodes = looped_listint_len(head);

if (nodes == 0)
{
while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
nodes++;
}
}
else
{
while (index < nodes)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
index++;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nodes);
}
