#ifndef HEADER_H
#define HEADER_H

/**
 * dog - structure that defines the shape of a dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
extern struct dog
{
char *name;
float age;
char *owner;
} dog_t;
extern void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
