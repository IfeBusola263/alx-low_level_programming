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
	int n;

	while (str[c] != '\0')
		c++;

	n = c / 2;

	if ((c % 2) == 1)
		n =((c + 1) / 2);

	while (n <= (c - 1))
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');

}
