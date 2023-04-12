#include "main.h"
#include <stdlib.h>

/**
 * len - get length of string
 * @c: pointer to the string
 *
 * Return: returns an integer
 */

int len(char *c);
{
	int i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return(i);
}


/**
 * argstostr - concatenates strings passed as argument
 * @ac: number of arguments
 * @av: pointer to the pointer holding the arguments
 *
 * Return: pointer to the new string
 */

char 
char *argstostr(int ac, char **av)
{
	int i;
	char **p;
	int size;

	size = 0;

	for (i = 1; i < ac; i++)
	{
		size += len(av[i]);
	}
		

	p = malloc(size * sizeof(char) + 1);

	i = 0;
	while (i < size)
	{
		p[i] = av[i];
		i++;
	}

	return(p);
}




