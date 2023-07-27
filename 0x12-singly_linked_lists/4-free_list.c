#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function that frees a list_t list
 * @head: a pointer to the head of the list_t list
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
