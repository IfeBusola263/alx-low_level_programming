#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: pointer to destination object
 * @src: pointer to source object
 *
 * Return: returns a string of characters
 */

char *_strcat(char *dest, char *src)
{
	int l;
	int k;

	l = 0;
	while (dest[l] != '\0')
		l++;

	k = 0;
	while (src[k] != '\0')
		k++;

	*dest = *(dest + (l - 1)) + *(src);

	return (dest);

}
