#include <stdio.h>

/**
*main - figer out all arguments
*
*@argc: number of arguments
*@argv: vector of arguments that will printed line by line
*
*Return: 0
*/

int main(int argc, char *argv[])
{
int i;
if (argc > 0)
{
for (i = 0 ; i < argc ; i++)
printf("%s\n", argv[i]);
}
else
return (0);
return (0);
}
