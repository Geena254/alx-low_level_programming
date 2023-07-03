#include "main.h"

/**
 * *_memcpy - A function that copies memory area
 * @n: number of bytes from memory area to be copied
 * @src: soucre memory area
 * @dest: destination memory area
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int s = 0;

	for (; s < i; i++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}
