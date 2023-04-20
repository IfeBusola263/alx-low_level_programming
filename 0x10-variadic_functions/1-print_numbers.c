#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - prints numbers with delimeter
 * @separator: Pointer to delimiter
 * @n: number of integars
 *
 * Return: returns nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j;
	va_list ops;

	/* argument check */
	if (n > 0 && separator != NULL)
	{
		va_start(ops, n);
		
		for (i = 0; i < n; i++)
		{
			/* print seperator only if not  Null*/
			/*and before the final optional argument*/
			j = va_arg(ops, int);
			printf("%d", j);
			if (i != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(ops);
	}
}
