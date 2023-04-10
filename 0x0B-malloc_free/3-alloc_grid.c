#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2d array of size width times height with each value
 * initialized with 0.
 * @width: Witdth of the array to be created.
 * @height: Height of the array to be created.
 *
 * Return: a pointer to 2d array or NULL if either width or height is less
 * than or equal to 0 or when failure occurs.
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int *row;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc((width * height) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		row = malloc(width * sizeof(int));
		if (row == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
		{
			row[j] = 0;
		}
		arr[i] = row;
	}

	return (arr);
}
