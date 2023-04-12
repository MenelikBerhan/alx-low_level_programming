#include "main.h"
#include <stdlib.h>

/**
 * array_range - creaes an array of integers and fills it with integers
 * from min upt to max both inclusive.
 * @min: First operand.
 * @max: Second operand.
 *
 * Return: a pointer to an integer array (Success) or
 * NULL if min > max or failure (Failure).
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
