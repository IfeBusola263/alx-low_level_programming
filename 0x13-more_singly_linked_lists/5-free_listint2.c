#include "lists.h"
/**
 * free_listint2 - frees program and sets head to NULL
 * @head: pointer to the head
 *
 * Return: returns nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *ptr2;

	if (head == NULL)
		return;

	ptr = *head;
	ptr2 = *head;

	while (ptr)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
	*head = ptr2;
	*head = NULL;
}
