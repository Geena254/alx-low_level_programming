#include "main.h"

/**
 * _puts - Prints a string
 * @s: string to be checked
 * Return: Always 0
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
