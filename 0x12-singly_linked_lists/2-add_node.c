#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node - returns the address to the head
 * @head: the pointer to the address coming into the func
 * @str: List to be added to beginning of list
 *
 * Return: pointer to the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newAdd;

	if (str == NULL || head == NULL)
		return (NULL);

	newAdd = malloc(sizeof(list_t));
	if (newAdd == NULL)
		return (NULL);
	/* duplicated list comes in */
	newAdd->str = strdup(str);
	/* len of the string is filled here */
	newAdd->len = strlen(newAdd->str);
	/* precious head address is filled to the new node */
	/* to connected with the older node */
	newAdd->next = NULL;

	newAdd->next = *head;
	*head = newAdd;

	return (newAdd);
}
