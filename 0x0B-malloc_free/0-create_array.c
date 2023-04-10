#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size 'size' and fills it with 'c'.
 * @size: The size of the array to be created.
 * @c: The character to fill the array.
 *
 * Return: an array of size 'size' filled with cahracter 'c'.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	if (size == 0 || arr == NULL)
		return (NULL);
	return (arr);
}
