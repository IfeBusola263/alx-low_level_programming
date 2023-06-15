#include "lists.h"
/**
 * dlistint_len - computes the length of a doubly linked list
 * @h: pointer to the head node
 *
 * Return: number of nodes and 0 if list is empty
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	if (h != NULL)
	{
		for (i = 0; h; i++)
			h = h->next;

		return (i);
	}
	return (0);
}
