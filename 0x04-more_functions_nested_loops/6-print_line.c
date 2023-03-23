#include "main.h"

/**
 * print_line - This is the entry point
 * @n: format argument
 *
 * Return: returns nothing
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i <= n)
	{
		if (n > 0)
		{
			putchar('_');
		}
		i++;
	}
	putchar('\n');
}

