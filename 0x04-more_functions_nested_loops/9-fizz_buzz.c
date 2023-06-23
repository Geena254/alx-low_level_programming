#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Description: prints numbers from 1 to 100
* Fizz for multiples of 3, Buzz for multiples of 5,
* and Fizz buzz for multiples of both
*
* Return: always 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("Fizzbuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else if (i < 100)
		{
		printf(" ");
		}
	}
	printf("\n");
	return (0);
}
