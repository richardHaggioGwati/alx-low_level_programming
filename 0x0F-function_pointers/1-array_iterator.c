#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with a call to malloc
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the new memory block
 * Return: Pointer to the reallocated memory block
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    for (i = 0; i < size; i++)
    {
        (*action)(array[i]);
    }
}