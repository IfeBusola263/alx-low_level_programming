#include "variadic_functions.h"
#include <stdlib.h>
/**
 * sum_them_all - Add up optional argument
 * @n: number of arguments expected
 *
 * Return: returns an integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int j, sum;
	/* initializing pointer variable */
	va_list ops;

	if (n == 0)
		return (0);


	va_start(ops, n);

	sum = 0;

	/* sequential call to access */
	/* and perform operation on optional arguments */
	for (i = 0; i < n; i++)
	{
		j = va_arg(ops, int);
		sum += j;
	}

	return (sum);
}
