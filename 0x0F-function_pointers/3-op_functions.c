#include "3-calc.h"

int op_mod(int a, int b);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);

/**
 * op_add - function thet returns the sum of two numbers
 * @a: first number to use
 * @b: second number to use
 * Return: The sum.
 */

int op_add(int a, int b)
{
	int sum;

	sum = (a + b);
	return (sum);
}

/**
 * op_mul - Function that returns the product of two numbers.
 * @a: first number to use
 * @b: second number to use
 * Return: The product.
 */

int op_mul(int a, int b)
{
	int prod;

	prod = (a * b);
	return (prod);
}

/**
 * op_mod - function that returns the remainder of
 * the division of two numbers.
 * @a: first number to use
 * @b: second number to use
 * Return: The remainder of the division.
 */

int op_mod(int a, int b)
{
	int modu;

	modu = (a % b);
	return (modu);
}

/**
 * op_div - function thats returns the division of two numbers.
 * @a: first number to use
 * @b: second number to use
 * Return: The division.
 */

int op_div(int a, int b)
{
	int quo;

	quo = (a / b);
	return (quo);
}

/**
 * op_sub - Returns the difference of two numbers.
 * @a: first number to use
 * @b: second number to use
 * Return: The difference.
 */
int op_sub(int a, int b)
{
	int sub;

	sub = (a - b);
	return (sub);
}
