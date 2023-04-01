#include "main.h"

/**
 * rot13 - encodes using rot13
 * @a: string pointer to be encoded
 *
 * Return: returns mem address to string
 */

char *rot13(char *a)
{
	int itr1;
	int itr2;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (itr1 = 0; a[itr1] != '\0'; itr1++)
	{
		for (itr2 = 0; itr2 < 52; itr2++)
		{
			if (a[itr1] == data1[itr2])
			{
				a[itr1] = datarot[itr2];
				break;
			}
		}
	}
	return (a);
}

