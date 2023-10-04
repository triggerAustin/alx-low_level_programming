#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees memory allocated to a grid
 * @grid: 2D array to be freed
 * @height: number of columns
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j <height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
