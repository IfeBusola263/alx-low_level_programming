#include "hash_tables.h"
/**
 * hash_table_delete - deletes the table by freeing memory
 * @ht: the hash table to be deleted
 *
 * Return: returns Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *pairs, *next_pairs;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			pairs = ht->array[i];
			if (pairs)
				next_pairs = pairs->next;

			while (pairs)
			{
				if (pairs->key && pairs->value)
				{
					free(pairs->key);
					free(pairs->value);
				}
				free(pairs);
				pairs = next_pairs;
				if (next_pairs)
					next_pairs = next_pairs->next;
			}
		}
		free(ht->array);
		free(ht);
	}
}
