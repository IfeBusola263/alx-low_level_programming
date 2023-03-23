#include "main.h"

/**
 * _isdigit - This is the entry point
 *
 * @c: This is the formal parameter
 *
 * Return: returns 1 if true and 0 if other wise
 */

int _isdigit(int c)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
