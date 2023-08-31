#include "main.h"

/**
 * flip_bits - Function that counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclus;
	unsigned int cnt = 0;

	exclus = n ^ m;
	while (exclus != 0)
	{
		cnt += exclus & 1;
		exclus >>= 1;
	}

	return (cnt);
}
