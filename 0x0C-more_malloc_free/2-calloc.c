#include "main.h"
#include <stdlib.h>

/**
 * *_memset - it fills memory with a constant byte
 * @s: the memory area to be filled
 * @b: character to copy
 * @n: number of times to copy char b
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory for an array usig malloc
 * @nmemb: elements of array
 * @size: size of each element
 * Return: 0 on success, NULL if allocation fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);

	_memset(t, 0, nmemb * size);

	return (t);
}
