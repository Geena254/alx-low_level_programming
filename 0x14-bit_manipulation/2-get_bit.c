#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at an index
 * in a decimal number.
 * @n: The number to search
 * @index: index, starting from 0, of the bit
 * Return: value of the bit at index, -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	/* Right shift n by index positions and check the rightmost bit */
	return ((n >> index) & 1);
}
