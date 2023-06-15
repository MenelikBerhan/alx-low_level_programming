#include "lists.h"

/**
 * dlistint_len - finds number of nodes in a doubly linked dlistint_t list
 * @h: a doubly linked dlistint_t list
 *
 * Return: number of nodes in h
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
