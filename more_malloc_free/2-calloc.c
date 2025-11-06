#include "main.h"
#include <stdlib.h>

/**
*_calloc - recieving memory location for arry
*
*@nmemb: elements in that array
*@size: of each element location
*
*Return: null if malloc faild & size =0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *arr;
if (nmemb == 0 || size == 0)
return (NULL);

arr = malloc(size * nmemb);
if (arr == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
arr[i] = 0;
return (arr);
}
