#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Function that gets the sum of all the data (n)
 * in a listint_t linked list
 * @head: The pointer to the head of the list
 * Return: The sum of all the data, 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr;

	curr = head;
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
