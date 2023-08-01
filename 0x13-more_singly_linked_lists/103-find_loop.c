#include "lists.h"

/**
* find_listint_loop - a function that finds the loop in a linked list.
* @head: The linked list to search for
*
* Return: The address of the node where the loop starts, or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head; /* Local variable for slow pointer */
listint_t *fast = head; /* Local variable for fast pointer */

while (slow && fast && fast->next)
{
slow = slow->next;          /* Move slow pointer one step */
fast = fast->next->next;    /* Move fast pointer two steps */

if (slow == fast)
{
slow = head; /* Reset slow pointer to the head of the list */
while (slow != fast)
{
slow = slow->next; /* Move both pointers one step at a time */
fast = fast->next; /* until they meet at the starting node of the loop */
}
return (fast); /* Return the address of the starting node of the loop */
}
}

return (NULL); /* No loop found, return NULL */
}
