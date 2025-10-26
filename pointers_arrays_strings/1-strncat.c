#include "main.h"
/**
* _strncat - concatenates two strings using at most n bytes from src
* @dest: the destination string
* @src: the source string to append
* @n: maximum number of bytes to use from src
* Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
