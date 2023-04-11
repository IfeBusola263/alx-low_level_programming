#include "main.h"
#include <stdlib.h>
/**
 * check - reallocates memory to NULL pointer
 * @c: pointer to be reallocated
 *
 * Return: pointer to empty string.
 */

char *check(char *c)
{
	c = malloc(2);
	if (c == NULL)
		return (NULL);
	c[1] = '\0';

	return (c);
}

/**
 * str_concat - returns a pointer to a concatenated string
 * @s1: destination string
 * @s2: source string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *p; /* pointer to return concatenated string */

	if (s1 == NULL)
		check(s1);

	if (s2 == NULL)
		check(s2);

	for (i = 0; s1[i] != '\0';)
		i++;

	for (j = 0; s2[j] != '\0';)
		j++;

	p = malloc(i + j + 1);

	for (k = 0; k < i;)
	{
		if (p == NULL)
			return (NULL);

		p[k] = s1[k];
		k++;
	}

	for (l = 0; k < (i + j);)
	{
		p[k] = s2[l];
		k++;
		l++;
	}
	p[i + j] = '\0';
	return (p);
}
