#include "lists.h"

/**
 * print_dlistint - prints all nodes of a doubly linked dlistint_t list
 * @h: a doubly linked dlistint_t list
 *
 * Return: number of nodes in h
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
