#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with a call to malloc
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the new memory block
 * Return: Pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
return (new_ptr);
}
if (new_size == old_size)
{
return (ptr);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (ptr);
}
if (new_size > old_size)
{
memcpy(new_ptr, ptr, old_size);
}
else
{
memcpy(new_ptr, ptr, new_size);
}
free(ptr);
return (new_ptr);
}
