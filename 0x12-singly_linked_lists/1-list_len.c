#include "lists.h"
#include <stdio.h>

/**
 * list_len - find number of elements in a list_t list h.
 * @h: a list_t list.
 *
 * Return: The number of nodes in list h.
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
