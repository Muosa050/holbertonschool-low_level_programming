#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the first node of the list
 *
 * Description:
 * This function loops through each node in the doubly linked list,
 * stores the address of the next node, frees the current node,
 * then moves on until all nodes are freed.
 */
void free_dlistint(dlistint_t *head)
{
while (head)
{
free(head);
head = head->next;
}
}
