#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13
 * @s: the pointer to string parameters
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char dat1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == dat1[j])
			{
				s[i] = datrot[j];
				break;
			}
		}
	}
	return (s);
}
