#include "main.h"

/**
 * get_endianness - Function that checks the endianness of the system
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *)&i;

	/* Return the value of the first byte */
	return (*c);
}
