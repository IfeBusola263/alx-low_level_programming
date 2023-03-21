#include "main.h"


/**
 * main - This is the entry point
 *
 * Return: always zero
 */

int main(void)
{
	char a[8] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(a[c]);
	}

	_putchar('\n');

	return (0);
}
