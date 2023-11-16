#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid
 * @grid: The grid to be freed
 * @height: The height (number of rows) of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	/* Free memory for each row in the grid */
	for (i = 0; i < height; i++)
{
		free(grid[i]);
	}

	/* Free memory for the array of int pointers */
	free(grid);
}
