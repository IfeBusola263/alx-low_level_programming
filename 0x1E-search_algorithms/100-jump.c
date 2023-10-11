#include "search_algos.h"
/**
 * jump_search - The functions find a value and with the jump search algo
 *
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: Index where value is located on success, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, top, end;

	if (array != NULL)
	{
		top = 0; /* starting index of the array */
		end = sqrt(size); /* Jump step */

		printf("Value checked array[%lu] = [%d]\n",
			       top, array[top]);

		while (array[end] < value && top < size - 1)
		{
			printf("Value checked array[%lu] = [%d]\n",
			       end, array[end]);

			top = end; /* move top pointer to the end */
			end = end + sqrt(size); /* move end pointer forward */
			if (end > size - 1)
				break;
		}
		printf("Value found between indexes [%lu] and [%lu]\n", top, end);
		end = size - 1;

		for (i = top; i <= end; i++) /* loop through the block value is */
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (value == array[i])
				return ((int)i);
		}
		return (-1);
	}
	return (-1);
}
