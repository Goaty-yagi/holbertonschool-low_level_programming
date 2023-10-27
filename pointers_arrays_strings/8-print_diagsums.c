#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - calls print_diagsums
 * @a: int pointer
 * @size: int
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int a_counter, e_line, a_size, first_sum, second_sum, f_counter, s_counter;

	int *array = a;

	a_counter = f_counter = e_line = 0;

	s_counter = size - 1;

	a_size = size * size;

	while (a_counter < a_size)
	{
		if (a_counter == f_counter)
		{
			first_sum = first_sum + array[a_counter];
		}
		if (a_counter == s_counter)
		{
			second_sum = second_sum + array[a_counter];
		}
		if ((a_counter + 1) % size == 0 && a_counter != 0)
		{
			e_line = e_line + 1;
			f_counter = size * e_line + e_line;
			s_counter = size * e_line + (size - (e_line + 1));
		}
		a_counter = a_counter + 1;
	}
	printf("%d, %d", first_sum, second_sum);
	printf("\n");
}
