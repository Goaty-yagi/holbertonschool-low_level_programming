#include "hash_tables.h"

/**
 * hash_table_print - call hash_table_print
 * @ht: hash_table_t
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int counter, init_print;
	hash_node_t *node;

	counter = init_print = 0;

	if (!ht)
	{
		printf("{}\n");
	}
	else
	{
		printf("{");
		while (counter < ht->size)
		{
			if (ht->array[counter])
			{
				node = ht->array[counter];
				while (node)
				{
					if (init_print)
					{
						printf(", ");
					}
					printf("'%s': '%s'", node->key, node->value);
					node = node->next;
					init_print = 1;
				}
			}
			counter = counter + 1;
		}
		printf("}\n");
	}
}
