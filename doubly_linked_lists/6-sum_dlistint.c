#include "lists.h"

/**
 * sum_dlistint - calls sum_dlistint
 * @head: node header pointer pointer
 *
 * Return: new address
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
