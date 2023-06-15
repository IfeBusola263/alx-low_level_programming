#include "lists.h"
/**
 * add_dnodeint_end - creates new node from end of the list
 * @head: pointer to the head pointer
 * @n: element to be added to the list
 *
 * Return: pointer to the new node;
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	if (*head == NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = NULL;
		*head = newNode;
		newNode = NULL;

		return (*head);
	}

	ptr = *head;
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = newNode;
	newNode->n = n;
	newNode->prev = ptr;
	newNode->next = NULL;

	return (newNode);
}
