#include "lists.h"

/**
 * insert_dnodeint_at_index - calls insert_dnodeint_at_index
 * @h: node header pointer pointer
 * @idx: int
 * @n: int
 *
 * Return: new address
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *p, *pre;
	unsigned int counter;

	new = malloc(sizeof(dlistint_t));
	pre = malloc(sizeof(dlistint_t));
	p = *h;
	pre = NULL;
	counter = 0;

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	while (p != NULL)
	{
		if (counter == idx)
		{
			new->next = p;
			p->prev = new;
			new->prev = pre;
			pre->next = new;
			return (new);
		}
		if (counter != 0)
		{
			pre = p;
		}
		p = p->next;
		counter = counter + 1;
	}
	return (NULL);
}
