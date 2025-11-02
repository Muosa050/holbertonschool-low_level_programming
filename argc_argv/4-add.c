#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - return the summation of serial numbers
*
*@argc: number of arguments
*@argv: actule argument
*
*Return: 0 if no number ,1 if its not a number in the argv
*/

int main(int argc, char *argv[])
{
int i, j;
int sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1 ; i < argc ; i++)
{
for (j = 0 ; argv[i][j] != '\0' ; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}









