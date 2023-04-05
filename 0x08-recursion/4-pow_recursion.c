#include "main.h"
/**
 * _pow_recursion - prints exponential value of x
 * @x: operand to be raised
 * @y: power of x
 *
 * Return: returns an integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 1)
		return (1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
