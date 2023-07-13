#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function that creates an array of integers
 * @min: the smallest range of values stored
 * @max: the largest range of values stored and number of elements
 * Return: a pointer to the new array
 */

int *array_range(int min, int max)
{
	int *pr;
	int j, siz;

	if (min > max)
		return (NULL);

	siz = max - min + 1;

	pr = malloc(sizeof(int) * siz);
	if (pr == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		pr[j] = min++;

	return (pr);
}
