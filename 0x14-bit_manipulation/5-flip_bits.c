#include "main.h"
/**
 * flip_bits - returns the number of bit to get to another number
 * @n: source interger
 * @m: destination integer
 *
 * Return: returns the number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int flip;

	flip = m ^ n;

	while (flip)
	{
		if (flip & 1)
			count++;

		flip = flip >> 1;
	}
	return (count);
}
