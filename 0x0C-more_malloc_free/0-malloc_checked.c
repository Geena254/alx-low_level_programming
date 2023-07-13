#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Function that alloctes memory using malloc
 * @b: the number of bytes to allocate
 * Return: A pointer to the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *pr;

	pr = malloc(b);

	if (pr == NULL)
		exit(98);

	return (pr);
}
