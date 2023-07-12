#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the table to searched
 * @key: key which has the value to be retrieved
 *
 * Return: returns a string
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *ptr;

	if (ht != NULL && key != NULL && strcmp(key, "") != 0)
	{
		idx = key_index((unsigned char *)key, ht->size);

		ptr = ht->array[idx];
		if (ptr == NULL)
			return (NULL);

		while (ptr)
		{
			if (strcmp(key, ptr->key) == 0)
			{
				return (ptr->value);
			}
			ptr = ptr->next;
		}

	}
	return (NULL);
}
