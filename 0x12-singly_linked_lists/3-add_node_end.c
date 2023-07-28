#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - function that add a new node at the beginning of a list_t list
* @head: The double pointer to the list_t list.
* @str: The string that needs to be duplicated.
*
* Return: Address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *u;
list_t *temp = *head;
unsigned int strLength = 0;

for (; str[strLength]; strLength++)
;

u = malloc(sizeof(list_t));
if (!u)
return (NULL);

u->str = strdup(str);
u->len = strLength;
u->next = NULL;

if (*head == NULL)
{
*head = u;
return (u);
}

while (temp->next)
temp = temp->next;

temp->next = u;

return (u);
}
