#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index where the new node should be inserted
 * @n: data for the new node
 *
 * Return: address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *tmp = *h;
unsigned int i = 0;

/* Insert at the beginning */
if (idx == 0)
return (add_dnodeint(h, n));

/* Move to the node before the index */
while (tmp != NULL && i < idx - 1)
{
tmp = tmp->next;
i++;
}

/* Index exceeds list length */
if (tmp == NULL)
return (NULL);

/* Insert at the end */
if (tmp->next == NULL)
return (add_dnodeint_end(h, n));

/* Insert in the middle */
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = tmp;
new->next = tmp->next;
tmp->next->prev = new;
tmp->next = new;

return (new);
}
