#include "lists.h"

/**
 * free_dlistint - Function that frees a dlistint_t list
 * @head: head of the list
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
