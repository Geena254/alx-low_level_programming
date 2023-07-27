#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Function that returns the number of elements
 * in a linked list_t list
 * @h: pointer to the list_t list
 * Return: the number of elements (nodes) in the list
 */

size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}

	return (cnt);
}
