#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
	int a;
    str = "Holberton!";
    print_rev(str);
	a = _strlen(str);

	printf("%d", a);
    return (0);
}