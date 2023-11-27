#include "lists.h"

/**
 * free_list - calls free_list
 * @head: node header pointer pointer
 *
 * Return: new address
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
