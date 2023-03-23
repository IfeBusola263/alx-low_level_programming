#include "main.h"

/**
 * _isupper - This is the entry point
 *
 * @c: This is the argument of entry point
 *
 * Return: returns zero always
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}

