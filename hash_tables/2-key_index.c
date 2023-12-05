#include "hash_tables.h"

/**
 * key_index - call key_index
 * @key: key
 * @size: size
 *
 * Return: a pointer to the newly created hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
