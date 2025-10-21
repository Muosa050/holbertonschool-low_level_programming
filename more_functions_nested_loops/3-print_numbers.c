#include "main.h"

/**
*print_numbers - function that print digits from 0-9 with  new line
*
*Return: it's void fun no return
*/

void print_numbers(void)
{
int i;

for (i = 0 ; i <= 9 ; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
