#include "main.h"
/**
 * _strncpy - Copies string from source to destination
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: size available in destination array
 *
 * Return: pointer to the first char in dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len_dest;
	int len_src;

	len_dest = 0;
	while (dest[len_dest] != '\0')
		len_dest++;

	len_src = 0;
	while (len_src < n && src[len_src] != '\0')
	{
		dest[len_src] = src[len_src];
		len_src++;
	}

	return (dest);
}
