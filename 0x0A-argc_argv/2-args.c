#include <stdio.h>

/**
 * main - program that prints arguments it receives
 * followed by a new line
 * @argv: the array containing command line arguements
 * @argc: The number of arguements in command line
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
