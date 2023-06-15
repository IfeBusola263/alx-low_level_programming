#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all the element of a doublylinked list
 * @h: pointer to the head node
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
		return i;
	}
	return (0);
}
