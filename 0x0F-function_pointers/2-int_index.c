#include "function_pointers.h"

/**
 * int_index - finds the first element of array array of size size
 * for which the function pointed by cmp does not return zero.
 * @array: The array with elements to excute the function on.
 * @size: The size of the array.
 * @cmp: A function pointer.
 *
 * Return: The index of the first element for which the cmp function does not
 * return 0 (Success), -1 if no elements match or if size <= 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (!array || !cmp)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
