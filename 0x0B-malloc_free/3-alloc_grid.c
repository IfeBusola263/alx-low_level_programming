#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - takes row and column of matrix
 * @width: column value
 * @height: row value
 *
 * Return: returns pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int i, j, **p; /* **p is pointer to be returned */

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(width * sizeof(int *));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		p[i] = malloc(height * sizeof(int));
		if (p[i] == NULL)
		{
			break;
			free(p[i]);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			p[i][j] = 0;

	return (p);
}
