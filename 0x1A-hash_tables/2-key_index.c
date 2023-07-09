#include "hash_tables.h"
/**
 * key_index - generates the index for an item on the table
 * @key: main data which information would be mapped to
 * @size: the size of the hash table
 *
 * Return: the index to put the data on the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx, hash;


	hash = hash_djb2((unsigned char *) key);
	idx = hash % size;

	return (idx);
}
