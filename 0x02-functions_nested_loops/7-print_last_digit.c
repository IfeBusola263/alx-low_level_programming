#include "main.h"

/**
 * print_last_digit - This is the entry point
 *
 * @l: This is the formal parameter
 *
 * Return: returns an int
 */

int print_last_digit(int l)
{
	int last;

	last = l % 10;
	if (last < 0)
		last = last * (-1);
	_putchar(last + '0');

	return (last);
}
