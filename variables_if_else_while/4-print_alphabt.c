#include <stdio.h>
/**
* main - Prints the alphabet in lowercase without e & q
*
* Return: Always 0 (Success)
*/
int main(void)
{
char l;
for (l = 'a'; l <= 'z'; l++)
{
if ((l = 'e') || (l = 'q'))
break;
putchar(l);
}
putchar('\n');
return (0);
}
