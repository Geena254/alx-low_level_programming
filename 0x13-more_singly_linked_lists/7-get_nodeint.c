#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Function that gets the nth node
 * of a listint_t linked list
 * @head: The pointer to the head of the list
 * @index: The index of the node, starting from 0
 * Return: Pointer to the nth node, NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr;

	curr = head;
	while (index > 0 && curr != NULL)
	{
		curr = curr->next;
		index--;
	}

	return (curr);
}
