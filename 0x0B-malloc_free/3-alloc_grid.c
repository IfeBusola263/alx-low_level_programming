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

	p = malloc(height * sizeof(int *));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			while (i-- > 0)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;

	return (p);
}
