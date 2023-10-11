#include "search_algos.h"
/**
 * interpolation_search - Function searches for a value with interpolation algo
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: first index where value is located on success, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array != NULL)
	{
		low = 0;
		high = size - 1;

		while (low < size && high < size)
		{
			pos = low + (((double)(high - low) /
				      (array[high] - array[low])) * (value - array[low]));


			if (pos > size - 1)
			{
				printf("Value checked array[%lu] is out of range\n", pos);
				return (-1);
			}
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

			if (value == array[pos])
				return (pos);
			else if (value < array[pos])
				high = pos - 1;
			else
				low = pos + 1;
		}
		return (-1);
	}
	return (-1);
}
