#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of mumbers to the array
 * @size: size of type memory is bring allocated for
 *
 * Return: returns a pointer to the new array in memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int  *p; /* pointer to return */
	unsigned int i; /* iterator */

	/* Error handling for input for nmemb */
	if (nmemb == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*((char *)p + i) = 0;

	return (p);
}
