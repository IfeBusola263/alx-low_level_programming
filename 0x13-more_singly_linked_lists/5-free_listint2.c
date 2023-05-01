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

	ptr = *head;
	while (ptr)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
	head = NULL;
}
