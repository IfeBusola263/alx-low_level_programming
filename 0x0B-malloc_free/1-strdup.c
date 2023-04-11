#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns the duplicate of a string.
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicate string.
 */

char *_strdup(char *str)
{
	char *p;
	int i, j; /* iterator over the string */

	if (str == NULL)
		return (NULL);

	/* Get the length of str */
	i = 0;
	while (str[i] != '\0')
		i++;

	p = malloc(i + 1);

	/* copy string to new memory allocated */
	j = 0;
	while (j < i)
	{
		if (p == NULL)
		{
			return (NULL);
		}
		p[j] = str[j];
		j++;
	}

	p[j] = '\0';

	return (p);
}
