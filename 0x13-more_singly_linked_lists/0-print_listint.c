#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the element of a list.
 * @h: pointer to the head.
 *
 * Return: returns the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	/* loop till h is null which is the last node */
	while (h != NULL)
	{
		if (h->n == 0)
		{
			printf("%d\n", 0);
		} else
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
	}
	return (count);
}
