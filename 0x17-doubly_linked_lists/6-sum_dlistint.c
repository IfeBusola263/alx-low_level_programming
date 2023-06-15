#include "lists.h"
/**
 * sum_dlistint - computes sum of the numbers in a doubly linked list
 * @head: pointer to the head node
 *
 * Return: on success sum list items, other wise 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
