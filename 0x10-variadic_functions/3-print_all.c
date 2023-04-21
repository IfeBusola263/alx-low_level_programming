#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * print_all - prints anything
 * @format: list of arguments pasted to the function
 *
 * Returns: Nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int j;
	char c;
	char *s;
	double f;
	int i;
	va_list print;

	if (!format || format == NULL)
		return;

	va_start(print, format);
	j = 0;
	while (j < strlen(format))
	{
		if (format[j++] == 'c')
		{
			c = va_arg(print, int);
			printf("%c", c);
		}
		else if (format[j++] == 'i')
		{
			i = va_arg(print, int);
			printf("%d", i);
		}
		else if (format[j++] == 'f')
		{
			f = va_arg(print, double);
			printf("%f", f);
		}
		else if (format[j++] == 's')
		{
			p = va_arg(print, char*);
			printf("%s", p);
		}
		printf(", ");
	}
	putchar('\n');
}

