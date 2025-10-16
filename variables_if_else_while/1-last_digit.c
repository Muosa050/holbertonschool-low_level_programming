#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */
/**
 * main - figure out the last digit
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int d1;
srand(time(0));
n = rand() - RAND_MAX / 2;
d1 = n % 10;
if ((d1 > 0) && (d1 < 6))
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d1);
else if (d1 >= 6)
printf("Last digit of %d is %d and is greater than 5\n", n, d1);
else if (d1 < 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d1);
else
printf("Last digit of %d is %d and is 0\n", n, d1);
/* your code goes there */
return (0);
}
