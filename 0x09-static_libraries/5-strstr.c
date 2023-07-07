#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string to be checked
 * @needle: substring to be used
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *k = needle;

		while (*m == *k && *k != '\0')
		{
			m++;
			k++;
		}

		if (*k == '\0')
			return (haystack);
	}
	return (0);
}
