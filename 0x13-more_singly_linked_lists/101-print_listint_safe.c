#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints list
 * @head: pointer to the first node
 *
 * Return: returns an unsigned int
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num;

	num = 0;
	while (head)
	{
		if (head == head->next)
		{
			printf("-> [%p] %d", (void *)head, head->n);
			break;
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num++;
	}	
	return (num);
}
