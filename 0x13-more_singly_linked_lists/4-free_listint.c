#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Function that frees a listint_t list.
 * @head: The pointer to the head of the list.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	do {
		current = head;
		head = head->next;
		free(current);
	} while (head != NULL);
}
