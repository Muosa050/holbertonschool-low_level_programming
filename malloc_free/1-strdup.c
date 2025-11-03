#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
 *         or if insufficient memory was available.
 */
char *_strdup(char *str)
{
char *duplicate;
int i, length = 0;

if (str == NULL)
return (NULL);

while (str[length] != '\0')
length++;

duplicate = malloc(sizeof(char) * (length + 1));
if (duplicate == NULL)
return (NULL);

for (i = 0; i <= length; i++)
duplicate[i] = str[i];

return (duplicate);
}
