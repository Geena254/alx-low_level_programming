#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: the array to be checked
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int m;
	int n;

	for (m = 0; m < 8; m++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[m][n]);
		_putchar('\n');
	}
}
