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

	while (str[c] != '\0')
		c++;

	n = c / 2;

	s = n;
	while (s <= c)
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');

}
