#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	p = n % 10;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, p);
	else if ((n < 6) && (n != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, p);
	else
		printf("Last digit of %d is %d and is 0\n", n, p);
	return (0);
}
