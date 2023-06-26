#include "main.h"

/**
 * rev_string - a function that reverses a string
 * followed by a new line
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int length = 0, i = 0;
	char b;

	while (s[length] != '\0')
		length++;

	while (i < length--)
	{
		b = s[i];
		s[i++] = s[length];
		s[length] = b;
	}
}
