#include "main.h"

/**
 * more_numbers - This is the entry point
 *
 * Return: returns void
 */

void more_numbers(void)
{
	int i = 0, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				putchar('1');
				putchar(j % 10 + '0');
			}
		}
		putchar('\n');
	}
}
