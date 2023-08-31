#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Function that converts a binary number
 * to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * Return: The converted number, 0 if b is NULL and
 * there is one or more chars in the string b that is not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int k = 0;

	if (b == NULL)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		value = 2 * value + (b[k] - '0');
	}

	return (value);
}
