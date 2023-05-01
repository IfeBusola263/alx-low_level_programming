#include "lists.h"
/**
 * delete_nodeint_at_index - pops node at given index
 * @head: pointer to the pointer to the first node
 * @index: index to delete node.
 *
 * Return: returns an integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *checkPtr = *head, *checkPtr1, *checkPtr2 = *head;
	unsigned int move, move1;

	if (*head == NULL)
		return (-1);

	for (move = 0; checkPtr != NULL; move++)
		checkPtr = checkPtr->next;
	if (move < index)	/* check if idex is valid */
		return (-1);

	if (index == 0 && checkPtr2->next == NULL) /* del only node */
	{
		free(*head);
		*head = NULL;
	} else if (index == 0 && checkPtr2->next != NULL) /* del 1st node */
	{
		checkPtr = *head;
		for (move1 = 0; move1 < 1; move1++)
			checkPtr = checkPtr->next;
		free(*head);
		*head = checkPtr;
	} else if (index > 0 && index < move) /* delete node not first or last */
	{
		checkPtr = *head;
		for (move1 = 0; move1 < index - 1; move1++)
			checkPtr = checkPtr->next;
		checkPtr1 = checkPtr->next; /* set pointer 2 to index of next node */
		checkPtr->next = checkPtr1->next;
		free(checkPtr1);
	} else	/* delete last node */
	{
		checkPtr = *head;
		for (move1 = 0; move1 < index; move1++)
			checkPtr = checkPtr->next;
		checkPtr1 = checkPtr->next;
		free(checkPtr1);
		checkPtr->next = NULL;
	}
	return (1);
}
