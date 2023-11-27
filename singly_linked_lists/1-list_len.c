#include "lists.h"

/**
 * list_len - calls list_len
 * @h: node header
 *
 * Return: sum of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count = count + 1;
		h = h->next;
	}
	return (count);
}
