GG#include "hash_tables.h"
/**
 * shash_table_create - creates a hash table for a sorted items
 * @size: The size of the hashtable
 *
 * Return: Returns a pointer to the Tables
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;

	table->shead = malloc(sizeof(shash_node_t));
	if (table->shead == NULL)
	{
		free(table);
		free(table->array);
		return (NULL);
	}

	table->stail = malloc(sizeof(shash_node_t));
	if (table->stail == NULL)
	{
		free(table);
		free(table->array);
		free(table->shead);
		return (NULL);
	}

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}

/**
 * shash_table_set - sets the table inserting key/values in sorted manner
 * @ht: pointer to the hash table
 * @key: pointer to the data to be stored as the key
 * @value: pointer to the data to be stored as the value of the key
 *
 * Return: 1 upon success and 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;

	if (ht != NULL && key != NULL && strcmp(key, "") != 0 && value != NULL)
	{
		idx = key_index((unsigned char *)key, ht->size);

		if (ht->array[idx] == NULL)
		{
			return (new_node(ht, &(ht->array[idx]), key, value));
		}

		return (link_node(ht, &(ht->array[idx]), key, value));
	}
	return (0);
}
/**
 * create_node - creates the new node
 * @k: key input
 * @v: value input
 *
 * Return: returns a pointer to the new node
 */
shash_node_t *create_node(char const *k, char const *v)
{
	shash_node_t *lnkNode;

	lnkNode = malloc(sizeof(shash_node_t));
	if (lnkNode == NULL)
		return (0);

	lnkNode->key = strdup(k);
	if (lnkNode->key == NULL)
	{
		free(lnkNode);
		return (0);
	}

	lnkNode->value = strdup(v);
	if (lnkNode->value == NULL)
	{
		free(lnkNode->key);
		free(lnkNode);
		return (0);
	}
	return (lnkNode);
}

/**
 * new_node - inserts a key/pair value in an empty slot on hash table
 * @h: a pointer to the pointer of the hash table
 * @ht: pointer to the hash table
 * @k: pointer to the data to be stored as the key
 * @v: pointer to the data to be stored as the value of the key
 *
 * Return: return 1 on succes and 0 otherwise
 */
int new_node(shash_table_t *ht, shash_node_t **h, const char *k, const char *v)
{
	*h = malloc(sizeof(shash_node_t));
	if (*h == NULL)
		return (0);

	(*h)->sprev = NULL;
	(*h)->next = NULL;
	(*h)->snext = NULL;
	(*h)->key = strdup(k);
	if ((*h)->key == NULL)
	{
		free((*h));
		return (0);
	}

	(*h)->value = strdup(v);
	if ((*h)->value == NULL)
	{
		free((*h)->key);
		free((*h));
		return (0);
	}
	ht->shead = *h;
	ht->stail = *h;

	return (1);
}

/**
 * link_node - creates linked list of colliding keys on hash table
 * @h: a pointer to the pointer of the hash table
 * @ht: pointer to the hash table
 * @k: pointer to the data to be stored as the key
 * @v: pointer to the data to be stored as the value of the key
 *
 * Return: return 1 on succes and 0 otherwise
 */
int link_node(shash_table_t *ht, shash_node_t **h, const char *k, const char *v)
{
	shash_node_t *temp, *lnkNode;
	char *tmp;

	while (temp) /* first confirm key exists */
	{
		if (strcmp(k, temp->key) == 0)
		{
			tmp = temp->value;
			temp->value = strdup(v);
			if (temp->value == NULL)
				return (0);
			free(tmp);
			return (1);
		}
		temp = temp->snext;
	}
	lnkNode = create_node(k, v);
	temp = *h;
	while (temp->next)
		temp = temp->next;

	temp->next = lnkNode;
	lnkNode->next = NULL;
	temp = *h;
	 /* when it's just one node or  key is less than the first item */
	if (!temp->snext || k[0] < temp->key[0])
	{
		if (!temp->snext) /* if it's just one node */
			temp->next = lnkNode; /* not need if list is longer */
		if (k[0] > temp->key[0]) /* if new key is greater than old */
		{
			temp->snext = lnkNode;
			lnkNode->sprev = temp;
			lnkNode->snext = NULL;
			ht->stail = lnkNode;
			return (1);
		}
		lnkNode->sprev = NULL; /* if old key is greater than new */
		lnkNode->snext = temp;
		temp->sprev = lnkNode;
		*h = lnkNode;
		ht->shead = lnkNode;
		return (1);
	}

	while (temp && temp->snext)
	{
		if (temp->key[0] < *k && *k < temp->snext->key[0])
		{
			lnkNode->snext = temp->snext;
			temp->snext = lnkNode;
			lnkNode->sprev = temp;
			temp->snext->sprev = lnkNode;
			return (1);
		}
		temp = temp->next;
	}
	ht->stail->snext = lnkNode;
	lnkNode->snext = NULL;
	ht->stail = lnkNode;
	return (1);
}
/**
 * shash_table_get - retrieves the value of a key
 * @ht: pointer to the table
 * @key: key to be retrieved
 *
 * Return: returns a pointer to the value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *ptr;
	unsigned long int idx;

	if (ht != NULL && key != NULL && strcmp(key, "") != 0)
	{
		idx = key_index((unsigned char *)key, ht->size);
		if (ht->array[idx] == NULL)
			return (NULL);

		ptr = ht->array[idx];

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
/**
 * shash_table_print - prints hash table as a python dictionary
 * @ht: pointer to the hashtable
 *
 * Return: returns Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr;
	int flag;
	unsigned long int i;

	flag = 0;
	printf("{");
	if (ht != NULL)
	{

		for (i = 0; i < ht->size; i++)
		{
			ptr = ht->array[i];

			while (ptr)
			{
				if (flag > 0)
				{
					printf(", ");
					flag = 0;
				}

				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->snext;
				flag++;
			}
		}
		printf("}\n");
	}
}
/**
 * shash_table_print_rev - Prints the table in reverse
 * @ht: pointer to the hash table
 *
 * Return: returns nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr;
	unsigned long int i;
	int flag;

	if (ht != NULL)
	{
		flag = 0;
		printf("{");

		for (i = ht->size - 1; i > 0; i--)
		{
			ptr = ht->array[i];

			while (ptr)
			{
				if (flag > 0)
				{
					printf(", ");
					flag = 0;
				}

				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->sprev;
				flag++;
			}
		}
		printf("}\n");
	}
}
/**
 * shash_table_delete - deletes the hash tables by freeing alloc'd memory
 * @ht: pointer to the hash table
 *
 * Return: returns nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *ptr1;
	shash_node_t *ptr2;
	unsigned long int i;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			ptr1 = ht->array[i];

			while (ptr1)
			{
				ptr2 = ptr1->snext;
				if (ptr1->key && ptr1->value)
				{
					free(ptr1->key);
					free(ptr1->value);
				}
				free(ptr1);
				ptr1 = ptr2;
			}
		}
		free(ht->array);
		free(ht->shead);
		free(ht->stail);
		free(ht);
	}
}
