#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int ret;

	if (n == 0 || n == 1)
	{
		_putchar(48 + n);
		return;
	}
	else
	{
		ret = n & 1;
		n = n >> 1;
		print_binary(n);
		_putchar(48 + ret);
	}
}
