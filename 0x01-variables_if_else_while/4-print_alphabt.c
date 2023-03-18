#include <stdio.h>


/**
 * main - This is the entry point
 *
 * Return: always 0
 */
int main(void)
{
	char r;

	for (r = 'a'; r <= 'z'; r++)
		if (r != 'e' && r != 'q')
			putchar(r);
	putchar('\n');
	return (0);
}
