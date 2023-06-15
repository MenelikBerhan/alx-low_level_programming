#include "lists.h"

/**
 * sum_dlistint - computes the sum of all the data(n) of a dlistint_t list
 * @head: a doubly linked dlistint_t list
 *
 * Return: the sum of all data(n) or 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;

	return (sum);
}
