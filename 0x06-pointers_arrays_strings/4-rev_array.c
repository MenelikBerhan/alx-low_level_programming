#include "main.h"
/**
 * reverse_array - reverses the contents of an integer array.
 * @a: an integer array to be reversed.
 * @n: the number of elements in array a.
 *
 */

void reverse_array(int *a, int n)
{
	int i, temp1;

	for (i = 0; i < n / 2; i++)
	{
		temp1 = *(a + n - 1 - i);

		*(a + (n - 1 - i)) = *(a + i);
		*(a + i) = temp1;
	}
}
