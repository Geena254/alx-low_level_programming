#include "search_algos.h"

/**
 * interpolation_search- A function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: A pointer to the first element of array to search in
 * @size: The number elements in array
 * @value: Value to search for
 * Return: Index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
    size_t pos;
    size_t low = 0;
    size_t high = size - 1;

    if (array == NULL)
        return -1;  /* Invalid array, return -1 */

    while ((array[low] != array[high]) &&
           (value >= array[low]) && (value <= array[high]))
    {
        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
        {
            return pos;  /* Value found, return the index */
        }
        else if (array[pos] < value)
        {
            low = pos + 1;  /* Search in the right half */
        }
        else
        {
            high = pos - 1;  /* Search in the left half */
        }
    }
    if (value == array[low])
    {
	printf("Value checked array[%lu] = [%d]\n", low, array[low]);
	return (low);
    }
    pos = low + (((double)(high - low) / (array[high] - array[low]))
		 * (value - array[low]));
    printf("Value checked array[%lu] is out of range\n", pos);
    return -1;  /* Value not found in the array */
}
