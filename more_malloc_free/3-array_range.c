#include "main.h"
#include <stdlib.h>

/**
*array_range - resarving a memory indsies for array of int elements
*
*@min: first el
*@max: last el
*
*Return: arr pointer , null min>max & malloc fail
*/

int *array_range(int min, int max)
{
int i, j = min;
int *arr;

if (min > max)
return (NULL);

arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);
for (i = 0 ; j <= max ; i++)
{
arr[i] = j;
j++;
}
return (arr);
}

