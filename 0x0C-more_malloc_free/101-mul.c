#include <stdlib.h>
#include <stdio.h>
/**
 * print_error - prints error to stdot
 *
 * Return: returns nothing
 */
void print_error(void)
{
	char error[] = "Error";
	int i;

	for (i = 0; error[i] != '\0'; i++)
		putchar(error[i]);
}

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
	char *stop;

	mul = 1;

	if (argc < 3)
	{
		print_error();
		putchar('\n');
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		result = strtol(argv[i], &stop, 10);
		if (*stop)
		{
			print_error();
			putchar('\n');
			exit(98);
		}

		mul = mul * result;
	}

	printf("%ld\n", mul);

	return (0);
}
