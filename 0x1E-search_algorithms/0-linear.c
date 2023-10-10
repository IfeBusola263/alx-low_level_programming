#include "search_algos.h"
/**
 * linear_search - The function uses linear search to find a value
 *
 * @array: a pointer to the first element of the array
 * @size: Number of elements in an array
 * @value: value to search for
 *
 * Return: index of the value on success, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array != NULL)
	{
		for (i = 0; i < (int)size; i++)
		{
			if (array[i] == value)
				return (i);
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		}
		return (-1);
	}
	return (-1);
}
