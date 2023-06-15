#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - Creates new node the head
 * @head: pointer to the head node pointer
 * @n: new item for the list
 *
 * Return: pointer to the head node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
		if (!newNode)
			return (NULL);

	/* create new node if empty */
	if (*head == NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = NULL;
		*head = newNode;

		return (*head);
	}

	/* fix node at the head */
	ptr = *head;
	newNode->n = n;
	newNode->next = ptr;
	newNode->prev = NULL;
	ptr->prev = newNode;
	*head = newNode;

	return (*head);
}
