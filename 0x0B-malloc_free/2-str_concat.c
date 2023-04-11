#include "main.h"
#include <stdlib.h>
/**
 * check - reallocates memory to NULL pointer
 *
 * Return: pointer to empty string.
 */

char *check(void)
{
	char *c;

	c = malloc(1);
	if (c == NULL)
		return (NULL);
	c[0] = '\0';

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
		s1 = check();

	if (s2 == NULL)
		s2 = check();

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

	for (l = 0; k < (i + j); l++)
	{
		p[k++] = s2[l];
	}
	p[i + j] = '\0';
	return (p);
}
