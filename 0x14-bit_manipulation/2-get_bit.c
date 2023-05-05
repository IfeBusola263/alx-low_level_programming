#include "main.h"
/**
 * get_bit - gets bit at a certain index
 * @n: int to be converted to bit
 * @index: index of bit to be gotten
 *
 * Return: returns an integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 || n == 1)
		return (n);
	if (index > (sizeof(long int) * 8))
		return (-1);

	n = n >> index;
	i = n & 1;

	return (i);
}
