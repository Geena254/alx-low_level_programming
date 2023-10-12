#include "lists.h"

/**
 * dlistint_t *add_dnodeint - Function adds a new node at the beginning
 * of a dlistint_t list
 * @head: head of the list
 * @n: data of element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *he;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	he = *head;

	if (he != NULL)
	{
		while (he->prev != NULL)
			he = he->prev;
	}

	new_node->next = he;

	if (he != NULL)
		he->prev = new_node;

	*head = new_node;

	return (new_node);
}
