#include "lists.h"

/**
 * get_nodeint_at_index - Calcuates the sum of all the data (n) of
 * a listint_t linked list.
 * @head: a listint_t list.
 *
 * Return: The sum of data(n), or 0 if the list is empty.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
