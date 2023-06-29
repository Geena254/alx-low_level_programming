#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @n: the input value
 * Return: value of n
 */

char *leet(char *n)
{
	int j, z;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (j = 0; n[j] != '\0'; j++)
	{
		for (z = 0; z < 10; z++)
		{
			if (n[j] == s1[z])
			{
				n[j] = s2[z];
			}
		}
	}
	return (n);
}
