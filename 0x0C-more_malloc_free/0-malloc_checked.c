#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory and returns 98
 * @b: size of the memory
 *
 * Return: returns 98 at exit.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	/* if malloc fails process terminates return 98 */
	if (p == NULL)
		exit(98);

	return (p);
}
