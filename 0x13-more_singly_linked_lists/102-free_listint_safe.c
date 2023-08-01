#include "lists.h"

/**
* free_listint_safe - a function that frees a listint_t list.
* @h: The pointer to the first node in the linked list
*
* Return: The number of elements in the freed list
*/
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int diff_node;
listint_t *temp;

if (!h || !*h)
return (0);

for (; *h; len++)
{
diff_node = *h - (*h)->next;
if (diff_node > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
}
else
{
free(*h);
*h = NULL;
len++;
break;
}
}

*h = NULL;

return (len);
}
