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
	/* length of dest string*/
	int l;
	/*length of src string*/
	int k;
	/*iterator*/
	int i;

	l = 0;
	while (dest[l] != '\0')
		l++;

	k = 0;
	while (src[k] != '\0')
		k++;

	i = 0;
	while (i <= k)
	{
		dest[l + i] = src[i];
		i++;
	}

	return (dest);

}
