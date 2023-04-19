#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - performs certain function
 * @array: variable holding a pointer to an array
 * @size: size of the array
 * @action: function pointer to function to be executed
 *
 * Return: returns nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* array iterator */
	size_t i;

	for (i = 0; i < size; i++)
		action(*(array + i));
}
