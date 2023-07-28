#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - function that adds a new node at the beginning of a list_t list.
* @head: is a double pointer to the list_t list.
* @str: a newelement string to add in the node.
*
* Return: The address of the new element, or NULL if it fails.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *newElement;
unsigned int strLength = 0;

while (str[strLength])
strLength++;

newElement = malloc(sizeof(list_t));
if (!newElement)
return (NULL);

newElement->str = strdup(str);
newElement->len = strLength;
newElement->next = *head;
*head = newElement;

return (*head);
}
