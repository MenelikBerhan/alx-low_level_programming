#include "main.h"

/**
 * swap_int - swaps values of two integer pointers.
 * @a : First operand.
 * @b : Second operand.
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
