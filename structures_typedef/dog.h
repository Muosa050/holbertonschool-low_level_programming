#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure defining a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: Structure that stores information about a dog:
 * its name, age, and owner.
 */
struct dog
{
char *name;
char *owner;
float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
