#include "lists.h"

/**
 * get_dnodeint_at_index - calls get_dnodeint_at_index
 * @head: node header pointer pointer
 * @index:  int
 *
 * Return: new address
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p;
	unsigned int counter;

	p = head;
	counter = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	while (counter <= index)
	{
		if (counter == index)
		{
			return (p);
		}
		p = p->next;
		counter = counter + 1;
	}
	return (NULL);
}
