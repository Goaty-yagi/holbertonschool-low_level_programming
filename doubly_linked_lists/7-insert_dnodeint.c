#include "lists.h"

/**
 * insert_dnodeint_at_index - calls insert_dnodeint_at_index
 * @h: node header pointer pointer
 * @idx: int
 * @n: int
 * Return: new address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *p, *pre;
	unsigned int counter;

	new = malloc(sizeof(dlistint_t));
	pre = malloc(sizeof(dlistint_t));
	if (new == NULL || pre == NULL)
		return (NULL);
	p = *h;
	counter = 0;
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0 || *h == NULL)
	{
		new->next = *h;
		if(*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (p != NULL)
	{
		if (counter == idx)
		{
			new->next = p;
			p->prev = new;
			new->prev = pre;
			pre->next = new;
			if (idx == 0)
			{
				*h = new;
			}
			return (new);
		}
		pre = p;
		p = p->next;
		counter = counter + 1;
	}
	if (counter == idx)
	{
		new->prev = pre;
		pre->next = new;
		return (new);
	}
	return (NULL);
}
