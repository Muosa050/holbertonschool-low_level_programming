#include "main.h"

/**
* wildcmp - compares two strings, allowing * in s2 to match any string
* @s1: first string
* @s2: second string (can contain *)
* Return: 1 if identical, 0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
if (*s2 == '\0' && *s1 == '\0')
return (1);
if (*s2 == '*')
{
if (wildcmp(s1, s2 + 1))
return (1);
if (*s1 && wildcmp(s1 + 1, s2))
return (1);
}
if (*s1 == *s2 && *s1 != '\0')
return (wildcmp(s1 + 1, s2 + 1));
return (0);
}
