#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates the memory block of size old_size pointed by ptr to
 * a new block of size new_size. The contents of the pointer from that pointed
 * by ptr up to the minimum of old and new sizes.
 * @ptr: A pointer to the old memory block.
 * @old_size: Previous size of allocated space.
 * @new_size: New size of allocated space.
 *
 * Return: A pointer to a new memory block of size new_size,
 * ptr if new_size == old_size or NULL if new_size = 0 or failure.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		arr[i] = ((char *) ptr)[i];

	free(ptr);
	return (arr);
}
