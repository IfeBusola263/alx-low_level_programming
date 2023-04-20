#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - Prints stringss
 * @separator: delimiter
 * @n: number of strings
 *
 * Return: returns nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *j;
	va_list ops;

	if (n <= 0)
		return;

	va_start(ops, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(ops, char*);
		if (j == NULL)
			printf("(nil)");
		else
			printf("%s", j);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(ops);
}
