#include "lists.h"
/**
 * get_dnodeint_at_index - find item of a list
 * @head: pointer to the head node:
 * @index: poisition of the item in the list
 *
 * Return: pointer to the node at index n, otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr;

	if (head != NULL)
	{
		i = 0;
		ptr = head;
		while (ptr->next) /* obtain lenght of list */
		{
			ptr = ptr->next;
			i++;
		}

		/* Validate index is not out of range */
		if (index > i)
			return (NULL);

		i = 0;
		while (i < index) /* find index */
		{
			head = head->next;
			i++;
		}
		return (head);
	}
	return (NULL);
}
