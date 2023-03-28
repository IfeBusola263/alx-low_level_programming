#include "main.h"

/**
 * _puts - prints to standard output with newline
 * @str: point to the string
 *
 * Return: returns nothing
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
