#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 * @list: a pointer to the head of the skip list to search in.
 * @value: value to search for.
 *
 * Return: a pointer to the first node where value is located or NULL if value
 *		   is not found. Prints each comparison of list element with 'value'.
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *start, *end;

	if (!list)
		return (NULL);
	start = end = list;
	while (end->n < value)
	{
		start = end;
		end = end->express;
		if (!end)
		{
			end = start;
			while (end->next)
				end = end->next;
			break;
		}
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
