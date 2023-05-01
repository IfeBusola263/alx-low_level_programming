#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: address of the first node
 *
 * Return: returns nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		/* move forward in the list, free previous node */
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
