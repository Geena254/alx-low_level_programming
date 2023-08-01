#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the node
 * at a given index in a listint_t linked list
 * @head: The pointer to a pointer to the head of the list
 * @index: The index of the node to be deleted (from 0)
 * Return: 1 if the deletion succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *temp;

	if (*head == NULL)
		return (-1);

	/* Special case: Delete the first node */
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}

	/* Check if the list ends before the desired position */
	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
