#include "main.h"
/**
 * clear_bit - sets bit at given index to 0
 * @n: pointer to the value
 * @index: index where switch happens.
 *
 * Return: on success returns 1 else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_check;

	if (n == NULL)
		return (-1);

	if (index > (sizeof(int) * 8))
		return (-1);

	if (*n == 0)
	{
		*n = *n & 1;
		return (1);
	}
	else
	{
		/* check if bit is 1 or 0 */
		/* if it's zero no need to switch */
		bit_check = (*n >> index) & 1;
		if (bit_check == 1)
		{
			*n = *n ^ (1 << index);
		}
	}
	return (1);
}
