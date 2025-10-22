#include "main.h"

/**
*print_line - function to print line on the terminal
*
*@n: git the legnth of the line
*
*Return: return 0
*/

void print_line(int n)
{
int i;
for (i = n ; i > 0 ; i--)
_putchar('_');
_putchar('\n');
}
