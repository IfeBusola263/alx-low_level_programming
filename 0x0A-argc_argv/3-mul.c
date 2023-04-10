#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to returning multiplication
 * @argc: counts arguments
 * @argv: stores arguments
 *
 * Return: multiplication of argument and 'Error' if none
 */

int main(int argc, char *argv[])
{
	int i;
	long int mul;

	mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			mul = mul * atoi(argv[i]);
			i++;
		}
	}

	printf("%ld\n", mul);

	return (0);
}
