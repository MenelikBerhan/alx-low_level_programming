#include "search_algos.h"

/**
 * binary_search_recursion - searches for a value in a sorted array of integers
 *							 using the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @value: value to search for.
 * @size: size of the array of integers.
 * @low: start index of search partition.
 * @high: end index of search partition.
 *
 * Return: the first index where value is located or -1 if value is not found.
 *		   Prints the array being searched every time it changes.
*/
int binary_search_recursion(int *array, int value, size_t size,
													size_t low, size_t high)
{
	size_t i, mid;

	if (low > high || high >= size)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%d%s", array[i], i != high ? ", " : "\n");
	mid = (low + high) / 2;
	printf("array[mid=%lu] = %d\n", mid, array[mid]);
	if (array[mid] == value && (mid == low || array[mid - 1] != value))
		return (mid);

	low = array[mid] < value ? mid + 1 : low;
	high = array[mid] == value ? mid : (array[mid] > value ? mid - 1 : high);
	return (binary_search_recursion(array, value, size, low, high));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 *					 using the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: size of the array of integers.
 * @value: value to search for.
 *
 * Return: the first index where value is located or -1 if value is not found.
 *		   Prints the array being searched every time it changes.
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (binary_search_recursion(array, value, size, 0, ((int)size) - 1));

}
