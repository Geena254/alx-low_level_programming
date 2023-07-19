#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print a name using pointer to function
 * @name: STRING TO BE PRINTED
 * @f: the pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
