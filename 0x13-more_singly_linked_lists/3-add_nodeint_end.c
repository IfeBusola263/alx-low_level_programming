#include "lists.h"
/**
 * add_nodeint_end - adds node to the end of the list
 * @head: address of the first node
 * @n: list item to be add
 *
 * Return: return the address of the new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	if (*head == NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;

		new->n = n;
		new->next = NULL;
		ptr->next = new;
	}
	return (*head);
}
