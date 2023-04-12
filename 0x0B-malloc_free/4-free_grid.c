#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional array
 * @grid: pointer to a pointer to a 2-d array
 * @height: column of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	/* grid is a pointer to a 2-d array */
	for (i = 0; i < height; i++)
	{
		/* free individial elements of each row */
		free(grid[i]);
	}
	/* free the pointer to the coloumns */
	free(grid);
}
