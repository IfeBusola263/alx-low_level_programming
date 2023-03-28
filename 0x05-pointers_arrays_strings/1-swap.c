#include "main.h"

/**
 * swap_int - swaps values
 * @a: pointer
 * @b: point
 *
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

