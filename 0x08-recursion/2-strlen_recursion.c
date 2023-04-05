#include "main.h"
/**
 * _strlen_recursion - prints length of a string
 * @s: pointer to string to be counted
 *
 * Return: returns an integar
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
