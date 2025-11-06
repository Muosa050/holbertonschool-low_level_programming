#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - recieving block in memory for two strings
*
*@s1: first string all alphabet get byte in the memory
*@s2: second string just n alphabet will be recieved
*@n: actual alphabet i will accept
*
*Return: NULL if it fail , allocated space in the memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int x = 0, j, i, c1 = 0;
char *str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[c1] != '\0')
{
c1++;
}
while (s2[x] != '\0')
{
x++;
}
if (n >= x)
n = x;
str = malloc(sizeof(char) * (c1 + n + 1));
if (str == NULL)
return (NULL);
for (i = 0 ; i < c1 ; i++)
str[i] = s1[i];
for (j = 0 ; j < n ; j++)
str[j + i] = s2[j];


str[i + j] = '\0';
return (str);
}

