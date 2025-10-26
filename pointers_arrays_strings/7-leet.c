#include "main.h"
/**
* leet - encodes a string into 1337
* @s: input string
* Return: pointer to the string
*/
char *leet(char *s)
{
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";
int i = 0, j;
while (s[i] != '\0')
{
j = 0;
while (letters[j] != '\0')
{
if (s[i] == letters[j])
{
s[i] = numbers[j];
break;
}
j++;
}
i++;
}
return (s);
}
