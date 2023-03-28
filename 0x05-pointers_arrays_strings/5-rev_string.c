#include "main.h"

/**
 * rev_string- reverses a string.
 * @s: point to the string
 *
 * Return: returns nothing
 */

void rev_string(char *s)
{
	int c;
	int check = 0;
	int i;
	char p;

	for (c = 0; s[c] != '\0'; c++)
	{
		check++;
	}

	for (i = 0; i < check / 2 ; i++)
	{
		p = s[i];
		s[i] = s[(check - 1) - i];
		s[(check - 1) - i] = p;
	}
}
