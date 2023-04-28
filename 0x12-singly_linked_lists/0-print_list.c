#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of list_t list h.
 * @h: a list_t list to be printed.
 *
 * Return: The number of nodes in list h.
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}

	return (i);
}
