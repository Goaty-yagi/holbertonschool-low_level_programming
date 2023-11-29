#include "lists.h"

/**
 * add_dnodeint_end - calls add_dnodeint_end
 * @head: node header pointer pointer
 * @n:  int
 *
 * Return: new address
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *p;

	p = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
    new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (p->next != NULL)
		{
			p = p->next;
		}
        new->prev = p;
		p->next = new;
	}
	return (new);
}
