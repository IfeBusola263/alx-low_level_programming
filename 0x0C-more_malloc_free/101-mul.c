#include <stdlib.h>
#include <stdio.h>

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
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		strtol(argv[i], &stop, 10);
		if (*stop)
		{
			putchar('E');
			putchar('r');
			putchar('r');
			putchar('o');
			putchar('r');
			putchar('\n');
			exit(98);
		}
		else
		{
			mul = mul * atoi(argv[i]);
		}
	}

	return (mul);
}
