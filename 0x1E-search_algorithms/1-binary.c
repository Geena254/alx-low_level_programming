#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: A pointer to the first element of array to search in
 * @size: The number elements in array
 * @value: Value to search for
 * Return: Index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
    size_t left = 0;
    size_t right = size - 1;
    size_t mid = 0;
    size_t x = 0;

    if (array == NULL)
    {
        return -1;  /* Invalid array, return -1 */
    }

    while (left <= right)
    {
        mid = (left + right) / 2;
        printf("Searching in array: ");
        for (x = left; x <= right; x++)
        {
            printf("%d", array[x]);
            if (x < right)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
        {
            return mid;  /* Value found, return the index */
        }
        else if (array[mid] < value)
        {
            left = mid + 1;  /* Search in the right half */
        }
        else
        {
            right = mid - 1;  /* Search in the left half */
        }
    }

    return -1;  /* Value not found in the array */
}
