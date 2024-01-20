#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search.
 *
 * @array: Pointer to the array to be searched.
 * @size: Size of the array.
 * @value: Value to be searched for.
 *
 * Description: This function performs a linear search on the given array
 * to find the specified value. It iterates through each element in the array,
 * printing the checked values, and returns the first occurrence of
 * the value if found. If the array is NULL or the value is not found,
 * the function returns -1 to indicate failure.
 *
 * Return: On success, returns the first occurrence of @value in @array.
 *         On failure (if @array is NULL or @value is not found), returns -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t counter = 0;
	int FAILURE_CODE = -1;

	if (array == NULL)
		return (FAILURE_CODE);

	while (counter < size)
	{
		printf("Value checked array[%lu] = [%d]\n", counter, array[counter]);
		if (array[counter] == value)
			return (array[counter]);

		counter = counter + 1;
	}
	return (FAILURE_CODE);
}
