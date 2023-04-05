#include "main.h"

/**
 * _puts_recursion - returns address of a string
 * @s: string to be outputed
 *
 * Return: returns a string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
