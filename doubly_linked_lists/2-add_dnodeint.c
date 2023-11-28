#include "lists.h"

/**
 * add_dnodeint - calls add_dnodeint
 * @head: node header pointer pointer
 * @n: int
 *
 * Return: new address
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = *head;
	*head = new;
	return (new);
}
