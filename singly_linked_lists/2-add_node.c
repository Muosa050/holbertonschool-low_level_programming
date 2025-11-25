#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to duplicate into the node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *lh;
char *dups;
unsigned int i = 0;


if (str == NULL)
return (NULL);


dups = strdup(str);

if (dups == NULL)
return (NULL);

while (str[i])
i++;



lh = malloc(sizeof(list_t));
if (lh == NULL)
{
free(dups);
return (NULL);
}

lh->str = dups;
lh->len = i;
lh->next = *head;
*head = lh;

return (lh);


}

