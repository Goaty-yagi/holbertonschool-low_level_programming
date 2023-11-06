#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - calls _strdup
 * @str:  str
 *
 * Return: duplicared char array
 */

char *_strdup(char *str)
{
	int len;

	char *array;

	if (!str)
	{
		return (NULL);
	}

	len = strlen(str);

	array = malloc(len * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	
	array[len] = '\0';
	
	while (len)
	{
		array[len - 1] = str[len - 1];
		len--;
	}

	return (array);
}
