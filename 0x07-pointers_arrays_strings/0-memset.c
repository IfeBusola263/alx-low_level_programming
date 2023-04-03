#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: address of memory to print
 * @b: character to be copied to memory
 * @n: size of memory to print
 *
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
		i++;

	for (j = 0; j < n; j++)
		s[i] = b;

	return (s);
}
