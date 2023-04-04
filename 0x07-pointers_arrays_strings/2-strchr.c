#include "main.h"
#include <stdio.h>
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
	while (s[itr])
	{
		if (s[itr] == c)
			return (s + itr - 1);
		itr++;
	}
	
	return (s + itr - 1);
}
