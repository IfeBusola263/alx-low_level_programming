#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: pointer to the string
 * @c: character to be checked
 *
 * Return: Returns ptr to first occurrence of c in s/ NULL if c is not found.
 */

char *_strchr(char *s, char c)
{
	int itr;

	itr = 0;
	while (s[itr] != '\0')
	{
		if (s[itr] == c)
			return (s + itr);
		itr++;
	}

	if (c == '\0')
		return (s + (itr + 1));
	return (s);
}
