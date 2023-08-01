#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node
 * at a given position in a listint_t linked list.
 * @head: the pointer to a pointer to the head of the list.
 * @idx: the index of the list where the new node should be added from 0)
 * @n: The value to be stored in the new node.
 * Return: The address of the new node, NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *current = *head;

	/* Create a new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/* Special case: Insert at the beginning */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Traverse to the node at position idx - 1 */
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	/* Check if the list ends before the desired position */
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Update pointers to insert the new node */
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
