#include "main.h"

/**
 * print_alphabet - This is the entry point
 *
 * Return: void
 */

void print_alphabet(void)
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
