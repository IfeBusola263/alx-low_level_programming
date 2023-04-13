#include <stdlib.h>

/**
 * main - get mutiplication of two numbers
 * @argc: counts number of argument
 * @argv: takes argument
 *
 * Return: returns multiplication of both numbers
 */

int main(int argc, char *argv[])
{
	int i, mul;
	char *stop;

	mul = 1;

	if (argc < 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		strtol(argv[i], &stop, 10);
		if (*stop)
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			exit(98);
		}
		else
		{
			mul = mul * atoi(argv[i]);
		}
	}

	return (mul);
}
