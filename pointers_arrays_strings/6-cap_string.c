#include "main.h"
/**
* cap_string - capitalizes all words of a string
* @s: input string
* Return: pointer to the string
*/
char *cap_string(char *s)
{
int i = 0, j;
char sep[] = " \t\n,;.!?\"(){}";
while (s[i] != '\0')
{
if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
j = 0;
while (sep[j] != '\0')
{
if (s[i] == sep[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] -= 32;
break;
}
j++;
}
i++;
}
return (s);
}
