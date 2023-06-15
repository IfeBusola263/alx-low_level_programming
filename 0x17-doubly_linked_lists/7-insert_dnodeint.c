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

		for (i = 0; ptr->next && i < idx; i++)
			ptr = ptr->next;

		if (i < idx) // Index out of range
			return (NULL);

		newNode = malloc(sizeof(dlistint_t));
		if (!newNode)
			return (NULL);

		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = NULL;

		if (idx == 0)
		{
			newNode->next = *h;
			if (*h != NULL)
				(*h)->prev = newNode;
			*h = newNode;
		}
		else
		{
			newNode->prev = ptr;
			newNode->next = ptr->next;
			if (ptr->next != NULL)
				ptr->next->prev = newNode;
			ptr->next = newNode;
		}

		return (newNode);
	}

	return (NULL);
}
