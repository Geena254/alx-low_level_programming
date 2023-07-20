#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all its paramters.
 * @n: Number of paramters passed to function
 * @...: A variable number of parameters to calculate the sum
 * Return: If n == 0 - return 0
 * otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j, sum;

	sum = 0;

	va_start(ap, n);

	for (j = 0; j < n; j++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
