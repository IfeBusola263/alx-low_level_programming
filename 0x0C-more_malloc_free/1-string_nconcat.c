#include "main.h"
#include "stdlib.h"

/**
 * check - sets a NULL pointer to empty string
 *
 * Return: returns a pointer
 */
char *check(void)
{
	char *new;

	new = malloc(sizeof(char));

	if (new == NULL)
		return (NULL);
	new = '\0';

	return (new);
}

/**
 * string_nconcat- concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of byte to the concatenated
 *
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, k, l;

	if (s1 == NULL)
		s1 = check();
	if (s2 == NULL)
		s2 = check();

	/* length of s1 */
	for (l = 0; s1[l] != '\0';)
		l++;

	p = malloc(sizeof(char) * (l + n + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		p[i] = s1[i];

	for (k = 0; i < (l + n); k++)
		p[i++] = s2[k];

	p[l + n] = '\0';

	return (p);
}

