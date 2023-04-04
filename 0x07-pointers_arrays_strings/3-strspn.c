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
	int j;
	unsigned int count = 0;
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
			}
			j++;
		}
		i++;
	}

	return (count);
}
