#include "main.h"

/**
 * print_square - This is the entry point
 *
 * @size: formal parameter
 *
 * Return: returns void
 */

void print_square(int size)
{
	int i, j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			putchar('#');
			j++;
		}
		i++;
		putchar('\n');
	}
	putchar('\n')
}
