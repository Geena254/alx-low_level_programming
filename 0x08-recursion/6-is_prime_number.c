#include "main.h"

int actual_prime(int n, int j);

/**
 * is_prime_number - decides whether an integer is a prime number or not
 * @n: integer to be checked
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to be evaluated
 * @j: iterator
 * Return: 1 if n is a prime number, 0 otherwise
 */

int actual_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (actual_prime(n, j - 1));
}
