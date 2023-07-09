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
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t));

	if (table->array == NULL)
		return (NULL);
	
	table->array = NULL;
	/**
	 * for (i = 0; i < size; i++)
	 * {
	 * table->array[i] = NULL;
	 * }
	 */
	 return (table);
}
