#ifndef HEADER_H
#define HEADER_H

/**
 * struct dog - structure that defines the shape of a dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
extern typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
extern void init_dog(struct dog *d, char *name, float age, char *owner);
extern void print_dog(struct dog *d);

#endif
