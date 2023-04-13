#include "main.h"
#include "stdlib.h"

/**
 * array_range - creates an array of integers
 * @min: mininum value
 * @max: maximum value
 *
 * Return: returns a pointer to an array
 */

int *array_range(int min, int max)
{
	int i;
	int *p;
	int total_bytes;

	total_bytes = max - min + 1;

	if (min > max || total_bytes <= 0)
		return (NULL);

	p = malloc(sizeof(int) * total_bytes);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < total_bytes; i++)
	{
		p[i] = min  + i;
	}

	return (p);
}

