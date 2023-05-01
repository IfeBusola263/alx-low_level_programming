#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at nth index
 * @head: pointer to the pointer to the first node
 * @idx: index which new node should be add
 * @n: Data to be added
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *checkPtr;
	listint_t *newAdd;
	unsigned int move;

	if (head == NULL)
		return (NULL);

	/* check if index is available */
	checkPtr = *head;
	for (move = 0; checkPtr != NULL; move++)
		checkPtr = checkPtr->next;

	if (idx > move)
		return (NULL);

	/* move to index before the idx */
	/* holding the address of node at idx */
	checkPtr = *head;
	move = 0;
	while (move < idx - 1)
	{
		checkPtr = checkPtr->next;
		move++;
	}

	newAdd = malloc(sizeof(listint_t));
	if (newAdd == NULL)
		return (NULL);

	newAdd->n = n;
	newAdd->next = checkPtr->next;
	checkPtr->next = newAdd;

	return (newAdd);
}
