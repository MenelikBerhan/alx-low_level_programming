#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements
 * of size bytes each.
 * @nmemb: Number of elements of the array.
 * @size: Size of each elements of the array.
 *
 * Return: a pointer to the newly allocated memory (Success) or
 * NULL if nmemb or size is 0 or if malloc fails (Failure).
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	return (arr);
}
