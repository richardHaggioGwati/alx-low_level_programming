#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: The minimum value to include in the array.
 * @max: The maximum value to include in the array.
 * Return:  A pointer to the newly created array
 */
int *array_range(int min, int max)
{
int num_elements, *result, i;

if (min > max)
{
return (NULL);
}
num_elements = max - min + 1;
result = malloc(num_elements * sizeof(int));
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < num_elements; i++)
{
result[i] = min + i;
}
return (result);
}