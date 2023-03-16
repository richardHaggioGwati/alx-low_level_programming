#include <stdlib.h>
#include <string.h>

/**
 * Allocates memory for an array of nmemb elements of size bytes each, and returns
 * a pointer to the allocated memory. The memory is set to zero.
 *
 * @param nmemb The number of elements in the array.
 * @param size  The size of each element in bytes.
 * @return      A pointer to the allocated memory, or NULL if nmemb or size is 0,
 *              or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *result = malloc(nmemb * size);

if (nmemb == 0 || size == 0)
{
return (NULL);
}
if (result == NULL)
{
return (NULL);
}
memset(result, 0, nmemb * size);
return (result);
}