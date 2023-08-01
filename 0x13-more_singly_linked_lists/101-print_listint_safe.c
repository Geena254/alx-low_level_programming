#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Function that prints a listint_t linked list.
 * @head: The pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr = head;
	size_t cnt = 0;

	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		cnt++;
		curr = curr->next;

		if (curr != NULL && curr >= head)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			exit(98);
		}
	}

	return cnt;
}
