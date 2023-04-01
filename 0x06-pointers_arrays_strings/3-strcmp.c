#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to string
 * @s2: pointer to second string
 *
 * Return: returns an Int
 */

int _strcmp(char *s1, char *s2)
{
	int cmp;

	cmp = 0;
	while (s1[cmp] != '\0' && s2[cmp] != '\0')
	{
		if (s1[cmp] != s2[cmp])
		{
			return (s1[cmp] - s2[cmp]);
		}
		cmp++;
	}
	return (0);
}

