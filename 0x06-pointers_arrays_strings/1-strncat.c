#include "main.h"

/**
 * _strncat - concatenates two strings with certain bytes
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes allowed by src in dest
 *
 * Return: a pointer to the dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_sr;
	int len_dest;
	/* Iterator */
	int i;

	len_sr = 0;
	while (src[len_sr] != '\0')
		len_sr++;

	len_dest = 0;
	while (dest[len_dest] != '\0')
		len_dest++;

	i = 0;
	while (i < n)
	{
		dest[len_dest + i] = src[i];
		i++;
	}

	return (dest);
}
