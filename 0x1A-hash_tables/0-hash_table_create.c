#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 *
 * Return: the pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t) * size);

	if (table == NULL)
		return (NULL);

	return (table);
}
