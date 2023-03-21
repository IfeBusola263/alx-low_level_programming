#include "main.h"

/**
 * _isalpha - this is the entry point
 *
 * @c: This is the formal argument
 *
 * Return: returns 1 if true, zero there wise
 */

int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))

		return (1);
	else
		return (0);

}
