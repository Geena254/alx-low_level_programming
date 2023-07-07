#include "main.h"

/**
 * _strcmp - function that compares two string values
 * @s1: first string to be checked
 * @s2: second string to be checked
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int j;

	j = 0;
	while (s1[j] != '\0' && s2[j] != '\0')
	{
		if (s1[j] != s2[j])
		{
			return (s1[j] - s2[j]);
		}
		j++;
	}
	return (0);
}
