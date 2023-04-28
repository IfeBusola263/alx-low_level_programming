#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - Prints the number of nodes
 * @h: list head
 *
 * Return: returns size_t integer
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
