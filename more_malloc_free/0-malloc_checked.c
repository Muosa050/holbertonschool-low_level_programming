#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - recieving memory spaces
*
*@b: number of locations i want
*
*Return: pointer for the address or null in fail
*/

void *malloc_checked(unsigned int b)
{
void *i;


i = malloc(b);
if (i == NULL)
exit(98);

return (i);
}
