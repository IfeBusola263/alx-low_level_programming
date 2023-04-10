#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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

	sum = 0;

	if (argc < 2)
	{
		printf("%d\n", sum);
		return (0);
	}

	i = 0;
	while (i < argc)
	{
		if (isalpha(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
		i++;
	}
	printf("%d\n", sum);
	return (sum);
}
