#include "function_pointers.h"

/**
 * array_iterator - executes the function pointed by action on every
 * element of array.
 * @array: The array with elements to excute the function on.
 * @size: The size of the array.
 * @action: A function pointer.
 *
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array)
		exit(1);

	for (; i < size; i++)
		action(array[i]);
}
