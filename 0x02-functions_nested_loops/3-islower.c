#include "main.h"

/**
 * _islower - is the point of entry
 *
 * @c: formal parameter
 *
 * Return: 1 if lower case, else 0
 */

int _islower(int c)
{

	if ((c >= 97) && (c <= 122))

		return (1);

	else
		return (0);
}
