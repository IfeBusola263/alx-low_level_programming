#include "main.h"

/**
 * puts2 - prints every other character starting witthe first
 * @str: pointer to str
 *
 * Return: returns nothing
 */

void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
