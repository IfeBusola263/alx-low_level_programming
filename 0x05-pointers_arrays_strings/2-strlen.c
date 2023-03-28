#include "main.h"

/**
 * _strlen - gets lenght of a string
 * @s: pointer to string
 *
 * Return: returns int
 */

int _strlen(char *s)
{
	int c;
	int check = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		check++;
	}
	return (check);
}
