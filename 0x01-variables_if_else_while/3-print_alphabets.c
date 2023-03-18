#include <stdio.h>


/**
 * main - This is the entry point
 *
 * Return: always 0
 */
int main(void)
{
	char r;
	char s;

	for (r = 'a'; r <= 'z'; r++)
		putchar(r);
	for (s = 'A'; s <= 'Z'; s++)
		putchar(s);
	putchar('\n');
	return (0);
}
