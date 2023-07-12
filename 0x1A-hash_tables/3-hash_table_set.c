#include "hash_tables.h"
/**
 * create_node_emp - creates the node for the array at specified index
 * @node: address of the index for operation on table
 * @key: the key for deciding the index
 * @value: the value associated with the key
 *
 * Return: 1 on success, 0 on failure
 */
int create_node_emp(hash_node_t **node, const char *key, const char *value)
{

	*node = malloc(sizeof(hash_node_t));
	if (*node  == NULL)
		return (0);

	(*node)->key = strdup(key);
	if ((*node)->key == NULL)
	{
		free(*node);
		return (0);
	}

	(*node)->next = NULL; /* set head node to null */
	(*node)->value = strdup(value);
	if ((*node)->value == NULL)
	{
		free(*node);
		free((*node)->key);
		return (0);
	}
	return (1);
}

/**
 * create_node_linked - creates the chain incases of collision
 * @node: address the index for operation on table
 * @key: the key for deciding the index
 * @value: the value associated with the key
 *
 * Return: 1 on success, 0 on failure
 */
int create_node_linked(hash_node_t **node, const char *key, const char *value)
{
	hash_node_t *ptr, *newNode;
	char *temp;

	ptr = *node;

	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			temp = ptr->value;
			ptr->value = strdup(value);
			free(temp);
			return (1);
		}
		ptr = ptr->next;
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if (newNode->value == NULL)
	{
		free(newNode);
		free(newNode->key);
		return (0);
	}
	newNode->next = *node;
	*node = newNode;
	return (1);
}

/**
 * hash_table_set - maps a value to a key in the hash table
 * @ht: hash table to be updated
 * @key: the key for deciding the index
 * @value: the value associated with the key
 *
 * Return: on success 1 and 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;

	if (ht != NULL && key != NULL && strcmp(key, "") != 0 && value != NULL)
	{
		idx = key_index((unsigned char *)key, ht->size); /* get index */

		/* check if position is empty */
		if (ht->array[idx] == NULL)
		{
			return (create_node_emp(&(ht->array[idx]), key, value));
		}

		return (create_node_linked(&(ht->array[idx]), key, value));

	}
	return (0);
}

