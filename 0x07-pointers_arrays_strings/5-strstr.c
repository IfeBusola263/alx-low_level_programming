#include "main.h"

/**
 * _strstr - Locates substring
 * @haystack: pointer to the string
 * @needle: character to be checked
 *
 * Return: Returns ptr to byte starting of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int itr;

	itr = 0;
	while (needle[itr] != '\0')
	{
		if (needle[itr] == haystack[itr])
			return (haystack + itr);
		itr++;
	}
	return ('\0');
}
