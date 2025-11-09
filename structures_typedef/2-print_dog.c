#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to print
 *
 * Description: Prints the name, age, and owner of the dog.
 * If an element is NULL, prints (nil) instead.
 * If d is NULL, nothing is printed.
 */

void print_dog(struct dog *d)
{
if (d == NULL)
printf("nil\n");

if (d->name == NULL)
{
printf("Name: nil\n");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
