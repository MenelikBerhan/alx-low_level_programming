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

/**
 * exponential_search - searches for a value in a sorted array of integers
 *						using the Exponential search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: size of the array of integers.
 * @value: value to search for.
 *
 * Return: the first index where value is located or -1 if value is not found.
 *		   Prints each comparison of array element with 'value'.
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i, low, high;
	int index;

	if (!array || size == 0)
		return (-1);

	for (i = 1; i < size; i *= 2)
	{
		if (i >= size || array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	high = i < size ? i : size - 1;
	low = i / 2;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	index = binary_search(array + low, high - low + 1, value);
	return (index != -1 ? index + (int)low : index);
}
