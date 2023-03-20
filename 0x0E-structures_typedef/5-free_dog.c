#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dog stored in memory
 * @d: - pointer to the dog
 * Returns: void
*/
void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);
}
