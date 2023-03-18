#include <stdio.h>


/**
 * main - This is the entry point
 *
 * Return: always 0
 */
int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
		putchar(r);
	putchar('\n');
	return (0);
}
