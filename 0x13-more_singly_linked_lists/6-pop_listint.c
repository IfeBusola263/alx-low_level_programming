#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: address of the head
 *
 * Return: returns an integer
 */
int pop_listint(listint_t **head)
{
	listint_t *checkPtr;
	int move;
	int ret;

	if (head == NULL)
		return (0);

	/* store head value and assign head to pointer */
	checkPtr = *head;
	ret = checkPtr->n;

	/* move head pointer to next node */
	move = 0;
	while (move < 1)
	{
		*head = checkPtr->next;
		move++;
	}
	/* delete first node */
	free(checkPtr);

	return (ret);
}
