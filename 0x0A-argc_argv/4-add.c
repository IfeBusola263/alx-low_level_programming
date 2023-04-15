#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to returning addition
 * @argc: counts arguments
 * @argv: stores arguments
 *
 * Return: addition  of argument and 'Error' if alphabet
 */

int main(int argc, char *argv[])
{
	int i, sum;
	int result;
	char *stop;

	sum = 0;

	if (argc < 2)
	{
		printf("%d\n", sum);
		return (0);
	}

	i = 1;
	while (i < argc)
	{
		result = strtol(argv[i], &stop, 10);
		if (*stop)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + result;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
