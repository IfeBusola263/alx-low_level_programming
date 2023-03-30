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

	len_dest = 0;
	while (dest[len_dest] != '\0')
		len_dest++;

	len_sr = 0;
	while (len_sr < n && src[len_sr] != '\0')
	{
		dest[len_dest] = src[len_sr];
		len_dest++;
		len_sr++;
	}
	
	return (dest);
}
