#include "search_algos.h"

/**
 * print_array - Prints elements of an array within a specified range.
 *
 * @array: Pointer to the array to be printed.
 * @base: Starting index of the range.
 * @size: Ending index of the range.
 *
 * This function prints the elements of the array within the specified
 * range [base, size]. It displays the elements separated by commas
 * and ends the list with a newline character.
 *
 * Return: void
 */

void print_array(int *array, size_t base, size_t size)
{
	printf("Searching in array: ");
	while (base <= size)
	{
		if (base == size)
			printf("%d", array[base]);
		else
			printf("%d, ", array[base]);
		base++;
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array using binary search.
 *
 * @array: Pointer to the sorted array.
 * @size: Size of the array.
 * @value: Value to be searched for.
 *
 * This function performs binary search on the given sorted array to
 * find the specified value. It prints the array at each step of
 * the search and returns the index if found, otherwise -1.
 *
 * Return: On success, returns the found index.
 * On failure (if array is NULL), returns -1.
 */

int binary_search(int *array, size_t size, int value)
{
	int EXIT_CODE = -1;
	int reached;
	int right_index, left_index, int_size = (int)size;

	if (array == NULL)
		return (EXIT_CODE);

	right_index = int_size - 1;
	left_index = reached = 0;

	while (1)
	{
		print_array(array, left_index, right_index);
		if (reached)
			break;
		if (array[(right_index + left_index) / 2] > value)
			right_index = (right_index + left_index) / 2 - 1;
		else
			left_index = (right_index + left_index) / 2 + 1;

		if (array[left_index] == value)
		{
			reached = 1;
			EXIT_CODE = left_index;
		}
		else if (right_index - left_index == 0)
		{
			reached = 1;
			EXIT_CODE = -1;
		}
	}
	return (EXIT_CODE);
}
