#include "main.h"

/**
*print_most_numbers - fun to print digit 0-9 without 2 & 4
*
*Return: it's void so no return
*/

void print_most_numbers(void)
{
int i;
for (i = 0 ; i <= 9 ; i++)
{
if (i != 2 && i != 4)
_putchar(i + '0');
else
continue;
}
_putchar('\n');
}
