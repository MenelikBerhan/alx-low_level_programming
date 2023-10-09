#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *				   using the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: size of the array of integers.
 * @value: value to search for.
 *
 * Return: the index where value is located or -1 if value is not found.
 *		   The index might not be the first index if value is repeated in array
 *		   Prints the array being searched every time it changes.
*/
int binary_search(int *array, size_t size, int value)
{
	int i, low, mid, high;

	if (!array || size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%d%s", array[i], i != high ? ", " : "\n");
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
