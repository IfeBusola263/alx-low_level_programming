#include "hash_tables.h"
/**
 * hash_table_print - prints an hash table
 * @ht: pointer to the table to be printed
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	unsigned long int prints = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			ptr = ht->array[i];

			while (ptr)
			{
				if (prints)
				{
					printf(", ");
					prints = 0;
				}

				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr  = ptr->next;
				prints++;
			}

		}
		printf("}\n");
	}
}
