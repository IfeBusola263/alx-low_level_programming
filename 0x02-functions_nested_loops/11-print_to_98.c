#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - This is the entry point
 * @n: The formal parameter
 *
 * Return: returns void
 */

void print_to_98(int n)
{
	int o;

	if ((n >= 0) && (n <= 98))
	{
		for (o = n; o <= 98; o++)
		{
			printf("%d, ", o);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (o = n; o <= 98; o++)
		{
			printf("%d, ", o);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (o = n; o >= 98; o--)
		{
			printf("%d, ", o);
		}
		printf("\n");
	}
	else
	{
		printf("%d, ", n);
	}
}
