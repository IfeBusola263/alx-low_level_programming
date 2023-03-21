#include "main.h"

/**
 * print_alphabet_x10 - This is the entry point
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int c;
	int i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
