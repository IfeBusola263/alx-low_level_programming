#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: pointer to a pointer that points to the 1st nodd
 *
 * Return: returns pointer type listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr_p;
	listint_t *ptr_n;

	ptr_p = NULL;
	ptr_n = (*head)->next;

	while (ptr_n != NULL)
	{
		(*head)->next = ptr_p;
		ptr_p = *head;
		*head = ptr_n;
		ptr_n = (*head)->next;
	}
	(*head)->next = ptr_p;

	return (*head);
}

