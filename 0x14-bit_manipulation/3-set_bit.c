#include "main.h"
/**
 * set_bit - sets the value of a bit at nth inex
 * @n: pointer to an int.
 * @index: index to carry out change.
 *
 * Return: returns an integar
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int pow = 1, i;

	if (n == NULL || index > (sizeof(int) * 8))
		return (-1);

	if (index == 0)
	{
		*n = *n | 1;
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

		*n = *n | pow;
	}
	return (1);
}
