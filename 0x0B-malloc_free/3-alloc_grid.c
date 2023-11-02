#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: The number of columns in the grid.
 * @height: The number of rows in the grid.
 * Description: Returns a pointer to a 2 dimensional array of integers.
 * Return: A pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* request enough memory for rows */
	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	/* allocate enough memory for an array of ints in each row */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		/* free memory if a fault occurred */
		if (grid[i] == NULL)
		{
			/* Free up all previously allocated memory in case of an error */
			for (j = 0; j < i; j++)
				free(grid[j]);

			/* free memory for the whole grid */
			free(grid);
			return (NULL);
		}
	}

	/* Initialize every element to 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
