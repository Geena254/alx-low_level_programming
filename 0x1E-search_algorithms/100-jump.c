#include "search_algos.h"
#include <math.h>

/**
 * jump_search - A function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: A pointer to the first element of array to search in
 * @size: The number elements in array
 * @value: Value to search for
 * Return: Index where vaue is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t prev = 0;
	size_t i;

	if (array == NULL)
	{
		return (-1);  /* Invalid array, return -1 */
	}

	while (array[prev] < value && prev < size)
	{
		prev += jump;

		if (prev < size)
		{
			printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		}
		else
		{
			prev = size - 1;
			break;
		}
	}
	/* causes 'found' msg even when value not in array */
	printf("Value found between indexes [%lu] and [%lu]\n", prev - jump, prev);

	for (i = prev - jump; i <= prev && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);  /* Value found, return the index */
	}

	return (-1);  /* Value not found in the array */
}
