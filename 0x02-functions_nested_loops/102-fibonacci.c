#include <stdio.h>

/**
 * fibonacci - prints fibonacci series
 * @i: series range
 *
 * Return: returns an integar
 */

int unsigned long long fibonacci(int i)
{
	if (i == 0)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	return (fibonacci(i - 1) + fibonacci(i - 2));
}

/**
 * main- This is the entry point of program
 *
 *
 * Return: returns nothing
 */

int main(void)
{
	int c;

	c = 0;
	while (c < 50)
	{
		printf("%llu", fibonacci(c));
		if (c < 49)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	printf("\n");

	return (0);
}
