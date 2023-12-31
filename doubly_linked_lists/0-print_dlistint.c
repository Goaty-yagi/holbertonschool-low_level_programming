#include "lists.h"

/**
 * print_dlistint - calls print_dlistint
 * @h: node header
 *
 * Return: sum of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count = count + 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
