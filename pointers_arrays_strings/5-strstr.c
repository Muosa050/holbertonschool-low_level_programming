#include "main.h"

/**
*_strstr - function give that word matched in statment
*
*@haystack: contain statment
*@needle: contain the word
*
*Return: matched word
*/

char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0 ; haystack[i] != '\0' ; i++)
{
for (j = 0 ; needle[j] != '\0' ; j++)
{
if (haystack[i + j] != needle[j])
break;
return (&haystack[i]);
}
}
return (0);
}
