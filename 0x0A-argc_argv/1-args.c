#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * followed by a new line
 * @argv: the array containing command line arguements
 * @argc: The number of arguements in command line
 * Return: 0 on success
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
