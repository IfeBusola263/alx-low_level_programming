#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints the element of a list.
 * @h: pointer to the head.
 *
 * Return: returns the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	/* loop till h is null which is the last node */
	while (h != NULL)
	{
		if (h->n == 0)
			printf("%d\n", 0);
		else
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
