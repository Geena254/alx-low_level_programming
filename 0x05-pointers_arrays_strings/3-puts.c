#include "main.h"

/**
 * _puts - Prints a string
 * @str: string to be checked
 * Return: Always 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
