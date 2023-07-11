#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - function that returns a duplicate of string str
 * @str: the pointer to string
 * Return: pointer to the duplicate, NULL if allocation fails
 */

char *_strdup(char *str)
{
	char *dupl;
	int length;
	int c;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
		length++;

	dupl = malloc(sizeof(char) * (length + 1));

	if (dupl == NULL)
		return (NULL);

	for (c = 0; c < length; c++)
		dupl[c] = str[c];

	dupl[length] = '\0';

	return (dupl);
}
