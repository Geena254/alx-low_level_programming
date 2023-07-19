#include "function_pointers.h"

/**
 * int_index - function that searches for an integer and returns
 * the index of the first element
 * @array: the array
 * @size: number of element in array
 * @array: the array
 * @cmp: the pointer to be used to compare values
 * Return: 0 on success
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
