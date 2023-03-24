#include <stdio.h>

/**
 * main - this is the entry point
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	char j[] = "Fizz";
	char k[] = "Buzz";
	char l[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("%s ", l);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", k);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", j);
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
