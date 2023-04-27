#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_list - returns the size of a linked list.
 * @h: address of the first node.
 *
 * Return: returns the number nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	
	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%ld] %s\n", strlen(h->str), h->str);
		count++;
	}
	return (count);
}

