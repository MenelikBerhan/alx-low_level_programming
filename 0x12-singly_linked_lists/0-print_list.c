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
	const list_t *list = h;
	char *str;
	int i = 0, n;

	while (list)
	{
		str = list->str ? list->str : "(\"nil\")";
		n = list->str ? list->len : 0;

		printf("[%u] %s\n", n, str);

		list = list->next;
		i++;
	}

	return (i);
}
