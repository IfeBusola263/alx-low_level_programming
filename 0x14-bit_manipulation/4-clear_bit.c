#include "main.h"
/**
 * clear_bit - sets bit at given index to 0
 * @n: pointer to the value
 * @index: index where switch happens.
 *
 * Return: returns an int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int pow = 1, i;

	if (n == NULL)
		return (-1);

	if (index == 0 || *n == 0)
	{
		*n = *n & 1;
		return (1);
	}
	else
	{
		i = 0;
		while (i < index)
		{
			pow = pow * 2;
			i++;
		}

		*n = *n ^ pow;
	}
	return (1);
}
