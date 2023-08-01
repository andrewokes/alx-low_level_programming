#include "lists.h"

/**
* sum_listint -  a function that returns the sum of all the data
* @head: a pointer to the 1st node in the linked list.
*
* Return: The total sum.
*/
int sum_listint(listint_t *head)
{
int total_sum = 0;
listint_t *new_node;

for (new_node = head; new_node; new_node = new_node->next)
{
total_sum += new_node->n;
}

return (total_sum);
}

