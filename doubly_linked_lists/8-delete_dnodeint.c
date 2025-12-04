#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp = *head;
unsigned int i = 0;

/* Empty list */
if (tmp == NULL)
return (-1);

/* Delete the head node */
if (index == 0)
{
*head = tmp->next;
if (tmp->next != NULL)
tmp->next->prev = NULL;
free(tmp);
return (1);
}

/* Traverse to the node at given index */
while (tmp != NULL && i < index)
{
tmp = tmp->next;
i++;
}

/* Index out of range */
if (tmp == NULL)
return (-1);

/* Remove the node from the list */
if (tmp->next != NULL)
tmp->next->prev = tmp->prev;

tmp->prev->next = tmp->next;

free(tmp);
return (1);
}
