#include "main.h"

/**
 * *_strcpy - copies the string pointed to by  src
 * @src: the char type string
 * @dest: the char type string
 * Description: copies the string pointed to by pointer 'src' to
 * the buffer pointed to by 'dest'
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int b = -1;

	do {
		b++;
		dest[b] = src[b];
	} while (src[b] != '\0');

	return (dest);
}
