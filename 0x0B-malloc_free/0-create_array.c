#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array with initialization
 * @size: size of the array
 * @c: characters in array
 *
 * Return: returns a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	/* pointer to return */
	char *p;
	/* iteration variable */
	unsigned int i;


	/* check for size */
	if (size == 0)
	{
		return (NULL);
	}

	/* memory allocation for c */
	p = malloc(size);

	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';

	return (p);
}

