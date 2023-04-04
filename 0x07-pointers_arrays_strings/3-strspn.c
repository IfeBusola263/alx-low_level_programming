#include "main.h"

/**
 * _strspn - Finds length of a substring
 * @s: pointer to string
 * @accept: substring to be checked
 *
 * Return: returns the number of byte that are the same
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;
	unsigned int count = 0;

	i = 0;
	while (accept[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		for (k = 0; k < i; k++)
		{
			if (s[j] == accept[k])
			{
				count++;
				break;
			}
		}
		break;
	}

	return (count);
}
