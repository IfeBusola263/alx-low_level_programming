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

		newNode->n = n;
		ptr = *h;

		for (i = 0; i < idx; i++)
			ptr = ptr->next;

		newNode->next = ptr;
		if (ptr->prev)
		{
			ptr->prev->next = newNode;
		}
		else
		{
			*h = newNode;
		}
		newNode->prev = ptr->prev;
		ptr->prev = newNode;
		newNode->next = ptr;
		return (newNode);
	}
	return (NULL);
}
