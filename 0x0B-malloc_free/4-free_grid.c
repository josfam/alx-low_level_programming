#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created by the
 * alloc_grid function.
 * @grid: The 2 dimensional grid to free.
 * @height: The height (number of rows in this 2D grid).
 * Description: Frees a 2 dimensional grid previously created by the
 * alloc_grid function.
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	/* free all pointers for each row */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	/* free the rows themselves */
	free(grid);
}
