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
	int itr1;

	itr = 0;
	while (needle[itr] != '\0')
	{
		itr1 = 0;
		while (haystack[itr1] != '\0')
		{
			if (needle[itr] == haystack[itr1])
			return (haystack + itr1);
			itr1++;
		}
		itr++;
	}
	return ('\0');
}
