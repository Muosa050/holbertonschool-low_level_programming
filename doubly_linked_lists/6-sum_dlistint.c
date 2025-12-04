#include "lists.h"
/**
*sum_dlistint - to sum list of numbers
*
*@head: first element in the list
*
*Return: 0 if it empty list, result of the suming all n
*/


int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (!head)
return (0);

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
