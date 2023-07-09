#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coin to make
 * followed by a new line
 * @argv: array containing the program command line arguements
 * @argc: number of arguements in command line
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int cents, mincoin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		mincoin += 1;
	}
	printf("%d\n", mincoin);
	return (0);
}
