#include "main.h"

/**
 * string_toupper - Changes lowercase str to uppercase str
 * @'': parameter type declaration
 *
 * Return: returns the mem address of the first achr of string
 */

char *string_toupper(char *a)
{
	int itr;

	itr = 0;
	while (a[itr] != '\0')
	{
		if (a[itr] >= 'a' && a[itr] <= 'z')
			a[itr] = a[itr] - 32;
		itr++;
	}
	return (a);
}

