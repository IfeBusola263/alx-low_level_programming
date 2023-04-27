#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Prints the number of nodes
 * @h: list head
 *
 * Return: returns size_t integer
 */

size_t list_len(const list_t *h)
{
	list_t *ptr;
	size_t count;

	if (h == NULL)
		exit(98);
	count = 1;

	ptr = h->next;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
