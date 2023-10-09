#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *	using the Interpolation search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: size of the array of integers.
 * @value: value to search for.
 *
 * Return: the first index where value is located or -1 if value is not found.
 *	Prints each comparison of array element with 'value'.
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (!array || size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high && high < size)
	{
		/* to handle cases where array[low] > value. */
		/* another option is to add array[low] <= value in while condition */
		if (array[low] > value) /* not in while condition to print comparison*/
		{
			printf("Value checked array[%lu] = [%d]\n", low, array[low]);
			break;
		}
		/* another option: low < high. Not in while to print comparison */
		if (low == high) /* to mitigate UNSIGNED_LONG_MAX result  for pos */
			pos = low;
		else
			pos = low + (((double)(high - low) / (array[high] - array[low]))
								* (value - array[low]));
		if (pos < size)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
				return (pos);
			else if (array[pos] > value)
				high = pos - 1;
			else
				low = pos + 1;
		}
		else /* handles cases where array[high] < value */
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
	}
	return (-1);
}
