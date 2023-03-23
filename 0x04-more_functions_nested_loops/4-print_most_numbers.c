#include "main.h"

/**
 * print_most_numbers - This is the function name
 *
 * Return: returns void
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 || i != 4)
		{	
			putchar (i + '0');
		}
		i++;
	}
	putchar('\n');
}
