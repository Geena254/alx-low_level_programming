#include "main.h"

/**
 * *_memcpy - A function that copies memory area
 * @n: number of bytes from memory area to be copied
 * @src: source memory area where copied
 * @dest: destination memory area where stored
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
