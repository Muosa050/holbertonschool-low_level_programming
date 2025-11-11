#include "function_pointers.h"
#include <stddef.h>
/**
*array_iterator - sending the aray via function pointer to be printed
*
*@array: pointer to the array elments
*@size: number of elements to be printed from array
*@action: function pointer
*
*Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0 ; i < size ; i++)
action(array[i]);
}

