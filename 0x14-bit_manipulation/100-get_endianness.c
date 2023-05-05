#include "main.h"
#include <stdio.h>
/**
 * get_endianness - points the byte order of a computer
 *
 * Return: returns nothing
 */
int get_endianness(void)
{
	unsigned int *ptr;
	unsigned int check = 1;

	ptr = &check;

	if (*ptr)
		return (1);
	else
		return (0);
}
