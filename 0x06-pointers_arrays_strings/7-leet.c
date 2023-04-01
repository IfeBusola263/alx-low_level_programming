#include "main.h"

/**
 * leet - encodes numbers
 * @a: pointer to strings
 *
 * Return: returns a mem address to strings
 */

char *leet(char *a)
{
	int i, j;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == str1[j])
			{
				a[i] = str2[j];
			}
		}
	}
	return (a);
}
