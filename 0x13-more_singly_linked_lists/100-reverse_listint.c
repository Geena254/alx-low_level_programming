#include "lists.h"

/**
 * reverse_listint - Function that reverses a listint_t linked list
 * @head: The pointer to a pointer to the head of the list
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *curr;
	listint_t *next_node;

	curr = *head;
	prev = NULL;
	while (curr != NULL)
	{
		next_node = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next_node;
	}

	*head = prev;
	return (*head);
}
