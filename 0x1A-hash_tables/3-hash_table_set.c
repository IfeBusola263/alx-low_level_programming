#include "hash_tables.h"
/**
 * create_node - creates the node for the array at specified index
 *
 * Return: 1 on success, 0 on failure
 */
/* int create_node_empty(void) */
/* { */
/* 	ht->array[idx] = malloc(sizeof(hash_node_t)); */
/* 	if (ht->array[idx] == NULL) */
/* 		return (0); */

/* 	ht->array[idx]->key = strdup(key); */
/* 	if (ht->array[idx]->key == NULL) */
/* 	{ */
/* 		free(ht->array[idx]); */
/* 		return (0); */
/* 	} */

/* 	ht->array[idx]->next = NULL; /\* set head node to null *\/ */
/* 	if (value == NULL) */
/* 	{ */
/* 		/\* if value is an empty string *\/ */
/* 		ht->array[idx]->value = NULL; */
/* 		return (1); */
/* 	} */

/* 	ht->array[indx]->value = strdup(value); */
/* 	if (ht->array[idx]->value == NULL) */
/* 	{ */
/* 		free(ht->array[idx]); */
/* 		free(ht->array[idx]->key); */
/* 		return (0); */
/* 	} */
/* 	return (1); */
/*} */
/**
 * create_node_linked_list - creates the chain incases of collision
 *
 * Return: 1 on success, 0 on failure
 */
/* int create_node_linked_list(void) */

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
	hash_node_t *ptr, *newNode;

	if (key != NULL)
	{
		idx = key_index((unsigned char *)key, ht->size); /*  get index */

		/* check if position is empty */
		if (ht->array[idx] == NULL)
		{

			ht->array[idx] = malloc(sizeof(hash_node_t));
			if (ht->array[idx] == NULL)
				return (0);

			ht->array[idx]->key = strdup(key);
			if (ht->array[idx]->key == NULL)
			{
				free(ht->array[idx]);
				return (0);
			}

			ht->array[idx]->next = NULL; /* set head node to null */	
			if (value == NULL)
			{
				/* if value is an empty string */
				ht->array[idx]->value = NULL;
				return (1);
			}

			ht->array[idx]->value = strdup(value);
			if (ht->array[idx]->value == NULL)
			{
				free(ht->array[idx]);
				free(ht->array[idx]->key);
				return (0);
			}
			return (1);
		}

		ptr = ht->array[idx];

		while (ptr->next)
		{
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
		newNode->next = NULL;

		if (value == NULL)
		{
			newNode->value = NULL;
			return (1);
		}

		newNode->value = strdup(value);
		if (newNode->value == NULL)
		{
			free(newNode);
			free(newNode->key);
			return (0);
		}

		ptr->next = newNode;
		return (1);
	}
	return (0);
}

