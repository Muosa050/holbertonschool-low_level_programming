#include "main.h"
/**
 * puts2 - prints every other char starting with the first
 * @str: string pointer
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
