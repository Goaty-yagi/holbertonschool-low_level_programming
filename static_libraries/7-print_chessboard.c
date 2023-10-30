#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * print_chessboard - calls print_chessboard
 * @a: nested char pointer
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int a_size, a_counter, b_counter;

	a_size = sizeof(*a);

	a_counter = b_counter = 0;

	while (b_counter < a_size)
	{
		while (a_counter < 8)
		{
			printf("%c", a[b_counter][a_counter]);
			a_counter = a_counter + 1;
		}
		printf("\n");
		b_counter = b_counter + 1;
		a_counter = 0;
	}
}
