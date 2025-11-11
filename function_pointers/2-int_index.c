#include "function_pointers.h"

/**
*int_index - function that send elments to cmd to be compared
*
*@array: contain the elements in integer
*@size: number of array elements
*@cmd: function pointer to compare el
*
*Return: -1 if no elements matches or if size less then or equal 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || cmp == NULL || array == NULL)
return (-1);
for (i = 0 ; i < size ; i++)
{
if (cmp(array[i]) != 0)
return (i);
}

return (-1);

}
