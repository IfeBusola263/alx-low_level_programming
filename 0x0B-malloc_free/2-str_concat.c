#include "main.h"
#include <stdlib.h>
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
		s1[0] = '\0';

	if (s2 == NULL)
		s2[0] = '\0';

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	p = malloc(i + j + 1);

	k = 0;
	while (k < i)
	{
		if (p == NULL)
			return (NULL);

		p[k] = s1[k];
		k++;
	}

	l = 0;
	while (k < (i + j))
	{
		p[k] = s2[l];
		k++;
		l++;
	}
	p[i + j] = '\0';
	return (p);
}
