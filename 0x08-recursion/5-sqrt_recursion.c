#include "main.h"
/**
 * _sqrt_recursion - Prints square root
 * @n: operand to be squared
 *
 * Return: returns an integer
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (1);
	if (n < 1)
		return (-1);

	return (1 + _sqrt_recursion(n / 2));
}

