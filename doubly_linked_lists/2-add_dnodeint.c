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
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = *head;
	}
	*head = new;
	return (new);
}
