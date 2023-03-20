#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the name of the dog
 * @d: address of the dog
 * Return: print the dog
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
printf("(nil)\n");
return;
}
printf("Name: ");
if (d->name == NULL)
{
printf("(nil)\n");
}
else
{
printf("%s\n", d->name);
}
printf("Age: %f\n", d->age);
printf("Owner: ");
if (d->owner == NULL)
{
printf("(nil)\n");
}
else
{
printf("%s\n", d->owner);
}
}
