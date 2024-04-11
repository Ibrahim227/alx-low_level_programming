#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array in search
 * @size: number of elements
 * @value: a value to print out
 * Return: value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1); /* Return -1 if the array is NULL */

	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i); /* Return the index if the value is found */
	}
	return (-1); /* Return -1 if the value is not found in the array */
}
