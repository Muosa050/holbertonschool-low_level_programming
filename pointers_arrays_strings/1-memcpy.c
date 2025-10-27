#include "main.h"
/**
*_memcpy - function to copy buffer into another
*
*@dest: location to copy in
*@src: data copied
*@n: number of copied elements
*
*Return: destanation
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}
return (dest);
}
