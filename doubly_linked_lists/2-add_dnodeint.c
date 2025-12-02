#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: value to store in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *hn;


hn = malloc(sizeof(dlistint_t));
if (!hn)
return (NULL);

hn->n = n;
hn->prev = NULL;
hn->next = *head;
*head = hn;

return (hn);
}

