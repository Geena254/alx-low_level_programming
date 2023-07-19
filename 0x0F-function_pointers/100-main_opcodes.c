#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its own opcodes
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	int bytes, j;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (j = 0; j < bytes; j++)
	{
		if (j == bytes - 1)
		{
			printf("%02hhx\n", array[j]);
			break;
		}
		printf("%02hhx ", array[j]);
	}
	return (0);
}
