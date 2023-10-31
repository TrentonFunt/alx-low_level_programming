#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2-dimensional array of integers
 * @width: The width (number of columns) of the grid
 * @height: The height (number of rows) of the grid
 *
 * Return: On success, a pointer to the allocated 2D array.
 * Returns NULL if memory alloc fails or if width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the array of int pointers */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for each row and initialize to 0 */
	for (i = 0; i < height; i++)
{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
{
			/* Free previously allocated rows if memory allocation fails */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		/* Initialize each element to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
