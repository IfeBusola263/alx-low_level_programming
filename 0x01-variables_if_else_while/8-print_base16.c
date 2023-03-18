#include <stdio.h>


/**
 * main - This is the entry point
 *
 * Return: always 0
 */
int main(void)
{
	int r;
	char s;

	for (r = 0; r <= 9; r++)
		putchar(r + '0');
	for (s = 'a'; s < 'g'; s++)
		putchar(s);
	putchar('\n');
	return (0);
}
