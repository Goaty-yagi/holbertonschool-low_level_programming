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
	hash_node_t *node, *temp;
	
	counter = 0;

	if (ht != NULL)
	{
		while (counter < ht->size)
		{
			if (ht->array[counter])
			{
				node = ht->array[counter];
				while (node)
				{
					temp = node;
					node = node->next;
					free(temp->key);
					free(temp->value);
					free(temp);
				}
			}
			counter = counter + 1;
		}
		free(ht->array);
		free(ht);
	}
}
