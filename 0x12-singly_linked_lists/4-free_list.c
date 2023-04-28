#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees dynamically allocated mem
 * @head - first node
 *
 * Return: returns nothing
 */
void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;

	while (ptr)
	{
		if (ptr->str)
			free(ptr->str);
		free(ptr);
		ptr = ptr->next;
	}
}
