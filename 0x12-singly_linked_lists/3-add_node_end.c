#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - returns the address to the head
 * @head: the pointer to the address coming into the func
 * @str: List to be added to beginning of list
 *
 * Return: pointer to the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newAdd;
	list_t *trav_ptr;

	if (str == NULL || head == NULL)
		return (NULL);

	newAdd = malloc(sizeof(list_t));
	if (newAdd == NULL)
		return (NULL);
	newAdd->str = strdup(str);
	if (newAdd->str == NULL)
	{
		free(newAdd);
		return (NULL);
	}
	newAdd->len = strlen(str);
	newAdd->next = NULL;

	if (*head == NULL)
	{
		*head = newAdd;
	} else
	{
		trav_ptr = *head;
		while (trav_ptr->next)
		{
			trav_ptr = trav_ptr->next;
		}
		trav_ptr->next = newAdd;
	}
	return (newAdd);
}
