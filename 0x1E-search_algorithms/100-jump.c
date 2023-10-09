#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 *				 using the Jump search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: size of the array of integers.
 * @value: value to search for.
 *
 * Return: the first index where value is located or -1 if value is not found.
 *		   Prints each comparison of array element with 'value'.
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, start, end;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);
	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	start = i != 0 ? i - jump : 0;
	end = i;
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
