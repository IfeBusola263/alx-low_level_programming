#include "lists.h"
/**
 * get_nodeint_at_index - gets nth node of the list
 * @head: address of the first node
 * @index: index to be found.
 *
 * Return: pointer to a struct
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *checkPtr;
	unsigned int move;

	/* check for null pointer */
	if (head == NULL)
		return (NULL);

	/* check if index exists */
	checkPtr = head;
	for (move = 0; checkPtr != NULL; move++)
		checkPtr = checkPtr->next;

	if (index > move)
		return (NULL);
	/* move to the specified index */
	move = 0;
	checkPtr = head;
	while (move < index)
	{
		checkPtr = checkPtr->next;
		move++;
	}
	return (checkPtr);
}
