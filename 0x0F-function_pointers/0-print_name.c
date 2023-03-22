#include "function_pointers.h"
#include <stdio.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with a call to malloc
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the new memory block
 * Return: Pointer to the reallocated memory block
 */
void print_name(char *name, void (*f)(char *))
{
    (*f)(name);
}

void print_with_greeting(char *name)
{
    printf("Hello, my name is %s!\n", name);
}
