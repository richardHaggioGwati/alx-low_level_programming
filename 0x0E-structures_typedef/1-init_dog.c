#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - initialize the dog structure
 * @d: address of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: the initalized structure of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = malloc(strlen(name) + 1);
d->owner = malloc(strlen(owner) + 1);
strcpy(d->name, name);
strcpy(d->owner, owner);
d->age = age;
}
