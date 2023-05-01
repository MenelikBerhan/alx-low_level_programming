#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - a function that prints a listint_t linked list. The
 * function can print lists with a loop by going through the list only once.
 * @head: a listint_t list to print.
 *
 * Return: The number of nodes in the list. If the function fails, it exits
 * with status 98.
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t **ptrs;
	int i = 0, loop = 0, size = 2;
	unsigned int addr;

	if (!head)
		return (0);
	ptrs = malloc(sizeof(listint_t) * size);
	if (!ptrs)
		exit(98);

	ptrs[i++] = head;

	while (head)
	{
		addr = (long) head;
		printf("[%#x] %d\n", addr, head->n);
		loop = is_loop(head->next, ptrs, i);
		if (loop)
		{
			addr = (long) head;
			printf("-> [%#x] %d\n", addr, (head->next)->n);
			free(ptrs);
			return (i);
		}

		if (i == size)
		{
			size = i * 2;
			ptrs = realloc(ptrs, (sizeof(listint_t) * size));
			if (!ptrs)
				exit(98);
		}

		ptrs[i++] = head->next;
		head = head->next;
	}

	free(ptrs);
	return (i - 1);
}

/**
 * is_loop - Checks if node is a start of a loop in a list by checking
 * if node is in array of pointers ptrs that are already passed through.
 * @node: node to be checked.
 * @ptrs: array of nodes already passed through.
 * @len: number of elements in array ptrs.
 *
 * Return: 1 if node is a start of a loop, or 0 otherwise.
*/
int is_loop(listint_t *node, const listint_t **ptrs, int len)
{
	int i = 0;

	if (!node || !ptrs)
		return (0);
	for (; i < len; i++)
	{
		if (ptrs[i] == node)
			return (1);
	}

	return (0);
}
