#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: value to store in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *en, *last;
last = *head;
en = malloc(sizeof(dlistint_t));
if (!en)
return (NULL);

en->n = n;
en->next = NULL;

if (*head == NULL)
{
en->prev = NULL;
*head = en;
return (en);
}

last = *head;
while (last->next != NULL)
last = last->next;

last->next = en;
en->prev = last;

return (en);
}
