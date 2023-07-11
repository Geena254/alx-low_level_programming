#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: string to be copied from
 * @s2: string to be copied from
 * Return: 0 on success, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int leng1, leng2, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	leng1 = 0;
	while (s1[leng1] != '\0')
		leng1++;
	leng2 = 0;
	while (s2[leng2] != '\0')
		leng2++;

	conc = malloc(sizeof(char) * (leng1 + leng2 + 1));

	if (conc == NULL)
		return (NULL);

	for (j = 0; j < leng1; j++)
		conc[j] = s1[j];
	for (j = 0; j < leng2; j++)
		conc[j + leng1] = s2[j];
	conc[leng1 + leng2] = '\0';

return (conc);
}
