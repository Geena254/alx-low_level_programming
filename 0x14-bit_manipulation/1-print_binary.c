#include "main.h"
#include <stdio.h>

/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: The unsigned long int to be converted and printed.
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int k, cnt = 0;
	unsigned long int curr;

	for (k = 63; k >= 0; k--)
	{
		curr = n >> k;

		if (curr & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
