#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - returns the size of a linked list.
 * @h: address of the first node.
 *
 * Return: returns the number nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count;
	list_t *ptr;

	if (h == NULL)
	{
		printf("Error\n");
		return (1);
	}
	count = 0;
	if (h->str == NULL)
	{
		printf("[%d] %s\n", 0, "(nil)");
		count++;
	} else
	{
		printf("[%d] %s\n", h->len, h->str);
		count++;
	}

	ptr = h->next;
	while (ptr)
	{
		if (ptr->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			ptr = ptr->next;
			count++;
		} else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
			count++;
		}
	}
	return (count);
}
