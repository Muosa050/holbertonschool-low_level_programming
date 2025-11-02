#include <stdio.h>
/**
*main - function figure out number of arguments in the cmd
*
*@argc: number of arguments
*@argv: vector of the argument
*
*Return: number of the arguments
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
int i = argc;
i--;
printf("%d\n", i);
return (0);
}
