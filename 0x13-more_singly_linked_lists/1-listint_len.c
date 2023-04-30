#include "lists.h"

/**
 * listint_len -  Finds the number of elements in a linked listint_t list.
 * @h: a listint_t list.
 *
 * Return: the number of nodes in h.
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
