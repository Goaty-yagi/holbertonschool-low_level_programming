#include "lists.h"

/**
 * delete_dnodeint_at_index - calls delete_dnodeint_at_index
 * @head: node header pointer pointer
 * @index: int
 *
 * Return: int
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p;
	unsigned int counter;

	p = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	counter = 0;
	if (index == 0)
	{
		if (p->next != NULL)
			p->next->prev = NULL;
		*head = p->next;
		free(p);
		return (1);
	}
	while (p != NULL && counter < index)
	{
		p = p->next;
		counter = counter + 1;
	}
	if (p == NULL)
	{
		return (-1);
	}
	if (p->next != NULL)
	{
		p->next->prev = p->prev;
	}
	p->prev->next = p->next;
	free(p);
	return (1);
}
