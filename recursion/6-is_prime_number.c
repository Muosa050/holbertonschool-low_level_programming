#include "main.h"

/**
*checker - find if its a prime number or not
*
*@n: is the number we check about it
*@i: to see if i % n = 0 or not
*
*Return: 0 if its not prime , 1 if its prime
*/

int checker(int n, int i)
{
if (n % i == 0)
return (0);

if (i * i > n)
return (1);

return (checker(n, i + 1));
}

/**
*is_prime_number - get if n prime number or not from checker
*
*@n: variable we want to see if it prime or not
*
*Return:  0 if its not prime , 1 if its prime
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);

return (checker(n, 2));

}
