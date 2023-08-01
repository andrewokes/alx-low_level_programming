#include "lists.h"

/**
* listint_len -  a function that returns the number of elements in a linked
* @h: linked list of type listint_t to cross
*
* Return: number of nodes (success)
*/
size_t listint_len(const listint_t *h)
{
size_t u = 0;

while (h)
{
u++;
h = h->next;
}

return (u);
}
