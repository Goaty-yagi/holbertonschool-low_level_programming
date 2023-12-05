#include "hash_tables.h"

/**
 * hash_table_set - call hash_table_set
 * @ht: hash_table_t
 * @key: key
 * @value: val
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *temp;
	unsigned long int index, is_found;

	node = malloc(sizeof(hash_node_t));
	if (!node || !key || !ht)
	{
		return (0);
	}
	is_found = 0;
	index = key_index((const unsigned char *)key, ht->size);
	node->key = strdup(key);
	node->value = strdup(value);
	if (!ht->array[index])
	{
		ht->array[index] = node;
	}
	else
	{
		if (strcmp(ht->array[index]->key, node->key) == 0)
		{
			ht->array[index] = node;
		}
		else
		{
			temp = ht->array[index];
			ht->array[index] = node;
			ht->array[index]->next = temp;
		}
	}
	return (1);
}
