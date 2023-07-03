#include <stdio.h>
#include "main.h"

/**
 * _memset - Fills a block of memory with a constant byte value
 * @s: starting address of memory block to be filled
 * @b: The constant byte value to fill the memory with
 * @n: number of bytes
 * Return: new values in n bytes of changed array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
