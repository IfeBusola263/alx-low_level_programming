#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory
 * @ptr: pointer to previous allocated memory
 * @old_size: size in bytes of ptr
 * @new_size: new byte in size of the new memory block
 *
 * Return: a pointer to new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
		free(ptr);

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);

		return (p);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		*((char *)ptr + i) = *((char *)p + i);

	free(ptr);
	return (p);
}
