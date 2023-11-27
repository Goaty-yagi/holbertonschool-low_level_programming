#include "lists.h"

/**
 * add_node - calls add_node
 * @head: node header pointer pointer
 * @str: char pointer
 *
 * Return: new address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
