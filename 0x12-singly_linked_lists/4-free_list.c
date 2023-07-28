#include <stdlib.h>
#include "lists.h"

/**
* free_list - a function that frees a list_t list.
* @h: The pointer list_t list to be freed.
*/
void free_list(list_t *h)
{
list_t *i;

for (; h; h = i)
{
i = h->next;
free(h->str);
free(h);
}
}

