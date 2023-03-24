#include "main.h"

/**
 * print_line - This is the entry point
 * @n: format argument
 *
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		putchar('\\');
		putchar('\n');
	}
	putchar('\n');
}

