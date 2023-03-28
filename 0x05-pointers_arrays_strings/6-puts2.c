#include "main.h"

/**
 * puts2 - prints every other character starting with the first
 * @str: pointer to str
 *
 * Return: returns nothing
 */

void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
		c++;
	}
	_putchar('\n');
}
