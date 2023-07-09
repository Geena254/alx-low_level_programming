#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies new numbers
 * followed by a new line
 * @argv: the array containing command line arguements
 * @argc: The number of arguements in command line
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
