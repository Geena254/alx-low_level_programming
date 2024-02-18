#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: A pointer to the first element of array to search
 * @size: The number elements in the array
 * @value: Value to search for
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array == NULL)
	{
		return (-1);  /* Invalid array, return -1 */
	}

	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%li] = [%i]\n", a, array[a]);
		if (array[a] == value)
		{
			return (a);  /* Value found, return the index */
		}
	}

	return (-1);  /* Value not found in the array */
}
