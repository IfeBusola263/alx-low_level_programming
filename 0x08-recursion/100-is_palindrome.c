#include "main.h"

/**
 * is_palindrome - cheecks if string is a palindrome
 * @s: the string to be checked
 *
 * Return: returns integer
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + is_palindrome(s + 1));
}
