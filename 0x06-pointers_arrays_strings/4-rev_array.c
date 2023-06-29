#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array of integers
 * @n: number of elements of array to reverse
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int s;
	int t;

	for (s = 0; s < n--; s++)
	{
		t = a[s];
		a[s] = a[n];
		a[n] = t;
	}
}
