#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate command-line arguments into a single string
 * @ac: number of command-line arguments
 * @av: array of command-line arguments
 * Return: Pointer to the concatenated string,
 * or NULL if allocation fails or if ac is 0 or av is NULL
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0, m, n, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
			total_length++;
	}

	total_length += ac;

	str = malloc(sizeof(char) * total_length + 1);

	if (str == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
		{
			str[k] = av[m][n];
			k++;
		}

		str[k] = '\n';
		k++;
	}

	str[k] = '\0';

	return (str);
}
