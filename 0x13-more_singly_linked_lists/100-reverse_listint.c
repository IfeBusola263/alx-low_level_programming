#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: pointer to a pointer pointing to the first node
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptrUHead;
	listint_t *headUPtr;

	if (*head == NULL)
		return (NULL);

	headUPtr = (*head)->next;
	ptrUHead = headUPtr->next;
	(*head)->next = NULL;

	while (ptrUHead != NULL)
	{
		headUPtr->next = *head;
		*head = ptrUHead->next;
		ptrUHead->next = headUPtr;
		headUPtr = (*head)->next;
		(*head)->next = ptrUHead;
		ptrUHead = headUPtr->next;
	}
	headUPtr->next = *head;
	*head = headUPtr;

	return (*head);
}
