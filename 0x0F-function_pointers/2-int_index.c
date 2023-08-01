#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @cmp: pointer to the function int_index to be used to compare values
  * @size: size of the array
  * @array: the declared array
  *
  * Return: void
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}

	return (-1);
}
