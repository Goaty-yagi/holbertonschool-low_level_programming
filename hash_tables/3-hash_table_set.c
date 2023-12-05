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
	hash_node_t *node;
	unsigned long int index, is_found, size;

	if (!key)
	{
		return (0);
	}
	node = malloc(sizeof(hash_node_t));
	size = ht->size / sizeof(hash_node_t);
	is_found = 0;
	index = key_index((const unsigned char*)key, size);
	node->key = strdup(key);
	node->value = strdup(value);

	if (!ht->array[index])
	{
		ht->array[index] = node;
	}
	else
	{
		index = 0;
		while (!is_found)
		{
			if (!ht->array[index])
			{
				ht->array[index] = node;
				is_found = 1;
			}
		}
	}
	return (1);
}
