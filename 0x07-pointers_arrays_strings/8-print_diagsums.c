#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the two diagonal sums of a square matrix.
 * @a: A pointer to a matrix of integers.
 * @size: The size of square matrix a.
 *
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += *(a + (i * size) + j);

			if (i + j == size - 1)
				sum2 += *(a + (i * size) + j);
		}
	}

	printf("%d, %d\n", sum1, sum2);
}
