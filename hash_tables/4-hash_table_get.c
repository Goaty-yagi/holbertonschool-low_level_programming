#include "hash_tables.h"

/**
 * hash_table_get - call hash_table_get
 * @ht: hash_table_t
 * @key: key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int counter;

	counter = 0;
	(void)key;
	while (counter < ht->size)
	{
		if (ht->array[counter])
		{
			if (strcmp(ht->array[counter]->key, key) == 0)
			{
				return (ht->array[counter]->value);
			}
			if (ht->array[counter]->next)
			{
				if (strcmp(ht->array[counter]->next->key, key) == 0)
				{
					return (ht->array[counter]->next->value);
				}
			}
		}
		counter = counter + 1;
	}
	return (NULL);
}
