#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @n: number of arrays to be printed
 * @a: array to be checked
 */

void print_array(int *a, int n)
{
	int numbers_in_array;

	for (numbers_in_array = 0; numbers_in_array < n; numbers_in_array++)
	{
		printf("%d", a[numbers_in_array]);
		if (numbers_in_array != (n - 1))
		{
			printf(", ");
		}

	}
	putchar('\n');
}
