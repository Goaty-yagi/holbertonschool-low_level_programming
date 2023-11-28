#include "lists.h"

/**
 * dlistint_len - calls dlistint_len
 * @h: node header
 *
 * Return: sum of nodes
 */

size_t dlistint_len(const dlistint_t *h)
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
