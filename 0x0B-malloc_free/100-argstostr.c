#include "main.h"
#include <stdlib.h>

/**
 * len - get length of string
 * @c: pointer to the string
 *
 * Return: returns an integer
 */

int len(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}


/**
 * argstostr - concatenates strings passed as argument
 * @ac: number of arguments
 * @av: pointer to the pointer holding the arguments
 *
 * Return: pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	int i;
	char **p;
	int arr_size;

	arr_size = 0;

	if (ac == 0 || av[0] == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		arr_size += len(av[i]);
	}

	p = malloc(arr_size * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);

	i = 0;
	while (i < arr_size)
	{
		p[i] = av[i];
		i++;
	}

	return (*p);
}




