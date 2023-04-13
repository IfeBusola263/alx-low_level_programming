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
	int i;
	long mul;
	long result;

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
		result = strtol(argv[i], NULL, 10);
		if (result == 0)
		{
			putchar('E');
			putchar('r');
			putchar('r');
			putchar('o');
			putchar('r');
			putchar('\n');
			exit(98);
		}
		mul = mul * result;

	}

	printf("%ld\n", mul);

	return (0);
}
