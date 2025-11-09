#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
;
return (i);
}

/**
 * _strcpy - copies a string to another buffer
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';

return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog (dog_t), or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int name_len, owner_len;

if (name == NULL || owner == NULL)
return (NULL);

d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

name_len = _strlen(name);
owner_len = _strlen(owner);
d->name = malloc(sizeof(char) * (name_len + 1));
if (d->name == NULL)
{
free(d);
return (NULL);
}

d->owner = malloc(sizeof(char) * (owner_len + 1));
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}

_strcpy(d->name, name);
_strcpy(d->owner, owner);
d->age = age;

return (d);
}
