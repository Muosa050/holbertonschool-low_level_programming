#include "main.h"

/**
*_strspn - give the number of letters that are existing in accept
*
*@s: the statment to see first word from
*@accept: the letters accepted to be counted
*
*Return: the number
*/

unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j = 0;
while (accept[i] != '\0')
{
i++;
}
while (s[j] != '\0' && s[j] != ',' && s[j] != ' ')
{
j++;
}
int y, x;
int count = 0;
for (y = 0 ; y <= i ; y++)
{
for (x = 0 ; x <= j ; x++)
{
if (s[x] == accept[y])
count ++;
else
continue;
}
}
return (count);
}

