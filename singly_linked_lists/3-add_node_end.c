#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to duplicate into the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *le, *temp;
char *dups;
unsigned int i = 0;

if (str == NULL)
return (NULL);

dups = strdup(str);
if (dups == NULL)
return (NULL);

le = malloc(sizeof(list_t));
if (le == NULL)
{
free(dups);
return (NULL);
}

while (str[i])
i++;

le->str = dups;
le->len = i;
le->next = NULL;

if (*head == NULL)
{
*head = le;
return (le);
}

temp = *head;
while (temp->next != NULL)
temp = temp->next;

temp->next = le;
return (le);
}
