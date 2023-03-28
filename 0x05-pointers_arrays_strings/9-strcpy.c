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

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

