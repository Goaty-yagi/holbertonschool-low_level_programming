#include "hash_tables.h"

/**
 * hash_table_create - hash_table_create
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (!size)
	{
		return (NULL);
	}

	ht = malloc(size  * sizeof(hash_table_t) / 2 + sizeof(hash_table_t));
	return (ht);
}
