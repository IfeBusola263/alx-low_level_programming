#include "search_algos.h"
/**
 * linear_skip - searches a skip list for value
 *
 * @list: pointer to the head of the skip list to search i
 * @value: the value to search for
 *
 * Return: pointer to the first node on success, otherwise NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *top = NULL, *end = NULL;

	if (list != NULL)
	{
		top = list;
		end = list->express;

		while (end != NULL) /* set pointer to list head */
		{
			printf("Value checked at index [%lu] = [%d]\n",
			       end->index, end->n);
			if (end->n >= value)
				break;
			top = end;
			end = end->express; /* move pointer through express lane */
		}

		if (end == NULL)
		{
			end = top;
			while (end->next != NULL)
				end = end->next;
		}

		printf("Value found between indexes [%lu] and [%lu]\n",
		       top->index, end->index);

		/* loop through portion of the list where value is */
		while (top != NULL && top->index <= end->index)
		{
			printf("Value checked at index [%lu] = [%d]\n",
			       top->index, top->n);
			if (top->n == value)
				return (top);
			top = top->next;
		}
		return (NULL);
	}
	return (NULL);
}
