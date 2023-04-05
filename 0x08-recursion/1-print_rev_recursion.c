#include "main.h"

/**
 * _print_rev_recursion - returns string in reverse
 * @s: string to be outputed
 *
 * Return: returns a string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
