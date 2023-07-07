#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: the string to be checked
 * @c: the input character
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
