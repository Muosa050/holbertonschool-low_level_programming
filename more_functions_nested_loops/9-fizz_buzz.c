#include <stdio.h>

/**
*main - fun to print fizz if divided by 3 buzz if it 5
*
*Return: void
*/

int main(void)
{
int i;

for (i = 1 ; i <= 100 ; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i < 100)
printf(" ");
}
putchar('\n');
return (i);
}
