#include "search_algos.h"
/**
 * binary_search - The functions searches for a value with binary search
 *
 * @array: Pointer to the first element of an array
 * @size: The number of elements in array
 * @value: The value to be searched
 *
 * Return: the index of value upon success, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, start, mid, end;

	if (array == NULL) /* if the array is empty */
		return (-1);

	start = 0; /* starting index */
	end = size - 1; /* ending index */

	while (start <= end)
	{
		/* center of the array */
		mid = start + ((end - start) / 2);
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");

		/* conditions to check for value */
		if (value == array[mid])
			return ((int)mid);

		/* re-position the end to the middle if value */
		/* is less than middle */
		else if (value < array[mid])
			end = mid - 1;

		/* re-position start if value is greater than middle value */
		else
			start = mid + 1;
	}
	return (-1);
}
