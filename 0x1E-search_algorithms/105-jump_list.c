#include "search_algos.h"
/**
 * jump_list - function returns a pointer to the node a searched value, using jump search algorithm
 *
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: the value to search for
 *
 * Return: pointer to the node with value, otherwise NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *top = NULL, *end = NULL;
	size_t jump = sqrt(size);

	if (list != NULL)
	{
		top = list;
		end = list;

		while (jump <= size - 1)
		{
			while (end->index != jump && end->next != NULL)
				end = end->next;
			printf("Value checked at index [%lu] = [%d]\n", jump, end->n);
			if (end->n > value || end->next == NULL)
				break;
			top = end;
			jump = jump + sqrt(size);
			if (jump > size - 1)
				jump = size - 1;
		}
		printf("Value found between indexes [%lu] and [%lu]\n", top->index, end->index);

		while (top != NULL && top->index <= end->index)
		{
			printf("Value checked at index [%lu] = [%d]\n", top->index, top->n);
			if (top->n == value)
				return (top);
			top = top->next;
		}
		return (NULL);
	}
	return (NULL);
}
			
