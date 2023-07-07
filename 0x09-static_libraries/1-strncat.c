#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * using at most n bytes from src
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int string_length;
	int i;

	string_length = 0;
	while (dest[string_length] != '\0')
	{
		string_length++;
	}

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[string_length] = src[i];
		string_length++;
		i++;
	}
	dest[string_length] = '\0';
	return (dest);
}
