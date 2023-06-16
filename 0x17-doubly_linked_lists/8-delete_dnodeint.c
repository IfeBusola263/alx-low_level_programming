#include "lists.h"
/**
 * delete_dnodeint_at_index - removes a node an index 'index'
 * @head: pointer to the head pointer
 * @index: node to be deleted
 *
 * Return: on success 1, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i;

	if (*head != NULL)
	{
		ptr = *head;
		for (i = 0; ptr->next; i++)
			ptr = ptr->next;
		if (i == 0)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		if (index > i)
			return (-1);

		ptr = *head;
		for (i = 0; i < index && ptr->next; i++)
			ptr = ptr->next;

		if (!ptr->prev)
		{
			*head = ptr->next;
			free(ptr);
			(*head)->prev = NULL;
			return (1);
		} else if (!ptr->next)
		{
			ptr = ptr->prev;
			free(ptr->next);
			ptr->next = NULL;
			return (1);
		}
		ptr->next->prev = ptr->prev;
		ptr->prev->next = ptr->next;
		free(ptr);
		return (1);
	}
	return (-1);
}
