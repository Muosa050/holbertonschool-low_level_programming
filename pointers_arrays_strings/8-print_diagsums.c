#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: pointer to first element of matrix
 * @size: number of rows/columns
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - i - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
