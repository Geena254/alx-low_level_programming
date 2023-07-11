#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Function that creates an array of chars
 * and initialies it with a specific char
 * @c: character to assign
 * @size: the desired size of array
 * Return: a pointer to the array, NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int a;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
		arr[a] = c;

	return (arr);
}
