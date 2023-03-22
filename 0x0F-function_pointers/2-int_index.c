#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with a call to malloc
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the new memory block
 * Return: Pointer to the reallocated memory block
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (size <= 0)
    {
        return -1;
    }

    for (i = 0; i < size; i++)
    {
        if ((*cmp)(array[i]) != 0)
        {
            return i;
        }
    }

    return -1;
}