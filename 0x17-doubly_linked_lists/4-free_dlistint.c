#include "lists.h"
/**
 * free_dlistint - program frees allocated memory
 * @head: pointer to the first node
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head != NULL)
	{
		ptr = head;
		while (ptr->next)
		{
			ptr = ptr->next;
			free(ptr->prev);
		}
		free(ptr);
		head = NULL;
	}
}
