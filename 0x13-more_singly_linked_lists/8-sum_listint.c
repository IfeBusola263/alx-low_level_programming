#include "lists.h"
/**
 * sum_listint - sums the data in a list
 * @head: first node
 *
 * Return: returns an integer
 */
int sum_listint(listint_t *head)
{
	listint_t *checkPtr;
	int sum = 0;

	/* assign head to traversing pointer */
	checkPtr = head;
	/* addition on each movement */
	while (checkPtr)
	{
		sum += checkPtr->n;
	       checkPtr = checkPtr->next;
	}

	return (sum);
}
