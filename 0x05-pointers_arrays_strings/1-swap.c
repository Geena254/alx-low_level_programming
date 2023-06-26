#include "main.h"

/**
 * swap_int - function that takes in two variable integers and swaps them
 * @a: the first integer to swap and store address of b
 * @b: the second integer to swap and store address of a
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
