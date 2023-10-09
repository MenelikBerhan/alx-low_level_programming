#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers
 *			   using the Jump search algorithm.
 * @list: a pointer to the head of the list to search in.
 * @size: the number of nodes in list.
 * @value: value to search for.
 *
 * Return: a pointer to the first node where value is located or NULL if value
 *		   is not found. Prints each comparison of list element with 'value'.
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, jump;
	listint_t *start, *end;

	if (!list)
		return (NULL);
	start = end = list;
	jump = sqrt(size);
	while (end->n < value)
	{
		start = end;
		for (i = 0; i < jump && end->next; i++)
			end = end->next;
		printf("Value checked at index [%lu] = [%d]\n", end->index, end->n);
		if (!(end->next))
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
													start->index, end->index);
	while (start && start->index <= end->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", start->index, start->n);
		if (start->n == value)
			return (start);
		start = start->next;
	}
	return (NULL);
}
