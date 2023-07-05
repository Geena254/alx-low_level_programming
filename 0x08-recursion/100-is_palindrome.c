#include "main.h"

int check_pal(char *s, int j, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string of length to be calculated
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to be checked
 * @j: iterator
 * @length: string length
 * Return: 1 if palindrome, 0 if not
 */

int check_pal(char *s, int j, int length)
{
	if (*(s + j) != *(s + length - 1))
		return (0);
	if (j >= length)
		return (1);
	return (check_pal(s, j + 1, length - 1));
}
