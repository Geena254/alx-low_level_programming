#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list
 * and sets the head to NULL
 * @head: The pointer to a pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	while (*head != NULL)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
	}

	*head = NULL;
}
