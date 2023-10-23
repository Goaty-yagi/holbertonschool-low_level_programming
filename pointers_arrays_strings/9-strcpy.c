#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - calls *_strcpy
 * @dest: char array
 * @src: char array
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (src);
}
