#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - Add node at the beginning of the list
 * @head: pointer to the head
 * @n: new list item
 *
 * Return: returns the address of the new address.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
