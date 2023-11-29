#include "lists.h"

/**
 * free_dlistint - calls free_dlistint
 * @head: node header pointer pointer
 *
 * Return: new address
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
