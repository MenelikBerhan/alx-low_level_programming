#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory space occupied by a 2d array 'grid'.
 * @grid: A 2d array located at the memory to be freed.
 * @height: Height of the 2d array 'grid'.
 *
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);

}
