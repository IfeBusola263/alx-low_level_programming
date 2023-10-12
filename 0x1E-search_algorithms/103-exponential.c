#include "search_algos.h"
/**
 * exponential_search - function searches for a value in an array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: is the value to search for
 *
 * Return: first index where value is located, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, top = 0, end = 1, mid = 0;

	if (array != NULL)
	{
		if (array[top] == value)
			return ((int)top);
		while (end < size - 1 && array[end] < value)
		{
			if (array[end] == value)
				return ((int)end);

			printf("Value checked array[%lu] = [%d]\n", end, array[end]);
			top = end;
			end = end * 2;
			if (end >= size)
				end = size - 1;
		}
		printf("Value found between indexes [%lu] and [%lu]\n", top, end);
		while (top <= end)
		{
			mid = (top + end) / 2;
			printf("Searching in array: ");
			for (i = top; i <= end; i++)
			{
				printf("%d", array[i]);
				if (i < end)
					printf(", ");
			}
			printf("\n");
			if (array[mid] == value)
				return ((int)mid);
			else if (value > array[mid])
				top = mid + 1;
			else
				end = mid - 1;
		}
		return (-1);
	}
	return (-1);
}
