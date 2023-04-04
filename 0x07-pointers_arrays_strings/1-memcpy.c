#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory address to be copied to
 * @src: source array being copied from
 * @n: number of bytes to be copied
 *
 * Return: returns a pointer to destination array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
