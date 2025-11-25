#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t linked list
 * @head: pointer to the head of the list
 *
 * Description: frees each node's string, then the node itself,
 * until the entire linked list is deallocated.
 */
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head->next; /* save next node */
free(head->str);   /* free duplicated string */
free(head);        /* free current node */
head = temp;       /* move to next node */
}
}
