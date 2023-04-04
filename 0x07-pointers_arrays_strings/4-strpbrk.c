#include "main.h"

/**
 * _strpbrk - Locates a character in a string
 * @s: pointer to the string
 * @accept: character to be checked
 *
 * Return: Returns ptr to byte in s matching accept/ NULL if none
 */

char *_strpbrk(char *s, char *accept)
{
	int itr;

	itr = 0;
	while (s[itr] != '\0')
	{
		if (s[itr] == accept[itr])
			return (s + itr - 1);
		itr++;
	}
	return ('\0');
}
