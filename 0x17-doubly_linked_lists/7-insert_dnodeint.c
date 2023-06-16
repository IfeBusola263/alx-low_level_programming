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
		if (i < idx)
		{
			if (i + 1 == idx) /* idx is the next after the last */
			{
				newNode = add_dnodeint_end(h, n);
				return (newNode);
			} else
				return (NULL);
		}
		ptr = *h;
		newNode = malloc(sizeof(dlistint_t));
		if (!newNode)
			return (NULL);
		newNode->n = n;
		for (i = 0; i < idx && ptr->next; i++)
			ptr = ptr->next;

		newNode->next = ptr;
		if (ptr->prev)
		{
			ptr->prev->next = newNode;
		} else
		{
			*h = newNode;
		}
		newNode->prev = ptr->prev;
		ptr->prev = newNode;
		newNode->next = ptr;
		return (newNode);
	}
	newNode = add_dnodeint(h, n); /* if empty list, create new nod */
	return (newNode);
}
