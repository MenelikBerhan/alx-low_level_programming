#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array separated by comma and space.
 *				And also a new line at the end.
 * @a: The array to be printed.
 * @n: The number of elements to print.
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
