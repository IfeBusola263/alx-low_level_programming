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
	while (n < 99)
	{
		if (n != 98)
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		if (n != 98)
		printf("%d, ", n);
		n--;
	}
}
