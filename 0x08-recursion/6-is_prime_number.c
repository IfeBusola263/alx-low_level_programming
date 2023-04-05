#include "main.h"

/**
 * is_prime_number - returns 1 or 0 if prime number or not
 * @n: number to be checked
 *
 * Return: returns an int
 */

int is_prime_number(int n)
{
	if (n == 1 || n < 1)
		return (0);
	if (n % 2 == 0)
		return (0);
	if (n % 3 == 0)
		return (0);
	if (n % 5 == 0)
		return (0);
	return (1);
}
