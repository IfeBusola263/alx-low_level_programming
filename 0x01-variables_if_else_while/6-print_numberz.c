#include <stdio.h>


/**
 * main - This is the entry point
 *
 * Return: always 0
 */
int main(void)
{
	int r;

	for (r = 0; r < 10; r++)
		putchar(r + '0');
	putchar('\n');
	return (0);
}
