#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: string to be checked
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length_string = 0;

	while (s[length_string])
		length_string++;
	return (length_string);
}
