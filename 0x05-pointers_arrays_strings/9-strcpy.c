#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string pointed by source to destination
 * @dest: destination buffer or array
 * @src: Source pointer
 *
 * Return: string of characters with the Null byte
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[j] = '\0';
	return (dest);
}

