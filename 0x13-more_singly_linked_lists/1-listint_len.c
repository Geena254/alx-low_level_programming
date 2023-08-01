#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - Function that returns the number of elements
 * in a linked listint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	if (h == NULL)
		return (cnt);

	do {
		cnt++;
		h = h->next;
	} while (h != NULL);

	return (cnt);
}
