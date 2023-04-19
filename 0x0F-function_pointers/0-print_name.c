#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a strings
 * @name: string to be printed
 * @f: Function pointer
 *
 * Return: returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);

}
