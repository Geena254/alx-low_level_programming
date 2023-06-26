#include "main.h"

/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: the string reference pointer used
 * Return: Always 0
 */

void print_rev(char *s)
{
	int begin = 0;

	while (s[begin])
		begin++;
	while (begin--)
		_putchar(s[begin]);
	_putchar('\n');
}
