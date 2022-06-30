#include "main.h"

/**
 * _realloc - allocate memory and set all values to 0
 * @ptr: pointer to the memory previously allocated (malloc(old_size))
 * @old_size: size previously allocated
 * @new_size: new size to reallocate
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
