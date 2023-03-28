#include "main.h"

/**
 * puts_half - Prints half of a string followed by a new line.
 * @str: pointer to str
 *
 * Return: returns nothing
 */

void puts_half(char *str)
{
	int c = 0;
	int s;
	int n;
	int rm;

	while (str[c] != '\0')
		c++;

	rm = c - 1;
	n = rm / 2;

	s = n;
	while (s <= rm)
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');

}
