#include "main.h"

/**
*factorial - function figure out the factorial of a number
*
*@n: integer to ritch his factorial
*
*Return: factorial result
*/

int factorial(int n)
{
if (n == 0)
{
return (1);
}
if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
