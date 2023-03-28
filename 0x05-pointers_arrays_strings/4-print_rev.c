#include "main.h"
#include <stdio.h>

/**
 * print_rev- prints to standard output with newline
 * @s: point to the string
 *
 * Return: returns nothing
 */

void print_rev(char *s)
{
	int c;
	int check = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		check++;
	}
	printf("%d\n", check);

	for (--check; c > 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
