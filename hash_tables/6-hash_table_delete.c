#include "hash_tables.h"

/**
 * hash_table_delete - call hash_table_delete
 * @ht: hash_table_t
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int counter;

	counter = 0;

	if (ht != NULL)
	{
		while (counter < ht->size)
		{
			if (ht->array[counter])
			{
				if (ht->array[counter]->next)
				{
					free(ht->array[counter]->next);
				}
				free(ht->array[counter]);
			}
			counter = counter + 1;
		}
		free(ht->array);
		free(*ht->array);
		free(ht);
	}
}
