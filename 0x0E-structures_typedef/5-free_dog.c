#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the allocated memory
 * @d: pointer to the new dog
 *
 * Return; nothing
 */

void free_dog(dog_t *d)
{
	free(d);
}
