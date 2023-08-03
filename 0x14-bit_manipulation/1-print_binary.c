#include "main.h"
#include <stdio.h>

/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: The unsigned long int to be converted and printed.
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int i;

	for (i = 1 << 10; i > 0; i = i / 2)
	{
		if (n & i)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
