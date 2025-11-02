#include "main.h"

/**
*checker - see if number i * i = n or not
*
*@n: number to find the square root for it
*@i: is the number multiplay to itself
*
*Return: i is the square root for n
*/

int checker(int n, int i)
{
if (i * i == n)
return (i);

if (i * i > n)
return (-1);

return (checker(n, i + 1));
}

/**
*_sqrt_recursion - function that get square root for n from checker
*
*@n: we want the square root for it
*
*Return: the square root without useing loop
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (checker(n, 0));
}
