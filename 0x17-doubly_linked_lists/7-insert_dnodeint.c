#include "lists.h"
#include <stdio.h>
/**
 * insert_dnodeint_at_index - insert node in list
 * @h: pointer to the head node
 * @idx: index to insert node
 * @n: element to fill the node
 *
 * Return: on success address of the new node, otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *newNode;
	unsigned int i;

	if (*h != NULL)
	{
		ptr = *h;

		for (i = 0; ptr->next; i++)
			ptr = ptr->next;

		newNode = malloc(sizeof(dlistint_t));
		if (!newNode || idx > i)
			return (NULL);

		ptr = *h;
		i = 0;
		while (i < idx)
		{
			ptr = ptr->next;
			i++;
		}
		newNode->n = n;
		newNode->next = ptr;
		if (ptr->prev)
		{
			ptr->prev->next = newNode;
		}
		newNode->prev = ptr->prev;
		ptr->prev = newNode;

		return (newNode);
	}
	return (NULL);
}
