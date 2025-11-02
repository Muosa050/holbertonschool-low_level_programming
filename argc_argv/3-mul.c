#include <stdio.h>
#include <stdlib.h>
/**
*main - figure out the multiplication of two numbers
*
*@argc : check if ther is 3 args?
*@argv : take 1 & 2 from the vector and multiplay it
*
*Return: 0
*/

int main(int argc, char *argv[])
{
int x, y, mul;
if (argc != 3)
{
printf("Error\n");
return (0);
}
x = atoi(argv[1]);
y = atoi(argv[2]);
mul = x *y;
printf("%d\n", mul);
return (0);
}
