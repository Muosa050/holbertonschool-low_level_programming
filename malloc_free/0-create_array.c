#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - gives the value asked from main c in fixed legnth & allocated
*
*@size: number of array elments
*@c: alphabt we will get his value from ASCII
*
*Return: null if size and array is 0
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;
if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);
for (i = 0 ; i < size ; i++)
array[i] = c;
return (array);
}
