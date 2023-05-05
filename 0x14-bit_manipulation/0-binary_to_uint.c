#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of characters
 *
 * Return: an unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i, pow = 1;
	unsigned long int res, ret, remd;

	ret = 0;
	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] > 49 || b[i] < 48)
			return (0);
	}

	res = atol(b);
	while (res != 0)
	{
		remd = res % 10;
		ret = ret + remd * pow;
		res = res / 10;
		pow = pow * 2;
	}
	return (ret);
}
