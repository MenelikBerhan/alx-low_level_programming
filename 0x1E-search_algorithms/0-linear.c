#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *				   using the Linear search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: size of the array of integers.
 * @value: value to search for.
 *
 * Return: the first index where value is located or -1 if value is not found.
 *		   Prints each comparison of array element with 'value'.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
