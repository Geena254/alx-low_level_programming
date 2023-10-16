#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int string_length;
	int i;

	string_length = 0;
	while (dest[string_length] != '\0')
	{
		string_length++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[string_length] = src[i];
		string_length++;
		i++;
	}

	dest[string_length] = '\0';
	return (dest);
}
