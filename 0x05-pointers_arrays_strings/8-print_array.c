#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints the element of an array
 * @a: pointer to str
 * @n: pointer
 *
 * Return: returns nothing
 */
 
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (a[i] != a[n - 1])
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
