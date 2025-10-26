#include "main.h"
/**
* reverse_array - reverses the content of an array of integers
* @a: pointer to the array
* @n: number of elements in the array
*/
void reverse_array(int *a, int n)
{
int i = 0, temp;
n--;
while (i < n)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
i++;
n--;
}
}
