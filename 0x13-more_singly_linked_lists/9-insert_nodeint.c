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
	listint_t *checkPtr, *newAdd;
	unsigned int move;

	if (head == NULL)
		return (NULL);

	checkPtr = *head;
	for (move = 0; checkPtr != NULL; move++)
		checkPtr = checkPtr->next;

	newAdd = malloc(sizeof(listint_t));
	if (newAdd == NULL)
		return (NULL);
	newAdd->n = n;

	if (move < idx)
	{
		return (NULL);
	}
	else
	{
		if (idx == 0)
		{
			checkPtr = *head;
			newAdd->next = checkPtr;
			*head = newAdd;
		} else
		{
			checkPtr = *head; /* move to index before the idx */
			move = 0;	/* holding the address of node at idx */
			while (move < idx - 1)
			{
				checkPtr = checkPtr->next;
				move++;
			}
			newAdd->next = checkPtr->next;
			checkPtr->next = newAdd;
		}
	}
	return (newAdd);
}
