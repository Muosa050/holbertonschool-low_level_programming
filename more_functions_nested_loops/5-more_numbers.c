#include "main.h"

/**
*more_numbers - function for printing numbers from 0-9 ten time
*
*Return: it's void function
*/
void more_numbers(void)
{
int i, j;
for (i = 0 ; i <= 9 ; i++)
{
for (j = 0 ; j <= 14 ; j++)
{
if (j >= 10)
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}
