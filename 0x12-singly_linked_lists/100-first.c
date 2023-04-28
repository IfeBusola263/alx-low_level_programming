#include <stdio.h>

/**
 * just_before_main - prints a statement before main
 *
 * Return: returns nothing.
 */

void just_before_main(void) __attribute__((constructor));

void just_before_main(void)
{
	char *str;

	str = "You're beat! and yet, you must allow,\nI bore my house upon my back!";
	printf("%s\n", str);
}
