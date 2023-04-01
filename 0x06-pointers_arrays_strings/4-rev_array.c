#include "main.h"

/**
 * reverse_array - reverses an array of integars
 * @a: pointer to the array
 * @n: number of element of the array
 *
 * Return: returns nothing
 */

void reverse_array(int *a, int n)
{
	int itr;
	int temp;

	for (itr = 0; itr < n--; itr++)
	{
		temp = a[itr];
		a[itr] = a[n];
		a[n] = temp;
	}
}
