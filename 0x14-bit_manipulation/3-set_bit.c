#include "main.h"

/**
 * set_bit - Function that sets a bit to 1 at a given index
 * @n: The pointer to the number to change
 * @index: Index, starting from 1, of the bit to set to 1
 * Return: 1 on success, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* Assuming 64-bit bytes */
	if (index > 63)
		return (-1);

	*n |= (1 << index);
	return (1);

}
