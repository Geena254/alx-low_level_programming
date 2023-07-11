#include "main.h"
#include <stdlib.h>

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, d, y;

	flag = 0;
	y = 0;

	for (d = 0; s[d] != '\0'; d++)
	{
		if (s[d] == ' ')
			flag = 0;

		else if (flag == 0)
			flag = 1;
		y++;
	}

	return (y);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success) 
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int j, k = 0, length = 0, words, c = 0, begin, end;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (*(str + length))
		length++;

	words = count_word(str);

	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (j = 0; j <= length; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (c)
			{
				end = j;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);

				while (begin < end)
					*tmp++ = str[begin++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			begin = j;
	}
	matrix[k] = NULL;

	return (matrix);
}
