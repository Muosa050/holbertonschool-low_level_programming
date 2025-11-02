#include <stdio.h>
/**
*main - function return the name of file name argument from gcc
*
*@argc: not used
*@argv: vector of arguments in command gcc to figure out [0]
*
*Return: 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{

printf("%s\n", argv[0]);
return (0);
}
