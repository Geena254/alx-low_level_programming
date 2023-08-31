#include "main.h"

/**
 * clear_bit - Function that sets the value of a given bit to 0
 * @n: the pointer to the number to change
 * @index: Index of the bit to clear
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
