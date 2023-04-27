#include <stdio.h>

/**
 * print - prints a statement before main
 *
 * Return: returns nothing.
 */

void print(void)__attribute__((constructor));

void print(void)
{
	char *str;

	str = "You're beat! and yet, you must allow,\nI bore my house upon my back!";
	printf("%s\n", str);
}
