#include "search_algos.h"
/**
 * recur_search - function recursively searches for the first
 * @array: pointer to the array to be searched
 * @top: lower index of the array
 * @end: higher index
 * @value: value to be searched
 *
 * Return: the index of value upon success, -1 otherwise
 */
int recur_search(int *array, size_t top, size_t end, int value)
{
	size_t i, mid;

	if (top > end)
		return (-1);

	mid = (top + end) / 2;

	printf("Searching in array: ");
	if (top != end)
	{
		for (i = top; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
	} else
		printf("%d", array[top]);
	printf("\n");


	if (array[mid] == value)
	{
		if (mid > 0 && array[mid - 1] == value)
			return (recur_search(array, top, mid, value));
		return ((int)mid);
	}
	else if (array[mid] > value)
		return (recur_search(array, top, mid - 1, value));
	else
		return (recur_search(array, mid + 1, end, value));
}
/**
 * advanced_binary - The functions searches for a value with binary search
 *
 * @array: Pointer to the first element of an array
 * @size: The number of elements in array
 * @value: The value to be searched
 *
 * Return: the index of value upon success, -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t start, stop;

	if (array == NULL) /* if the array is empty */
		return (-1);

	start = 0;
	stop = size - 1;

	return (recur_search(array, start, stop, value));
}
