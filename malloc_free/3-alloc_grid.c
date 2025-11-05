#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - array 2D
*
*@width: columns
*@height: rows
*
*Return: NULL w&h negative & arr2D failed
*/

int **alloc_grid(int width, int height)
{
int *arr2d[height][widtth];
int c = width + height;
int i, j;

arr2d = malloc(sizeof(int) * c);
if (arr2d == NULL)
return (NULL);


